
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <string, long long> price;
    price["Tiger M_s_d"] = 10000000000;
    price["KUET"] = 100000000;
    price["TERM FINAL QUESTION"] = 10000;
    price["Skywalker's Lightsaber"] = 100000;
    price["Batmobile"] = 389473;
    price["The Imperial State Crown"] = 10;
    price["Chotha(100% common)"] = 1000000;
    price["The Infinity Gauntlet"] = 1152921504606846976;
    price["Iron man Suit(Red)"] = 1893448;
    price["Medal of Valour"] = 29484943;
    price["UFO"] = 8393432232;
    price["SR-71 Blackbird based SR-72"] = 283898433493;
    price["Bugatti La Voiture Noire"] = 19000000;
    price["Rolls-Royce Sweptail"] = 13000000;
    price["Bugatti Centodieci"] = 9000000;
    price["Pagani Zonda HP Barchetta"] = 7800000;
    price["Lamborghini Veneno"] = 4500000;
    price["Koenigsegg Jesko"] = 3200000;
    price["Ferrari Pininfarina Sergio"] = 3000000;
    price["Bugatti Chiron Super Sport 300+"] = 3000000;
    price["Aston Martin Valkyrie"] = 2800000;
    price["Mercedes-AMG One"] = 2750000;
    price["Bugatti Divo"] = 5500000;
    price["Pagani Huayra BC"] = 2900000;
    price["Ferrari LaFerrari Aperta"] = 2500000;
    price["Lamborghini Sian FKP 37"] = 3500000;
    price["McLaren Speedtail"] = 2400000;
    price["Rolls-Royce Phantom"] = 500000;
    price["MacBook Pro"] = 1999;
    price["Dell XPS 15"] = 1699;
    price["HP Spectre x360"] = 1499;
    price["Razer Blade 15"] = 1999;
    price["Lenovo ThinkPad X1 Carbon"] = 1799;
    price["Asus ROG Zephyrus S GX701"] = 2399;
    price["MSI GS66 Stealth"] = 1999;
    price["Acer Predator Triton 500"] = 1999;
    price["Microsoft Surface Book 3"] = 2199;
    price["Alienware Area-51m"] = 2999;
    price["Hilsa Bhapa"] = 1000;
    price["Biryani"] = 800;
    price["Dhakai Kacchi Biriyani"] = 900;
    price["Ilish Polao"] = 1200;
    price["Mutton Rezala"] = 1000;
    price["Shorshe Ilish"] = 900;
    price["Morog Pulao"] = 1100;
    price["Chittagong Rosh Golla"] = 800;
    price["Prawn Malai Curry"] = 1200;
    price["Pitha"] = 600;
    cout << setfill('*') << setw(193) << endl;
    int idx = 1;
    cout  << "Bangabandhu Digital Store" << endl;
    cout << endl;
    cout << "Name of product" << setfill(' ') << setw(100 - 15)  << right << "Price" << endl;
    for(auto i : price)
    {
        cout << idx++ << ".";
        cout << i.first << setfill(' ') << setw(100 - i.first.size())  << right << i.second << endl;
    }
    vector <long long> v(1000);
    int i = 1;
    for(auto I : price)
    {
        v[i++] = I.second;
    }
    cout << "Enter the index of the Items you want to buy : (ctrl + z to end)" << endl;
    unsigned long long bill = 0 , x ;
    string sti;
    while(cin >> sti)
    {
        if(sti == "end")break;
        x = stoi(sti);
        bill += v[x];
    }
    cout << "Initial Bill : " << bill << endl;
//    cout << "VAT : " << bill * 0.45 << endl;
//    cout << "Total Bill is : " << bill + bill*0.45<< endl;
}
