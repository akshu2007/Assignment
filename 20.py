x = int(input("Enter your choice (1: Tea, 2: Coffee, 3: Juice): "))

match x:
    case 1:
        print("You selected Tea.")
    case 2:
        print("You selected Coffee.")
    case 3:
        print("You selected Juice.")
    case _:
        print("Invalid choice.")