month = int(input("Enter (1-12): "))

match month:
    case 1 | 3 | 5 | 7 | 8 | 10 | 12:
        print("Number of days: 31")
    case 4 | 6 | 9 | 11:
        print("Number of days: 30")
    case 2:
        print("Number of days: 28 or 29")
    case _:
        print("Invalid input")

