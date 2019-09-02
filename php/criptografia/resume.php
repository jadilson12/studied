<?php

// MD5
for ($i = 0; $i < 5; $i++) {
    md5('teste');
}

/* Iterações
    1 - 698dc19d489c4e4db73e28a713eab07b
    2 - 698dc19d489c4e4db73e28a713eab07b
    3 - 698dc19d489c4e4db73e28a713eab07b
    4 - 698dc19d489c4e4db73e28a713eab07b
    5 - 698dc19d489c4e4db73e28a713eab07b

    Resultado: Sempre a mesma string
*/

// SHA1
for ($i = 0; $i < 5; $i++) {
    sha1('teste');
}

/* Iterações
    1 - 2e6f9b0d5885b6010f9167787445617f553a735f
    2 - 2e6f9b0d5885b6010f9167787445617f553a735f
    3 - 2e6f9b0d5885b6010f9167787445617f553a735f
    4 - 2e6f9b0d5885b6010f9167787445617f553a735f
    5 - 2e6f9b0d5885b6010f9167787445617f553a735f

    Resultado: Sempre a mesma string
*/

// SHA256

for ($i = 0; $i < 5; $i++) {
    hash('sha256', 'teste');
}

/* Iterações
    1 - 46070d4bf934fb0d4b06d9e2c46e346944e322444900a435d7d9a95e6d7435f5
    2 - 46070d4bf934fb0d4b06d9e2c46e346944e322444900a435d7d9a95e6d7435f5
    3 - 46070d4bf934fb0d4b06d9e2c46e346944e322444900a435d7d9a95e6d7435f5
    4 - 46070d4bf934fb0d4b06d9e2c46e346944e322444900a435d7d9a95e6d7435f5
    5 - 46070d4bf934fb0d4b06d9e2c46e346944e322444900a435d7d9a95e6d7435f5

    Resultado: Uma string complexa e grande mas ainda assim sempre a mesma string
*/

// PASSWORD API

for ($i = 0; $i < 5; $i++) {
    password_hash('teste', PASSWORD_DEFAULT);
}

/* Iterações
    1 - $2y$10$zRlWkrqyTlEBsCVVf9KOvu3ADTEjOV.TiPHDu8efmgaPCQ75c2V7K
    2 - $2y$10$BydsqC30UGc3QmvalCFTt.pm22fg22195cav.lZOnfSNY9wL5ZcJe
    3 - $2y$10$XHpaG8blIsZCTNPXEubiz.2EyyyZktvydLDu1HtieBkpohN9vswQS
    4 - $2y$10$vNJabya/sj9MZd.DaEwtXuVwqpIwEOcBPN38gOh2gr2wanPwsQVSu
    5 - $2y$10$z3PB5TQHXgml3J0iDMhI8.HrM19Ce77YcI5sYfQQFU3a94.XBzQO.

    Resultado: a cada iteração uma nova hash gerada
*/


