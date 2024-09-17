class Airport:
    def __init__(self):
        self.AirportName = ""
        self.PriceBillet = 0.0
        self.AllPlace = 0
        self.BuyTickets = 0

    def Set_AirportName(self, set_airport_name):
        self.AirportName = set_airport_name

    def Set_PriceBillet(self, set_price_billet):
        self.PriceBillet = set_price_billet

    def Set_AllPlace(self, set_all_place):
        self.AllPlace = set_all_place

    def Set_BuyTickets(self, set_buy_tickets):
        self.BuyTickets = set_buy_tickets

    def Get_AirportName(self):
        return self.AirportName

    def Get_SumPrice(self):
        return self.PriceBillet * self.BuyTickets

    def Get_RemainsTickets(self):
        return self.AllPlace - self.BuyTickets


def main():
    AirportName = ""
    PriceBillet = 0.0
    AllPrice = 0
    BuyTickets = 0
    various = 0
    iter = 0

    AirportsNames = ["Пулково", "Абакан", "Братск", "Курган", "Липецк"]
    PriceBilletsPlane = [10012.23, 1231.54, 5434.65, 8753.43, 1523.32]
    AllPlacesInPlane = [120, 300, 200, 150, 100]
    BuyTicketInsAllPlane = [100, 250, 70, 57, 20]
    
    a = Airport()

    various = int(input("Хотите вы выбрать из готовых вариантов аэропортов - 1 или предложить свой вариант - 2: "))
    if various == 2:
        AirportName = input("Введите название аэропорта: ")
        a.Set_AirportName(AirportName)

        PriceBillet = float(input("Введите стоимость билетов: "))
        a.Set_PriceBillet(PriceBillet)

        AllPrice = int(input("Сколько мест во всех самолёте: "))
        a.Set_AllPlace(AllPrice)

        BuyTickets = int(input("Введите сколько было проданных билетов: "))
        a.Set_BuyTickets(BuyTickets)
    else:
        print("Аэропорты в готовой базе: ")
        for i, airport in enumerate(AirportsNames, start=1):
            print(f"{i}- {airport}")
        
        iter = int(input("Выберете название аэропорта: ")) - 1

        a.Set_AirportName(AirportsNames[iter])
        a.Set_PriceBillet(PriceBilletsPlane[iter])
        a.Set_AllPlace(AllPlacesInPlane[iter])
        a.Set_BuyTickets(BuyTicketInsAllPlane[iter])

    print(f"Название аэропорта: {a.Get_AirportName()}")
    print(f"Количество оставшихся мест: {a.Get_RemainsTickets()}")
    print(f"Выручка с проданных билетов: {a.Get_SumPrice()}")


if __name__ == "__main__":
    main()

