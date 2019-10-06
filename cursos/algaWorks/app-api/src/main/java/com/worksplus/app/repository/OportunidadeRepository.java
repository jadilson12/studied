package com.worksplus.app.repository;

import com.worksplus.app.model.Oportunidade;
import org.springframework.data.jpa.repository.JpaRepository;
import java.util.Optional;

public interface OportunidadeRepository extends JpaRepository<Oportunidade, Long> {
    Optional<Oportunidade> findByDescricaoAndNomeProspecto(String descricao, String nomeProspecto);
}
