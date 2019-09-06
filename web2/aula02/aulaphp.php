<?php

$data = (object)$data = [
 'nome' => $_POST['nome'],
 'data' => $_POST['data'],
 'email' => $_POST['email'],
 'endereco' => $_POST['endereco']
];
//extract($data);

var_dump($data);

echo 'Data padrão BR: '.date('d:m:Y');
echo '<br>';
echo 'Email em UPPERCASE: '.strtoupper($data->email);
echo '<br>';



