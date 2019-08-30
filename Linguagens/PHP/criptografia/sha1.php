<?php

$string = 'O rato reu a ropa do rei de Roma';
$codificada = sha1($string);

echo "Resultado da codificação usando sha1: " . $codificada;