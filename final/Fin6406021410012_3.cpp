#include <iostream>
#include <string.h>
using namespace std;

int main (){
    
    string word = "Jules Gabriel Verne was born to Pierre Verne, As an attorney (died 1871), "
    "and his wife, Sophie-Henriette Allotte de la Fu?e (died 1887), in Nantes. The eldest of five children, "
    "he spent his early years at home with his parents in the bustling harbor city of Nantes. The family spent "
    "summers in a country house just outside the city, on the banks of the Loire River. Jules and his brother Paul "
    "would often rent a boat for a franc a day. The sight of the many ships navigating the river sparked Jules' imagination, as "
    "he describes in the autobiographical short story Souvenirs d'Enfance et de Jeunesse. At the age of nine, Jules and Paul, "
    "of whom he was very fond, were sent to boarding school at the Saint Donatien College As a child, he developed a great "
    "interest in travel and exploration, a passion he showed as a writer of adventure stories and science fiction. s ." ; 

    cout << word << "\n"; 

    string text = "";
    int l;
    l = word.size();

    char search[l];
    int length = 0,n_count = 0,count = 0;
    strcpy(search,word.c_str());
    length = strlen(search);
    string word2[length];
    
    cout << "Please Enter String to find in Array in : " ;
    cin >> text;

    for (int i = 0; i <= length; i++)
    {
        if (search[i]!=' '){
            word2[n_count] += search[i];
        }else{
            n_count++;
        }
    }
    
    for (int i = 0; i <= n_count; i++)
    {
        if(word2[i] == text){
            count++;
        }
    }

    cout << "Word to be seach : " << text << "\n";
    cout << "Total matches : " << count;
    
    
    return 0;
}