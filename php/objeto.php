<?php
// Declaração de uma objeto 1
$teste = (object) [
    'nome' => 'Pedro',
    'idade' => 42,
];
print_r($teste->nome);


// Declaração de uma objeto 2
$obj = array();
$obj = (object) $obj;
$obj->nome = "12212";
print_r($obj->nome);
