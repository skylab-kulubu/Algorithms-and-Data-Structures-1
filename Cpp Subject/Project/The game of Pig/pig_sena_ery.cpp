#include<iostream>
#include<cstdlib>
#include<chrono>
#include<thread>

using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);

int main(int argc, char const *argv[])
{
    srand(time(0));
    int hScore=0,cScore=0,ghScore=0,gcScore=0;
    cout<<"----------------Welcome PIG Game----------------"<<endl;
    while(1){
        hScore = rand()%6 + 1;    
        cout<<endl<<"Turn: Human"<<endl<<"Your dice: "<<hScore<<endl;
        if(hScore == 1){
            cout<<"You didn't earn points this round"<<endl<<"Your point is "<<ghScore;
            cout<<endl<<"---------------------------------";
        }
        else{
            hScore = humanTurn(hScore);
            ghScore += hScore;
            cout<<endl<<"Your point is "<<ghScore;
            cout<<endl<<"---------------------------------";
        }if(ghScore>=100){
            cout<<endl<<"Human wins.";
            break;
        }
        cScore = rand()%6 + 1;
        cout<<endl<<"Turn: Computer"<<endl<<"Computer's dice: "<<cScore<<endl;
        if(cScore == 1){
            cout<<"Computer didn't earn points this round."<<endl<<"Computer point is "<<gcScore;
            cout<<endl<<"---------------------------------";
        }
        else{
            cScore = computerTurn(cScore);
            gcScore += cScore;
            cout<<endl<<"Computer point is "<<gcScore;
            cout<<endl<<"---------------------------------";
        }if(gcScore>=100){
            cout<<endl<<"Computer wins.";
            break;
        }
    }
cout<<endl;
return 0;
}

int humanTurn(int humanTotalScore){
    char choice;
    int sum=humanTotalScore;
    while(1){
        cout<<"Selection('h' hold, 'r' roll again) : ";
        cin>>choice;
        if(choice=='h')break;
        int dice = rand()%6 + 1;
        cout<<endl<<"Your dice : "<<dice<<endl;
        if(dice == 1){
            cout<<endl<<"You didn't earn points this round"<<endl;
            sum = 0;
            return 0;
        }sum += dice;
    }humanTotalScore = sum;
    cout<<endl<<"You earned "<<humanTotalScore<<" points this round.";
    return humanTotalScore;
}

int computerTurn(int computerTotalScore){
    int sum=computerTotalScore;
    while(sum<20){
        int dice = rand()%6 + 1;
        cout<<endl<<"Computer dice : "<<dice<<endl;
        if(dice == 1){
            cout<<endl<<"Computer didn't earn points this round"<<endl;
            sum = 0;
            return 0;
        }std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        sum += dice;
    }computerTotalScore = sum;
    cout<<endl<<"Computer earned "<<computerTotalScore<<" points this round.";
    return computerTotalScore;
}
