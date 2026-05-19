const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

class LojaAutomotores {
  constructor(preco) {
    this.preco = preco;
  }

  calcularParcelado() {
    return (this.preco * 1.3) / 48;
  }
}

class CarroPequeno extends LojaAutomotores {
  constructor(preco) {
    super(preco);
  }
}

class CarroGrande extends LojaAutomotores {
  constructor(preco) {
    super(preco);
  }
}

class Moto extends LojaAutomotores {
  constructor(preco) {
    super(preco);
  }
}

class Caminhao extends LojaAutomotores {
  constructor(preco) {
    super(preco);
  }
}

class SUV extends LojaAutomotores {
  constructor(preco) {
    super(preco);
  }
}

function escolherVeiculo(callback) {
  console.log("\nEscolha o veículo:");
  console.log("1 - Moto");
  console.log("2 - Carro Pequeno");
  console.log("3 - Carro Grande");
  console.log("4 - Caminhão");
  console.log("5 - SUV");

  rl.question("Opção: ", (opcao) => {
    rl.question("Digite o preço do veículo: R$ ", (precoStr) => {
      const preco = parseFloat(precoStr);
      let veiculo;

      switch (parseInt(opcao)) {
        case 1:
          veiculo = new Moto(preco);
          break;
        case 2:
          veiculo = new CarroPequeno(preco);
          break;
        case 3:
          veiculo = new CarroGrande(preco);
          break;
        case 4:
          veiculo = new Caminhao(preco);
          break;
        case 5:
          veiculo = new SUV(preco);
          break;
        default:
          console.log("Opção inválida.");
          rl.close();
          return;
      }

      callback(veiculo, parseInt(opcao));
    });
  });
}

function escolherPagamento(veiculo) {
  console.log("\nForma de pagamento:");
  console.log("1 - À vista");
  console.log("2 - Parcelado (48x com 30% de juros)");
  console.log("3 - Entrada + Parcelado (entrada de 20%, restante em 48x)");

  rl.question("Opção: ", (op) => {
    const nomeVeiculo = veiculo.constructor.name;

    switch (parseInt(op)) {
      case 1:
        console.log(`\nVeículo: ${nomeVeiculo}`);
        console.log(`Pagamento: À vista`);
        console.log(`Valor final: R$ ${veiculo.preco.toFixed(2)}`);
        break;
      case 2:
        console.log(`\nVeículo: ${nomeVeiculo}`);
        console.log(`Pagamento: Parcelado`);
        console.log(
          `Prestação (48x): R$ ${veiculo.calcularParcelado().toFixed(2)}`,
        );
        console.log(`Valor final: R$ ${(veiculo.preco * 1.3).toFixed(2)}`);
        break;
      case 3: {
        const entrada = veiculo.preco * 0.2;
        const restante = veiculo.preco * 0.8;
        const parcela = (restante * 1.3) / 48;
        console.log(`\nVeículo: ${nomeVeiculo}`);
        console.log(`Pagamento: Entrada + Parcelado`);
        console.log(`Entrada: R$ ${entrada.toFixed(2)}`);
        console.log(`Prestação (48x): R$ ${parcela.toFixed(2)}`);
        console.log(`Valor final: R$ ${(entrada + restante * 1.3).toFixed(2)}`);
        break;
      }
      default:
        console.log("Opção inválida.");
    }

    rl.close();
  });
}

escolherVeiculo((veiculo) => {
  escolherPagamento(veiculo);
});
