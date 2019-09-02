<?php

createFolder(6);

function createFolder($id)
{
    $people = [
        1 => "Maria",
        2 => "Carlos",
        3 => "Pedro",
        4 => "Jose",
        5 => "Antonio",
        6 => "Ana",
        7 => "Judite",
        8 => "Samuel",
        9 => "Julia"
    ];
    $folder = __DIR__ . '/test/';
    if (!is_dir($folder)) {
        mkdir($folder, 0700);
    }

    foreach ($people as $index => $person) {
        if ($id == $index) {
            $file_from = __DIR__ . "/files/avatar" . $id . ".jpg";
            $file_to = $folder . "/" . $person . ".jpg";
            if (file_exists($file_from)) {
                copy($file_from, $file_to);
            } else {
                echo 'File not fount';
            }
        }
    }
    $scan = scandir($folder);

    if (count($scan) <= 2) {
        rmdir($folder);
    } else {
        dowloadFile(5, $folder);
    }
}

function dowloadFile($unidade, $folder)
{
    $fileName = "album_" . $unidade . ".zip";
    $path = $folder;
    $fullPath = $path . '/' . $fileName;

    // Leitura no diretório para coletar os nomes dos arquivos.
    $scanDir = scandir($path);

    // Removendo os 02 primeiros indices do array, referente ao (.) e (..).
    array_shift($scanDir);
    array_shift($scanDir);
    $zip = new \ZipArchive();

    // Criamos o arquivo e verificamos se ocorreu tudo certo
    if ($zip->open($fullPath, \ZipArchive::CREATE)) {

        // adiciona ao zip todos os arquivos contidos no diretório.
        foreach ($scanDir as $file) {
            $zip->addFile($path . '/' . $file, $file);
        }

        // fechar o arquivo zip após a inclusão dos arquivos desejados
        $zip->close();
    }

    // Primeiro nos certificamos de que o arquivo zip foi criado.
    if (file_exists($fullPath)) {

        // Forçamos o donwload do arquivo.
        header('Content-Type: application/zip');
        header('Content-Disposition: attachment; filename="' . $fileName . '"');
        readfile($fullPath);

        //removemos o arquivo zip após download
        //unlink($fullPath);

        // Remove a pasta com todos os arquivo após download
        array_map('unlink', glob("$folder/*.*"));
        rmdir($folder);
    }

}

