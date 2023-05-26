
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Do you want to read a joke?(yes / no)" << endl;
    cin >> s;
    srand(time(0));
    if(s == "yes")
    {
        switch((rand()%6) + 1)
        {
        case 1:
            cout << "A guy dies and is sent to hell. Satan meets him, shows him doors to three rooms, and says he must choose one to spend eternity in. In the first room, people are standing in dirt up to their necks. The guy says, No, let me see the next room. In the second room, people are standing in dirt up to their noses. Guy says no again. Finally Satan opens the third room. People are standing with dirt up to their knees, drinking coffee and eating pastries. The guy says, I pick this room. Satan says Ok and starts to leave, and the guy wades in and starts pouring some coffee. On the way out Satan yells, OK, coffee break’s over. Everyone back on your heads!" << endl;
            break;
        case 2:
            cout << "A young boy enters a barber shop and the barber whispers to his customer. This is the dumbest kid in the world. Watch while I prove it you. The barber puts a dollar bill in one hand and two quarters in the other, then calls the boy over and asks, Which do you want, son? The boy takes the quarters and leaves. What did I tell you? said the barber. That kid never learns! Later, when the customer leaves, he sees the same young boy coming out of the ice cream store. Hey, son! May I ask you a question? Why did you take the quarters instead of the dollar bill? The boy licked his cone and replied, Because the day I take the dollar, the game is over!" << endl;
            break;
        case 3:
            cout << "China has a population of a billion people. One billion. That means even if you’re a one in a million kind of guy, there are still a thousand others exactly like you." << endl;
            break;
        case 4:
            cout << "Did you hear about a claustrophobic astronaut?" << endl;
            cout << "He just needed a little space." << endl;
            break;
        case 5:
            cout << "Doctor : How is your headache?" << endl;
            cout << "Man    : She is fine." << endl;
            break;
        default:
            cout << "Why don’9t scientists trust atoms?" << endl;
            cout << "Because they make up everything." << endl;
        }
    }
    map <string, long long> price;
    price["Tiger M_s_d"] = 10000000000;
    //price["The great Hurricane of Dr. M.M.A Hashem Sir"] = 90000;
    price["KUET"] = 100000000;
    price["USS Louisiana"] = 999999;
    price["BUET"] = 1000;
    price["TERM FINAL QUESTION"] = 10000;
    price["Bangladesh"] = 99999999999999;
    price["Skywalker's Lightsaber"] = 100000;
    price["Batmobile"] = 389473;
    price["The Imperial State Crown"] = 10;
    price["Chotha(100% common)"] = 1000000;
    price["The Infinity Gauntlet"] = 1152921504606846976;
    price["Infinity Stones(All in one)"] = 9048302;
    price["Mjollnir(The hammer of Thor)"] = 49302;
    price["Iron man Suit(Red)"] = 1893448;
    price["Catapault"] = 509433;
    price["Bugatti La Voiture Noire"] = 89847849398393;
    price["Pagani Huayra"] = 9398434333094;
    price["Koenigsegg Gemera"] = 3934989489303;
    price["Zenvo TSR-S"] = 934893033;
//    price[""]
//    price[""]
//    price[""]
//    price[""]
//    price[""]
//    price[""]
//    price[""]
//    price[""]
//    price[""]
    cout << endl << "******************************************************" << endl;
    cout  << setw(150) << "Bangabandhu Digital Store" << endl;
    cout << endl;
    cout << "Name of product" << "\t" << "Price" << endl;
    int idx = 1;
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
    while(cin >> x)
    {
        bill += v[x];
    }
    cout << "Initial Bill : " << bill << endl;
    cout << "VAT : " << bill * 0.45 << endl;
    cout << "Total Bill is : " << bill + bill*0.45<< endl;
}
