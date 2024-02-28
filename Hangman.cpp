#include<bits/stdc++.h>
using namespace std;
struct Hangman
{
    string secretWord;
    string guessChar;
    int Ngu;
    int hiddenLetter;
    int check;
    void init(const string& secret)
    {
        secretWord = secret;
        guessChar = string(secretWord.size(), '_');
        Ngu = 0;
        hiddenLetter = secretWord.size();
        check = 0;
    }
    void update(char input)
    {
        check = 2;
        int len = secretWord.size();
        for(int i = 0; i < len; i++)
        {
            if(guessChar[i] == '_' && input == secretWord[i])
            {
                guessChar[i] = input;
                check = 1;
                hiddenLetter--;
            }
        }
        if(check == 2)
        {
            Ngu++;
        }
    }
    bool win(string secretWord, string guessChar)
    {
        return (secretWord == guessChar);
    }
    bool over(int Ngu)
    {
        return Ngu >= 8;
    }

};
const string List[] = {"vietnam", "hanquoc", "nhatban", "hoaki", "phap", "campuchia", "canada", "vunguyencoder" };
const int WORD_COUNT = sizeof(List)/ sizeof(List[0]);
const string& chooseWord()
{
    int ranIndex = rand() % WORD_COUNT;
    return List[ranIndex];
}
void render(const Hangman &game)
{
    if(game.check == 1)
    {
        cout<<"Correct!"<<'\n';
        cout<<"M da doan"<<' '<<game.guessChar<<'\n';
        return;
    }
    if(game.check == 2) cout<<"Incorrect!"<<'\n';
    cout<<"Doan sai roi ngu vcl, m con lai"<<' '<<game.secretWord.size() - game.Ngu<<" mang"<<'\n';
    if(game.secretWord.size() - game.Ngu == 0)
    {
        cout<<"Chet memayroi";
        return;
    }

}
char get()
{
    char input;
    cout<<"Make a guess: ";
    cin>>input;
    return input;
}
int main()
{
    srand(time(0));
    Hangman game;
    game.init(chooseWord());
    render(game);
    do
    {
        char input = get();
        game.update(input);
        render(game);
        if(game.win(game.secretWord, game.guessChar))
        {
            cout<<"May khon phet day";
            return 0;
        }

    }
    while (!game.over(game.Ngu));

}
