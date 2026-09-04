#include <stdio.h>

// ==================== ALUNO ====================

typedef struct {
    int rm;
    char nome[50];
    float media;
} Aluno;

void atualizarNota(Aluno* aluno, float valor) {

    if (valor >= 0 && valor <= 10) {
        aluno->media = valor;
    } else {
        printf("Nota invalida!\n");
    }
}


// ==================== PRODUTO ====================

typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

void aplicarDesconto(Produto* p, float desc) {

    p->preco = p->preco - (p->preco * desc / 100);
}


// ==================== MAIN ====================

int main() {

    // ---------- ALUNO ----------

    Aluno aluno1 = {123, "Ana", 9.0};

    printf("Aluno: %s\n", aluno1.nome);
    printf("RM: %d\n", aluno1.rm);
    printf("Nota atual: %.2f\n", aluno1.media);

    atualizarNota(&aluno1, 8.0);

    printf("Nota atualizada: %.2f\n", aluno1.media);


    // ---------- PRODUTO ----------

    Produto prod = {1, "Teclado", 150.0};

    printf("\nProduto: %s\n", prod.nome);
    printf("Codigo: %d\n", prod.codigo);
    printf("Preco antes: R$ %.2f\n", prod.preco);

    aplicarDesconto(&prod, 10.0);

    printf("Preco depois: R$ %.2f\n", prod.preco);


    return 0;
}
