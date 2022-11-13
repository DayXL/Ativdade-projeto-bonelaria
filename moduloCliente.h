
typedef struct cliente Cliente;
typedef struct pedidoCliente PedidoCliente;
typedef struct boneChap BoneChap;

struct cliente {

    char nomeDoCliente[100];
    char cpf[12];
    char numero[12];
    char email[100];
    int ativo;

};

struct pedidoCliente {

    char pedido;
    char cpf[12];
    char codigo[6];
    float quant[12];
    char detalhes[100];

};

//Assinaturas principais

void moduloCliente(void);
char verMenuCliente(void);
void cadastrarCliente(void);
void editarCliente(void);
void excluirCliente(void);
void pesquisarCliente(void);
void pedidoCliente(void);

void validarNomeCliente(char *nomeCliente);
int validarCPF(char *cpf);
void validarNumeroCelular(char *numero);
void validarEmail(char *email);
void salArqClt(Cliente* clt);
void lerArqClt(int num);
void exibCliente(Cliente *clt);
Cliente* acharClt(char *cpf);
char telAtlClt(void);
BoneChap* selecionarModelo(char *codigo);
void lerArqBcpDif(char num);