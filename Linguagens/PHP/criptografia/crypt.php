<?php

$string = '123456';

echo 'DES Padrao: ' . crypt($string, 'Ox') . "\n";
echo "<br>";

echo 'DES Estendido: ' . crypt($string, '_5D2s/..s') . "\n";
echo "<br>";

echo 'MD5:          ' . crypt($string, '$1$l.vi.5/ks') . "\n";
echo "<br>";

echo 'Blowfish:     ' . crypt($string, '$2a$07$eisaqu/umaSenhArealbo.') . "\n";
echo "<br>";

echo 'SHA-256:      ' . crypt($string, '$5$rounds=5000$umcod1g.Show5S2Z') . "\n";
echo "<br>";

echo 'SHA-512:      ' . crypt($string, '$6$rounds=5000$umcod/g.Show5S2Z') . "\n";

echo "<br>";
echo 'SHA-512 paramentos:      ' . crypt($string, '$6$') . "\n";