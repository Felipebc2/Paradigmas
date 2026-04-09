const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin, output: process.stdout });

function identificarCategoria(valor) {
    if (valor <= 80000) return 1;
    else if (valor <= 120000) return 2;
    else if (valor <= 140000) return 3;
    else if (valor <= 160000) return 4;
    else if (valor <= 200000) return 5;
    else return -1;
}

function calcularValorFinal(valor, modalidade) {
    if (modalidade === 1) {
        return valor * 0.90;
    } else if (modalidade === 2) {
        let entrada = valor * 0.50;
        let restante = valor - entrada;
        let total = entrada + restante * Math.pow(1.05, 4);
        return total;
    } else {
        let entrada = valor * 0.25;
        let restante = valor - entrada;
        let total = entrada + restante * Math.pow(1.08, 4);
        return total;
    }
}

rl.question("Digite o valor do veículo: R$ ", function(input) {
    let valor = parseFloat(input);
    let categoria = identificarCategoria(valor);

    if (categoria === -1) {
        console.log("Valor fora do intervalo permitido.");
        rl.close();
        return;
    }

    console.log("Categoria do veículo: " + categoria);
    console.log("Modalidades: 1 - À vista  2 - Entrada 50%  3 - Entrada 25%");

    rl.question("Escolha a modalidade: ", function(mod) {
        let modalidade = parseInt(mod);
        let valorFinal = calcularValorFinal(valor, modalidade);
        console.log("Valor final a pagar: R$ " + valorFinal.toFixed(2));
        rl.close();
    });
});