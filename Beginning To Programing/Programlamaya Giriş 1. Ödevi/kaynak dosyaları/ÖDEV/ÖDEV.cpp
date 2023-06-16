﻿
#include <iostream>
#include <string>
using namespace std;

/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...:1
**				ÖĞRENCİ ADI...............:Furkan Tataroğlu
**				ÖĞRENCİ NUMARASI.:g201210089
**				DERS GRUBU…………:C
****************************************************************************/

int main()

{
    string iller[81] = { "adana", "adiyaman", "afyonkarahisar", "agri", "aksaray", "amasya", "ankara", "antalya", "ardahan",
        "artvin", "aydin", "balikesir", "bartin", "batman", "bayburt", "bilecik", "bingol", "bitlis", "bolu", "burdur", "bursa",
        "canakkale", "cankiri", "corum", "denizli", "diyarbakir", "duzce", "edirne", "elazig", "erzincan", "erzurum", "eskisehir",
        "gaziantep", "giresun", "gumushane", "hakkari", "hatay", "igdir", "isparta", "istanbul", "izmir", "kahramanmaras", "karabuk",
        "karaman", "kars", "kastamonu", "kayseri", "kilis", "kirikkale", "kirklareli", "kirsehir", "kocaeli", "konya", "kutahya",
        "malatya", "manisa", "mardin", "mersin", "mugla", "mus", "nevsehir", "nigde", "ordu", "osmaniye", "rize", "sakarya", "samsun",
        "sanliurfa", "siirt", "sinop", "sivas", "sirnak", "tekirdag", "tokat", "trabzon", "tunceli", "usak", "van", "yalova", "yozgat",
        "zonguldak" };
        //illeri array içine tanımladık

    int maxlen = 0;
    int minlen = 99;
    int j = 0;
    for (int i = 0;i < 81;i++) {
        string s = iller[i];
        int len = s.size();
        if (len > maxlen)
        {
            maxlen = len;
            j = i;

        }

    }
    cout << "En uzun karakterli il : " << iller[j] << endl;
    for (int i = 0;i < 81;i++) {
        string s = iller[i];
        int len = s.size();
        if (len < minlen)
        {
            minlen = len;
            j = i;
        }

    }
    cout << "En kisa karakterli il : " << iller[j] << endl;
    int bulma = 0;
    string gec = "";
    string random[14];
    srand(time(NULL));                                          //randoma sürekli farklı değerler çıkarttsın diye
    for (int i = 3;i < 15; i++)                                 //en kısa karakterli il 3 karakterli en uzunu ise 14 karakterli 3 ten 15e kadar i'yi araladık
    {
        cout << i <<")";
        if (bulma == 0 && i != 3)                               //bulunamayan iller için gereken if
            cout << " Bulunamadi" << endl;
        for (int j = 0; j < 1000000; j++)                       //1 milyon kere deneneceği için for loop
        {
            int bulma = 0;                                      //bulma 0 ise bulamadı 1 ise buldu
            for (int l = 0; l < i; l++)                         //3 ilden 14 ile kadar seçmesi için for
            {
                random[l] = iller[rand() % 81];                 //81 il içinden rastgele seçecek
            }
            int ming = random[0].length();                      //random illerin uzunluğunu int e depolama
            for (int k = 0; k < i; k++)                         //random illerin uzunluğu için kullanılacak
            {
                if (ming > random[k].length())
                    ming = random[k].length();
            }            
            for (int k = 0; k < ming; k++)
            {
                gec = "";
                for (int t = 0;t < i;t++)
                    gec += random[t].at(k);

                for (int x = 0; x < 81; x++)
                {
                    if (iller[x] == gec)
                    {
                        cout << gec << endl;
                        bulma = 1;
                    }
                }
            }
            if (bulma == 1)                  //burada bulursa bulma yı 1e eşitliyor fakat bulsa bile önce bulunamadı yazıp sonra 
                break;                       //bulduğu ili yazıyor nasıl düzelticem anlamadım
        }
    }
}



    

            

        
        
       

        
  

    


    




        

    












