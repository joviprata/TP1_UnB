#include <bits/stdc++.h> // Importa bibliotecas padrão de C++ - iostream, vector, string, etc
using namespace std; // Facilita ao tornar desnecessário escrever std:: antes de classes padrão do C++
#define sws ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); // Aguarda todo o programa rodar antes de printar qualquer coisa. Torna o programa mais rápido

// Os defines abaixo são para vetores e duplas (pair). Podem não ser necessários para o trabalho, mas estão aí qualquer coisa
//#define int long long
#define endl "\n"
#define pii pair <int, int>
#define mp make_pair
#define ff first
#define ss second
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(), x.end() // Para funções como sort(all(x))


class Horario {
    private:
    
    public:
            void setHorario(string horario) {

            }
};

int32_t main() {
    //sws;


    // Teste de classe de horário: 

    cout << "Defina o horário: "  << endl;

    string horario;
    cin >> horario;
    
    string str_HH = horario.substr(0, 2);
    int HH = stoi(str_HH);

    string str_mm = horario.substr(3, 2);
    int mm = stoi(str_mm);

    bool eh_horario_valido = true;

    if (
        size(horario) != 5
        or horario[2] != ':'
        or !isdigit(str_HH[0]) or !isdigit(str_HH[1])
        or !isdigit(str_mm[0]) or !isdigit(str_mm[1])
        or HH > 23 or mm > 59
    )
        eh_horario_valido = false;

    if (eh_horario_valido)
        cout << "Horário definido com sucesso: " << horario << endl;
    else 
        cout << "Formato inválido. Por favor, digite o horário em formato HH:mm, entre 00:00 a 23:59." << endl;


    return 0;
}
