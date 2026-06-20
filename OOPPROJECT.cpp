#include <iostream>
#include <string>
using namespace std;

class BURGER;
class DEALS;
class CHICK;
class ROLLS;
class ICECREAM;
class SIDE;
//=========================================================================================================================================================

class RESTURANT
{
protected:
    int seatno = 0;

public:
    virtual void menu() {};
    void welcome()
    {
        while (true)
        {
            int s = 0;
            cout << "Enter 1 for Dine-in Or 2 for Take Away: ";
            string choice;
            cin >> choice;
            if (choice == "1")
            {
                cout << "Your seat number is: 00" << s + 1 << endl;
                break;
            }
            else if (choice == "2")
            {
                break;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;
                continue;
            }
        }
    }
    void extra()
    {
        string ch;
        while (true)
        {

            cout << "Do you want extra Ketchup/Sauce(Yes/No)?" << endl;
            cin >> ch;
            if (ch == "yes" || ch == "YES" || ch == "Yes")
            {
                cout << "Extras Added!" << endl;
                break;
            }
            else if (ch == "No" || ch == "NO" || ch == "no")
            {
                break;
            }
            else
            {
                cout << "Enter Again.." << endl;
                continue;
            }
        }
    }
};

//===========================================================================================================================================================

class BURGER : public RESTURANT
{
private:
    float priceB;
    int quanB = 0;
    RESTURANT R;

public:
    friend void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1);

    BURGER()
    {
        priceB = 0;
    }
    void menu()
    {
        int q = 0;
        while (true)
        {
            cout << "Seat number: 00" << seatno + 1 << endl;
            cout << "Press '1' for Big Mac       - 550 Rs" << endl;
            cout << "Press '2' for Double Cheese - 450 Rs" << endl;
            cout << "Press '3' for Hamburger     - 490 Rs" << endl;
			cout << "Press '4' for Beef Decker   - 650 Rs" << endl;
            cout << "Press '5' for Single Decker - 880 Rs" << endl;
            cout << "Press '6' for Double Decker - 990 Rs" << endl;
            cout << "Press '7' for Main Menu" << endl;
            cout << "Press '8' for Removing Item" << endl;

            string choice;
            cin >> choice;

            if (choice == "1")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceB += (q * 550);
                    quanB += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "2")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceB += (q * 450);
                    quanB += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "3")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceB += (q * 490);
                    quanB += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "4")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceB += (q * 650);
                    quanB += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "5")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceB += (q * 880);
                    quanB += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "6")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceB += (q * 990);
                    quanB += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "7")
            {
                break;
            }
            else if (choice == "8")
            {
                cout << "Enter Quantity you want to remove: " << endl;
                int rem;
                cin >> rem;
                if (rem <= quanB)
                {
                    quanB -= rem;
                    cout << rem << " Item(s) Removed!!!" << endl;
                }
                else
                {
                    cout << "Invalid Amount.." << endl;
                }
                continue;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;
                continue;
            }
            R.extra();
        }
    };
};

//===========================================================================================================================================================

class DEALS : public RESTURANT
{
private:
    float priceD = 0;
    int quanD = 0;
    RESTURANT R;

public:
    friend void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1);
    DEALS()
    {
        priceD = 0;
    }
    void menu()
    {
        int q = 0;
        while (true)
        {
            cout << "Seat number: 00" << seatno + 1 << endl;
            cout << "!!DEALS!!" << endl;
            cout << "1: \"Fill Up\" {2 pcs chicken, mashed potatoes, 1 drink}                        -1999Rs" << endl;
            cout << "2: \"Cravings Box\" {Beef chalupa, Cinnamon Twists, 1 medium drink}             -2100Rs" << endl;
            cout << "3: \"Famous Bowl\" {mashed potatoes, sweet corn, crispy chicken}                -2500Rs" << endl;
            cout << "4: \"Classic Meal Deal\" {chicken sandwich, small fries, 1 small drink}         -2900Rs" << endl;
            cout << "5: \"Mix and Match\" {2 medium Pizzas,1 pair of breadsticks,10 pcs chicken}     -3500Rs" << endl;
            cout << "6: \"Whopper Deal\" {2 Beef burgers, 10 pcs nuggets, 1.5 ltr drink}             -3999Rs" << endl;
            cout << "8: FOR REMOVING AN ITEM" << endl;

            cout << "Enter the Deal Number OR 7 for Main Menu:" << endl;
            string choice;
            cin >> choice;

            if (choice == "1")
            {

                cout << "Enter Quantity OR 0 to Go Back: " << endl;
                cin >> q;
                if (q > 0)
                {
                    priceD += (q * 1999);
                    quanD += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "2")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceD += (q * 2100);
                    quanD += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "3")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceD += (q * 2500);
                    quanD += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "4")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceD += (q * 2900);
                    quanD += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "5")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceD += (q * 3500);
                    quanD += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "6")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceD += (q * 3999);
                    quanD += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "7")
            {
                break;
            }
            else if (choice == "8")
            {
                cout << "Enter Quantity you want to remove: " << endl;
                int rem;
                cin >> rem;
                if (rem <= quanD)
                {
                    quanD -= rem;
                    cout << rem << " Item(s) Removed!!!" << endl;
                }
                else
                {
                    cout << "Invalid Amount.." << endl;
                }
                continue;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;

                continue;
            }
            R.extra();
        }
    }
};

//===========================================================================================================================================================

class CHICK : public RESTURANT
{
private:
    float priceC = 0;
    int quanC = 0;
    RESTURANT R;

public:
    CHICK()
    {
        priceC = 0;
    }
    friend void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1);

    void menu()
    {
        int q = 0;

        while (true)
        {
            cout << "Seat number: 00" << seatno + 1 << endl;
            cout << "!!CRISPY CHICKEN!!" << endl;
            cout << "Press '1' for Chicken Tenders            - 1650 Rs" << endl;
            cout << "Press '2' for Chicken Sandwich           - 2100 Rs" << endl;
            cout << "Press '3' for Chicken Finger Combo       - 2000 Rs" << endl;
            cout << "Press '4' for Chicken Supreme 2-Pieces   - 1100 Rs" << endl;
            cout << "Press '5' for Chicken Nuggets 10-pieces  - 1550 Rs" << endl;
            cout << "Press '6' for Crispy Chicken             - 750 Rs" << endl;
            cout << "Press '7' for Main Menu" << endl;
            cout << "Press '8' for Removing an Item" << endl;

            cout << endl;
            string choice;
            cin >> choice;

            if (choice == "1")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceC += (q * 1650);
                    quanC += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "2")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;

                if (q > 0)
                {
                    priceC += (q * 2100);
                    quanC += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "3")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceC += (q * 2000);
                    quanC += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "4")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceC += (q * 1100);
                    quanC += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "5")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceC += (q * 1550);
                    quanC += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "6")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceC += (q * 750);
                    quanC += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "7")
            {
                break;
            }
            else if (choice == "8")
            {
                cout << "Enter Quantity you want to remove: " << endl;
                int rem;
                cin >> rem;
                if (rem <= quanC)
                {
                    quanC -= rem;
                    cout << rem << " Item(s) Removed!!!" << endl;
                }
                else
                {
                    cout << "Invalid Amount.." << endl;
                }
                continue;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;
                continue;
            }
            R.extra();
        }
    }
};

//===========================================================================================================================================================

class ROLLS : public RESTURANT
{
private:
    float priceR = 0;
    int quanR = 0;
    RESTURANT R;

public:
    ROLLS()
    {
        priceR = 0;
    }

    friend void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1);

    void menu()
    {
        int q = 0;

        while (true)
        {
            cout << "Seat number: 00" << seatno + 1 << endl;
            cout << "!!ROLLS AND WRAPS!!" << endl;
            cout << "Press '1' for Chicken Soft Taco       - 555 Rs" << endl;
            cout << "Press '2' for Grilled Caesar Wrap     - 1850 Rs" << endl;
            cout << "Press '3' for Burrito Wrap            - 2000 Rs" << endl;
            cout << "Press '4' for Southwest Avocado Wrap  - 1650 Rs" << endl;
            cout << "Press '5' for Chicken Fajita Wrap     - 1100 Rs" << endl;
            cout << "Press '6' for Teriyaki Chicken Wrap   - 1400 Rs" << endl;
            cout << "Press '7' for Main Menu" << endl;
            cout << "Press '8' for Removing an Item" << endl;

            cout << endl;
            string choice;
            cin >> choice;

            if (choice == "1")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceR += (q * 555);
                    quanR += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "2")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceR += (q * 1850);
                    quanR += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "3")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceR += (q * 2000);
                    quanR += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "4")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceR += (q * 1650);
                    quanR += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "5")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceR += (q * 1100);
                    quanR += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "6")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceR += (q * 1400);
                    quanR += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "7")
            {
                break;
            }
            else if (choice == "8")
            {
                cout << "Enter Quantity you want to remove: " << endl;
                int rem;
                cin >> rem;
                if (rem <= quanR)
                {
                    quanR -= rem;
                    cout << rem << " Item(s) Removed!!!" << endl;
                }
                else
                {
                    cout << "Invalid Amount.." << endl;
                }
                continue;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;
                continue;
            }
            R.extra();
        }
    }
};

//===========================================================================================================================================================

class ICECREAM : public RESTURANT
{
private:
    float priceI = 0.00;
    int quanI = 0;
    RESTURANT R;

public:
    friend void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1);
    ICECREAM()
    {
        priceI = 0;
    }
    void menu()
    {
        int q = 0;

        while (true)
        {
            cout << "Seat number: 00" << seatno + 1 << endl;
            cout << "!!ICE CREAMS!!" << endl;
            cout << "Press '1' for McFlurry             - 1100 Rs" << endl;
            cout << "Press '2' for Frosty               - 600 Rs" << endl;
            cout << "Press '3' for Single Scoop Cone    - 750 Rs" << endl;
            cout << "Press '4' for Hershey's Sundae Pie - 700 Rs" << endl;
            cout << "Press '5' for Blizzard             - 1350 Rs" << endl;
            cout << "Press '6' for Chocolate Chip Cake  - 1150 Rs" << endl;
            cout << "Press '7' for Main Menu" << endl;
            cout << "Press '8' for Removing an Item" << endl;

            cout << endl;

            string choice;
            cin >> choice;

            if (choice == "1")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceI += (q * 1100);
                    quanI += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "2")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceI += (q * 600);
                    quanI += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "3")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceI += (q * 750);
                    quanI += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "4")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceI += (q * 700);
                    quanI += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "5")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceI += (q * 1350);
                    quanI += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "6")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceI += (q * 1150);
                    quanI += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "7")
            {
                break;
            }
            else if (choice == "8")
            {
                cout << "Enter Quantity you want to remove: " << endl;
                int rem;
                cin >> rem;
                if (rem <= quanI)
                {
                    quanI -= rem;
                    cout << rem << " Item(s) Removed!!!" << endl;
                }
                else
                {
                    cout << "Invalid Amount.." << endl;
                }
                continue;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;
                continue;
            }
            R.extra();
        }
    }
};

//===========================================================================================================================================================

class SIDE : public RESTURANT
{
private:
    float priceS = 0;
    int quanS = 0;
    RESTURANT R;

public:
    friend void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1);

    SIDE()
    {
        priceS = 0;
    }
    void menu()
    {
        int q = 0;

        while (true)
        {
            cout << "Seat number: 00" << seatno + 1 << endl;
            cout << "!!SIDE ITEMS!!" << endl;
            cout << "Press '1' for Crispy Onion Rings         - 700 Rs" << endl;
            cout << "Press '2' for Mashed Potatoes with Gravy - 800 Rs" << endl;
            cout << "Press '3' for Crinkle-Cut Fries          - 600 Rs" << endl;
            cout << "Press '4' for Mozzarella Sticks          - 950 Rs" << endl;
            cout << "Press '5' for Side Salad                 - 850 Rs" << endl;
            cout << "Press '6' for Biscuits                   - 350 Rs" << endl;
            cout << "Press '7' for Main Menu" << endl;
            cout << "Press '8' for Removing an Item" << endl;

            cout << endl;
            string choice;
            cin >> choice;

            if (choice == "1")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceS += (q * 700);
                    quanS += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "2")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceS += (q * 800);
                    quanS += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "3")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceS += (q * 600);
                    quanS += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "4")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceS += (q * 950);
                    quanS += q;
                    cout << "Item Added!!!" << endl;
                }
            }
            else if (choice == "5")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceS += (q * 850);
                    quanS += q;
                    cout << "Item Added!!!" << endl;
                    continue;
                }
            }
            else if (choice == "6")
            {
                cout << "Enter Quantity OR 0 to Go Back:" << endl;
                cin >> q;
                if (q > 0)
                {
                    priceS += (q * 350);
                    quanS += q;
                    cout << "Item Added!!!" << endl;
                    continue;
                }
            }
            else if (choice == "7")
            {
                break;
            }
            else if (choice == "8")
            {
                cout << "Enter Quantity you want to remove: " << endl;
                int rem;
                cin >> rem;
                if (rem <= quanS)
                {
                    quanS -= rem;
                    cout << rem << " Item(s) Removed!!!" << endl;
                }
                else
                {
                    cout << "Invalid Amount.." << endl;
                }
                continue;
            }
            else
            {
                cout << "Invalid Entry!!!" << endl;
                continue;
            }
            R.extra();
        }
    }
};

//===========================================================================================================================================================

void billing(BURGER *B1, DEALS *D1, CHICK *C1, ROLLS *R1, ICECREAM *I1, SIDE *S1)
{
    float bill = 0;
    float p = 0;
    p += (B1->priceB + D1->priceD + C1->priceC + R1->priceR + I1->priceI + S1->priceS);

    int choice;
    while (true)
    {
        if (p == 0)
        {
            cout << "You haven't Ordered anything yet." << endl;
            break;
        }

        cout << "Enter 1 for billing through Card or 2 for Cash" << endl;
        cin >> choice;
        if (choice == 1)
        {
            string cardno, pin;
            cout << "Enter Card Number: ";
            cin >> cardno;
            while (true)
            {
                cout << "Enter Your 4 Digit Pin: ";
                cin >> pin;
                if (pin.length() != 4 || pin != "1234")
                {
                    cout << "Invalid Pin!!!" << endl;
                }
                else
                    break;
            }

            bill += (p * 0.05) + p;
            cout << " ------------------BILLING ON CARD------------------ " << endl;
            cout << "QTY ITEM                  PRICE" << endl;
            if (B1->priceB != 0)
            {
                cout << B1->quanB << "   BURGERS               " << B1->priceB << "Rs" << endl;
            }
            if (D1->priceD != 0)
            {
                cout << D1->quanD << "   DEALS                 " << D1->priceD << "Rs" << endl;
            }
            if (C1->priceC != 0)
            {
                cout << C1->quanC << "   CRISPY CHICKEN        " << C1->priceC << "Rs" << endl;
            }
            if (R1->priceR != 0)
            {
                cout << R1->quanR << "   ROLLS                 " << R1->priceR << "Rs" << endl;
            }
            if (I1->priceI != 0)
            {
                cout << I1->quanI << "   ICE-CREAM             " << I1->priceI << "Rs" << endl;
            }
            if (S1->priceS != 0)
            {
                cout << S1->quanS << "   SIDE ITEAMS           " << S1->priceS << "Rs" << endl;
            }
            cout << endl;
            if (p >= 5000)
            {
                cout << "You have Availed 30% Discount" << endl;
                cout << "Sub-Total:      " << p << "Rs" << endl;
                cout << "GST (5%):       " << p * 0.05 << "Rs" << endl;
                cout << "               =" << bill << "Rs" << endl;
                cout << "Discount (30%): " << bill * 0.3 << "Rs" << endl;
                cout << "Total Amount:   " << bill - (bill * 0.3) << "Rs" << endl;
            }
            else
            {
                cout << "Sub-Total:                " << p << "Rs" << endl;
                cout << "GST (5%):                 " << p * 0.05 << "Rs" << endl;
                cout << "Total Amount:             " << bill << "Rs" << endl;
            }
            break;
        }
        else if (choice == 2)
        {
            bill += (p * 0.15) + p;
            cout << " ------------------BILLING ON CASH------------------ " << endl;
            cout << "QTY ITEM                  PRICE" << endl;
            if (B1->priceB != 0)
            {
                cout << B1->quanB << "   BURGERS               " << B1->priceB << "Rs" << endl;
            }
            if (D1->priceD != 0)
            {
                cout << D1->quanD << "   DEALS                 " << D1->priceD << "Rs" << endl;
            }
            if (C1->priceC != 0)
            {
                cout << C1->quanC << "   CRISPY CHICKEN        " << C1->priceC << "Rs" << endl;
            }
            if (R1->priceR != 0)
            {
                cout << R1->quanR << "   ROLLS                 " << R1->priceR << "Rs" << endl;
            }
            if (I1->priceI != 0)
            {
                cout << I1->quanI << "   ICE-CREAM             " << I1->priceI << "Rs" << endl;
            }
            if (S1->priceS != 0)
            {
                cout << S1->quanS << "   SIDE ITEAMS           " << S1->priceS << "Rs" << endl;
            }
            cout << endl;
            if (p >= 5000)
            {
                cout << "You have Availed 30% Discount" << endl;
                cout << "Sub-Total:      " << p << "Rs" << endl;
                cout << "GST (15%):      " << p * 0.15 << "Rs" << endl;
                cout << "               =" << bill << "Rs" << endl;
                cout << "Discount (30%): " << bill * 0.3 << "Rs" << endl;
                cout << "Total Amount:   " << bill - (bill * 0.3) << "Rs" << endl;
            }
            else
            {
                cout << "Sub-Total:                " << p << "Rs" << endl;
                cout << "GST (15%):                " << p * 0.15 << "Rs" << endl;
                cout << "Total Amount:             " << bill << "Rs" << endl;
            }

            break;
        }
        else
        {
            cout << "Invalid Entry!!!" << endl;
            continue;
        }
    }
}

//===========================================================================================================================================================

int main()
{
    string name;
    RESTURANT *CUSTOMER;
    BURGER B;
    DEALS D;
    CHICK C;
    ROLLS R;
    ICECREAM I;
    SIDE S;
    cout << "*****************************************************************\n";
    cout << "*                 WELCOME TO OUR RESTAURANT                     *\n";
    cout << "*****************************************************************\n";
    CUSTOMER->welcome();
    int count = 0;

    cout << "Please Tell Your Name: ";
    cin.ignore();
    getline(cin, name);
    cout << endl;
    cout << "Assalam-O-Alaikum.!! " << name << "." << endl;
    cout << "What would you like to order?" << endl;
    while (true)
    {

        cout << "\t\t\t\t\t----------MENU----------" << endl;

        cout << "Press '1' BURGERS" << endl;
        cout << "Press '2' FAMILY DEALS " << endl;
        cout << "Press '3' CRISPY CHICKEN " << endl;
        cout << "Press '4' ROLLS AND WRAPS" << endl;
        cout << "Press '5' ICE CREAMS" << endl;
        cout << "Press '6' SIDE ITEMS" << endl;
        cout << "Press '7' BILLING" << endl;

        cout << "\nNote: Enjoy a 30% Discount on orders of 5,000 Rs or more!!!" << endl;
        cout << "\nPlease enter your choice: ";

        string choice;
        cin >> choice;

        if (choice == "1")
        {
            CUSTOMER = &B;
            CUSTOMER->menu();
            continue;
        }
        else if (choice == "2")
        {
            CUSTOMER = &D;
            CUSTOMER->menu();
            continue;
        }
        else if (choice == "3")
        {
            CUSTOMER = &D;
            CUSTOMER->menu();
            continue;
        }
        else if (choice == "4")
        {
            CUSTOMER = &R;
            CUSTOMER->menu();
            continue;
        }
        else if (choice == "5")
        {
            CUSTOMER = &I;
            CUSTOMER->menu();
            continue;
        }
        else if (choice == "6")
        {
            CUSTOMER = &S;
            CUSTOMER->menu();
            continue;
        }
        else if (choice == "7")
        {
            billing(&B, &D, &C, &R, &I, &S);
            cout << "Enter 1 for more Order or any other to complete order..." << endl;
            string ch;
            cin >> ch;
            if (ch == "1")
            {
                continue;
            }
            else
            {
                cout << "Thanks for Ordering!!!" << endl;
                break;
            }
        }

        else
        {
            cout << "Invalid Entry!!!" << endl;
            continue;
        }
    }
    return 0;
}