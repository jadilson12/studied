<?php

$hash1 = '$2y$10$zRlWkrqyTlEBsCVVf9KOvu3ADTEjOV.TiPHDu8efmgaPCQ75c2V7K';
var_dump(password_verify('teste', $hash1));
//true

$hash2 = '$2y$10$BydsqC30UGc3QmvalCFTt.pm22fg22195cav.lZOnfSNY9wL5ZcJe';
var_dump(password_verify('teste', $hash2));
//true

$hash3 = '$2y$10$XHpaG8blIsZCTNPXEubiz.2EyyyZktvydLDu1HtieBkpohN9vswQS';
var_dump(password_verify('teste', $hash3));
//true

$hash4 = '$2y$10$vNJabya/sj9MZd.DaEwtXuVwqpIwEOcBPN38gOh2gr2wanPwsQVSu';
var_dump(password_verify('teste', $hash4));
//true

$hash5 = '$2y$10$z3PB5TQHXgml3J0iDMhI8.HrM19Ce77YcI5sYfQQFU3a94.XBzQO.';
var_dump(password_verify('teste', $hash5));
//true

$hashDesconhecida = '$2y$10$z3PB5TQHXgml3J0iDMhI8.HrM19Ce77YcI5sYfQQFU3a94.X99999';
var_dump(password_verify('teste', $hashDesconhecida));
//false