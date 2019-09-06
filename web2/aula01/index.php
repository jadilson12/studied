<?php

$data = ["nome" => 'Jadilson', "idade"=> 12, "peso" => 2.4];

extract($data);

var_dump($idade);
echo $nome,' tem '.$idade.' pesa '.$peso;
