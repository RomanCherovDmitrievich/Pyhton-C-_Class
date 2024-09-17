#include <iostream>
//#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Airport
{
    private:
        string AirportName;
        double PriceBillet;
        int AllPlace;
        int BuyTickets;  
        
    public:
        void Set_AirportName(string set_airport_name)
        {
            AirportName = set_airport_name;
        }
        void Set_PriceBillet(double set_price_billet)
        {
            PriceBillet = set_price_billet;
        }
        void Set_AllPlace(int set_all_place)
        {
            AllPlace = set_all_place;
        }
        void Set_BuyTickets(int set_buy_tickets)
        {
            BuyTickets = set_buy_tickets;
        }

        //Вывод общей информации 
        const string& Get_AirportName() const 
        {
            return AirportName;
        }
        //Сумма всех биллетов
        double Get_SumPrice() const
        {
            return PriceBillet * static_cast<double>(BuyTickets);         
        }
        //Остаток билетов
        int Get_RemainsTickets() const
        {            
            return AllPlace - BuyTickets;
        } 
};

int main() {
    string AirportName;
    double PriceBillet;
    int AllPrice, BuyTickets;
    int various;
    int iter;
    bool flag;
        vector<string> AirportsNames = {"Пулково", "Абакан", "Братск", "Курган", "Липецк"} ;
        vector<double> PriceBilletsPlane = {10012.23, 1231.54, 5434.65, 8753.43, 1523.32};
        vector<int> AllPlacesInPlane = {120, 300, 200, 150, 100};
        vector<int> BuyTicketInsAllPlane = {100, 250, 70, 57, 20};
    Airport a;
    
        cout << "Хотите вы выбрать из готовых вариантов аэропортов - 1 или предложить свой вариант - 2: ";
        cin >> various;
        if(various == 2)
        {
            cout << "Введите название аэропорта: ";
            cin >> AirportName;
            a.Set_AirportName(AirportName);
            cout << endl;

            cout << "Введите стоимость билетов: ";
            cin >> PriceBillet;
            a.Set_PriceBillet(PriceBillet);
            cout << endl;

            cout << "Сколько мест во всех самолёте: ";
            cin >> AllPrice;
            a.Set_AllPlace(AllPrice);
            cout << endl;

            cout << "Введите сколько было проданных билетов: ";
            cin >> BuyTickets;
            a.Set_BuyTickets(BuyTickets);
            cout << endl;

            a.Set_AirportName(AirportName);
            a.Set_PriceBillet(PriceBillet);
            a.Set_AllPlace(AllPrice);
            a.Set_BuyTickets(BuyTickets);
        }
        else
        {
            int i(1);
            cout << "Аэропорты в готовой базе: " << endl;
            for(auto it = AirportsNames.begin(); it < AirportsNames.end(); ++it)
            {
                cout << i << "- " << *it  << endl;
                ++i;
            }
            cout << "Выберете название аэропорта:";
            cin >> iter;
            --iter;

            a.Set_AirportName(AirportsNames[iter]);
            a.Set_PriceBillet(PriceBilletsPlane[iter]);
            a.Set_AllPlace(AllPlacesInPlane[iter]);
            a.Set_BuyTickets(BuyTicketInsAllPlane[iter]);
        }
        cout << "Название аэропорта:" << a.Get_AirportName() << endl;
        cout << "Количество оставшихся мест:" << a.Get_RemainsTickets() << endl;
        cout << "Выручка с проданных билетов:" << a.Get_SumPrice() << endl << endl;
        
    return 0;
}
