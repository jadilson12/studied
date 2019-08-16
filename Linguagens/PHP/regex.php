<?php

    // Verificar apenas  o nome expecifico
    $verificarEmailDominio = "usuario@gmail.com";
    $email = preg_match("/gmail/", $verificarEmailDominio) ? true : false;
    var_dump($email);

    echo "<hr>";

    // Verificar apenas numeros de telefone
    var_dump(celular("61 95375 4400"));

    function celular($telefone)
    {
        $telefone = trim(str_replace('/', '', str_replace(' ', '', str_replace('-', '', str_replace(')', '', str_replace('(', '', $telefone))))));

        $regexTelefone = "^[0-9]{11}$";

        $regexCel = '/[0-9]{2}[6789][0-9]{3,4}[0-9]{4}/'; // Regex para validar somente celular
        if (preg_match($regexCel, $telefone)) {
            return true;
        } else {
            return false;
        }
    }