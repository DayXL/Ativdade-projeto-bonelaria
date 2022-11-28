typedef struct clienteDin ClienteDin;
typedef struct estoqueDin EstoqueDin;
typedef struct fornecedorDin FornecedorDin;

struct clienteDin {

    char* nomeDoCliente;
    char* cpf;
    char* numero;
    char* email;
    ClienteDin* prox;

};

struct estoqueDin {

    char* nomeDoMaterial;
    char* codigo;
    char* cnpj;
    float quant;
    EstoqueDin* prox;

};

struct fornecedorDin {

    char* nomeFornecedor;
    char* cnpj;
    char *email;
    FornecedorDin* prox;

};

void moduloRelatorio(void);
char verMenuRelatorio(void);
void relatorioPedido(void);
void controleRelClt(void);
char verMenReltClt(void);
void arqCltOrdAlf(void);
void exibCltDin(ClienteDin *clt);
void lerArqBncp(char num);
void controleRelMdl(void);
char verMenReltMdl(void);
void controleRelEst(void);
char verMenReltEst(void);
void arqEstMaMe(int num);
void arqEstOrdAlf(void);
void exibEstDin(EstoqueDin *est);
void controleRelFnc(void);
char verMenReltFnc(void);
void arqFncOrdAlf(void);
void exibFncDin(FornecedorDin *fnc);