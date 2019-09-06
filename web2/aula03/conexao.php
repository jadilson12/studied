<?php

$banco = 'aula03';
$usuario = 'root';
$senha = 'tiger';
$hostname =  'localhost';

$conexao = mysqli_connect($hostname, $usuario, $senha);
    mysql_select_db($banco) or
    die('Não foi prosivel realizar conexao banco');

    