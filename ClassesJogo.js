class heroi {
  constructor(nome, idade, tipo) {
    this.nome = nome;
    this.idade = idade;
    this.tipo = tipo;
  }
  atacar() {
    let ataque;
    switch (this.tipo) {
      case "mago":
        ataque = "usou magia";
        break;
      case "guerreiro":
        ataque = "usou espada";
        break;
      case "monge":
        ataque = "usou artes marcias";
        break;
      case "ninja":
        ataque = "usou shurinken";
        break;
      default:
        ataque = "usou um ataque genérico";
        break;
    }
    console.log(`O ${this.tipo} atacou usando ${ataque}`);
  }
}

// Exemplo de uso da classe Heroi
const hero = new heroi("Lucas", 31, "guerreiro");
hero.atacar();

const hero2 = new heroi("Samor", 150, "mago");
hero2.atacar();

