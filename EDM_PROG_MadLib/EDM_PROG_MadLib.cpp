#include <iostream>
#include <string>

using namespace std;

//prototips
string demanarText(string prompt);
int demanarNumero(string prompt);
void explicarHistoria(string nom, string nomPlural, int numero, string partCos, string verb);

int main()
{
    cout << "Benvingut a Mad Libs. \n\n";
    cout << "Respon les seguents preguntes per ajudar a crear una nova historia.\n";

    // Obtindre les entrades de l'usuari
    string nom = demanarText("Per favor, introdueix un nom: ");
    string nomPlural = demanarText("Per favor, introdueix un nom plural: ");
    int numero = demanarNumero("Per favor, introdueix un numero: ");
    string partCos = demanarText("Per favor, introdueix una part del cos: ");
    string verb = demanarText("Per favor, introdueix un verb: ");

    // Mostrar la història de Mad Libs
    explicarHistoria(nom, nomPlural, numero, partCos, verb);

    return 0;
}

/// <summary>
/// Sol·licita a l'usuari una entrada de text i retorna el text introduït.
/// </summary>
/// <param name="prompt">Pregunta a fer  l'usuari.</param>
/// <returns>retorna la resposta en forma de paraula </returns>
string demanarText(string prompt)
{
    string resposta;
    cout << prompt;
    getline(cin, resposta);
    return resposta;
}

/// <summary>
/// Sol·licita a l'usuari una entrada numèrica i retorna el número introduït.
/// </summary>
/// <param name="prompt">Pregunta a fer  l'usuari..</param>
/// <returns>retorna la resposta en forma de paraula.</returns>
int demanarNumero(string prompt)
{
    int resposta;
    cout << prompt;
    cin >> resposta;
    return resposta;
}

/// <summary>
/// Explica la història de Mad Libs utilitzant les dades proporcionades.
/// </summary>
/// <param name="nom">Nom utilitzat a la història.</param>
/// <param name="nomPlural">Nom plural utilitzat a la història.</param>
/// <param name="numero">Número utilitzat a la història.</param>
/// <param name="partCos">Part del cos utilitzada a la història.</param>
/// <param name="verb">Verb utilitzat a la història.</param>
void explicarHistoria(string nom, string nomPlural, int numero, string partCos, string verb)
{
    cout << "\nAquesta és la teva història de Mad Libs:\n";
    cout << "En una terra llunyana, " << nom << " va decidir visitar el bosc encantat.\n";
    cout << "Allà, van descobrir un grup de " << nomPlural << " simpàtics.\n";
    cout << "Sorprenentment, els " << nomPlural << " podien parlar i van demanar " << numero << " desitjos màgics.\n";
    cout << "Emocionat, " << nom << " va utilitzar la seva " << partCos << " per realitzar una dansa especial.\n";
    cout << "Al final, el bosc es va convertir en una meravellosa terra de " << verb << ", i tothom va viure feliçment per sempre.\n";
}