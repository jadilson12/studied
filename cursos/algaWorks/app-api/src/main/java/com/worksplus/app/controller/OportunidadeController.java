package com.worksplus.app.controller;

import com.worksplus.app.model.Oportunidade;
import com.worksplus.app.repository.OportunidadeRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.server.ResponseStatusException;
import org.springframework.web.servlet.ModelAndView;


import javax.validation.Valid;
import java.util.List;
import java.util.Optional;

@CrossOrigin // Cors permite todos acessos
@RestController
@RequestMapping("/oportunidades")
public class OportunidadeController {

    @Autowired
    private OportunidadeRepository oportunidades;

    @GetMapping
    public List<Oportunidade> listar() {

        return oportunidades.findAll();
    }

    @GetMapping("/{id}")
    public ResponseEntity<Oportunidade> buscar(@PathVariable Long id) {
        Optional<Oportunidade> oportunidade = oportunidades.findById(id);

        if (oportunidade.isEmpty()) {
            return ResponseEntity.notFound().build();
        }

        return ResponseEntity.ok(oportunidade.get());
    }

    @PostMapping
    @ResponseStatus(HttpStatus.CREATED)
    public Oportunidade adicionar(@Valid @RequestBody Oportunidade oportunidade) {
    	Optional<Oportunidade> oportunidadeExistente = oportunidades
				.findByDescricaoAndNomeProspecto(oportunidade.getDescricao(),
						oportunidade.getNomeProspecto());
    	if (oportunidadeExistente.isPresent()) {
    		throw new ResponseStatusException(HttpStatus.BAD_REQUEST,
					"Já existe uma oportunidade para esse prospeto com a meama descrção");
		}
        return oportunidades.save(oportunidade);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<Oportunidade> delete(@PathVariable  Long id) {
        Optional<Oportunidade> oportunidadeEncontada = oportunidades.findById(id);

        if (oportunidadeEncontada.isPresent()) {
            oportunidades.deleteById(id);
            return ResponseEntity.noContent().build();
        }
        return ResponseEntity.notFound().build();
    }

    @PutMapping("/{id}")
    public Oportunidade atualizar(@PathVariable Long id, @RequestBody Oportunidade oportunidade) {
    oportunidades.findById(id);

      return oportunidades.save(oportunidade);
    }
}
