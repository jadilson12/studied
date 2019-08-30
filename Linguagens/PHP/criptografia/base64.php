<?php

$string = 'O rato reu a ropa do rei de Roma';
$codificada = base64_encode($string);

echo "Resultado da codificação usando sha1: " . $codificada;