<?php

$data = (object)$data = [
    'Nome' => $_POST['Nome'],
    'SobreNome' => $_POST['SobreNome'],
    'Celular' => $_POST['Celular'],
    'Email' => $_POST['Email'],
    'TelefoneFixo1' => $_POST['TelefoneFixo1'],
    'TelefoneFixo2' => $_POST['TelefoneFixo2'],
    'Rua' => $_POST['Rua'],
    'Bairro' => $_POST['Bairro'],
    'Cep' => $_POST['Cep'],
    'Numero' => $_POST['Numero'],
    'Cidade' => $_POST['Cidade'],
    'Estado' => $_POST['Estado'],
];

?>

<!DOCTYPE html>
<html lang="en">
<head>

    <meta charset="UTF-8">
    <title>Desafio Aula 04</title>

    <!--Import Google Icon Font-->
    <link type="text/css" rel="stylesheet" href="css/material-icon.css">
    <!--Import materialize.css-->
    <link type="text/css" rel="stylesheet" href="css/materialize.min.css" media="screen,projection"/>

    <!--Let browser know website is optimized for mobile-->
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>

</head>
<body>
<div class="container">
    <nav>
        <div class="nav-wrapper">
            <a href="#" class="brand-logo">Logo</a>
            <ul id="nav-mobile" class="right hide-on-med-and-down">
                <li><a href="index.html"><i class="material-icons left">home</i>Home</a></li>
                <li><a class="dropdown-trigger" href="#!" data-target="dropdown1">
                        <i class="material-icons left">face</i>Cliente
                        <i class="material-icons right">arrow_drop_down</i></a></li>

                <li><a class="dropdown-trigger" href="#!" data-target="dropdown1">
                        <i class="material-icons left">local_shipping</i>Produtos
                        <i class="material-icons right">arrow_drop_down</i></a></li>
                <li><a class="dropdown-trigger" href="#!" data-target="dropdown1">
                        <i class="material-icons left">shopping_cart</i>Pedido
                        <i class="material-icons right">arrow_drop_down</i></a></li>
            </ul>
            </ul>
        </div>
    </nav>

    <div class="row">
        <div class="col s6">
            <h5 class="mr-2">Visualizar Cliente</h5>
        </div>
        <div class="col s6 right-align">
            <h5>
                <a  href="index.html" class="waves-effect waves-light btn"><i class="material-icons right">back</i>Voltar</a>
            </h5>

        </div>

        <form class="col s12" action="cadastroCliente.php" method="post">
            <div class="row">
                <div class="input-field col s4">
                    <i class="material-icons prefix">account_circle</i>
                    <label><strong>Nome:</strong> <?php echo $data->Nome ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">person_outline</i>
                    <label><strong>SobreNome:</strong> <?php echo $data->SobreNome ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">email</i>
                    <label><strong>Email:</strong> <?php echo $data->Email ; ?></label>
                </div>
            </div>
            <div class="row">
                <div class="input-field col s4">
                    <i class="material-icons prefix">smartphone</i>
                    <label><strong>Celular:</strong> <?php echo $data->Celular ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">phone</i>
                    <label><strong>TelefoneFixo1:</strong> <?php echo $data->TelefoneFixo1 ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">phone</i>
                    <label><strong>TelefoneFixo2:</strong> <?php echo $data->TelefoneFixo2 ; ?></label>
                </div>

            </div>
            <div class="row">
                <div class="input-field col s4">
                    <i class="material-icons prefix">apartment</i>
                    <label><strong>Rua:</strong> <?php echo $data->Rua ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">apartment</i>
                    <label><strong>Bairro:</strong> <?php echo $data->Bairro ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">apartment</i>
                    <label><strong>Cep:</strong> <?php echo $data->Cep ; ?></label>
                </div>

            </div>
            <div class="row">
                <div class="input-field col s4">
                    <i class="material-icons prefix">apartment</i>
                    <label><strong>Numero:</strong> <?php echo $data->Numero ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">apartment</i>
                    <label><strong>Cidade:</strong> <?php echo $data->Cidade ; ?></label>
                </div>
                <div class="input-field col s4">
                    <i class="material-icons prefix">apartment</i>
                    <label><strong>Estado:</strong> <?php echo $data->Estado ; ?></label>
                </div>
            </div>
        </form>
    </div>
</div>


<script src="js/jquery-migrate-3.1.0.min.js"></script>
<!--JavaScript at end of body for optimized loading-->
<script type="text/javascript" src="js/materialize.min.js"></script>
<script type="text/javascript">
    $( document ).ready(function() {
        $(".dropdown-trigger").dropdown();
    });
</script>
</body>
</html>
