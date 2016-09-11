#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>
#include<string.h>
#include<winver.h>


//DAVID RYAN JOSHUA V
//ORIGINAL NI YA TOOOOO
//HISA KA? SUNDA HAHAHAHA
//PROGRAM KO NI YAAAAAAAAAAAA
//MODIFICATION NOT ALLOWED

char fn[20], mi[3], ln[20];
main()
{
    int pw, ctd;

    HWND hWnd;
    SetConsoleTitle("Internet Cafe Billing System");
    hWnd = FindWindow(NULL, "Internet Cafe Billing System");
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD NewSBSize = GetLargestConsoleWindowSize(hOut);
    SMALL_RECT DisplayArea = {0, 0, 0, 0};

    SetConsoleScreenBufferSize(hOut, NewSBSize);

    DisplayArea.Right = NewSBSize.X - 1;
    DisplayArea.Bottom = NewSBSize.Y - 1;

    SetConsoleWindowInfo(hOut, TRUE, &DisplayArea);

    ShowWindow(hWnd, SW_MAXIMIZE);

    MessageBox(0,"Welcome to Internet Cafe Billing System\n© 2016 by Ryan Joshua David.\nA project in BES 200: Computer Fundamentals and Programming.\nSubmitted to Engr. Benjamin Allan Paculan.\n\nPress OK to continue.","Welcome!",1);

    pw:
    printf("Enter password: ");
    scanf("%d", &pw);

    if(pw==1300)
    {
        printf("Access granted.");
        Sleep(500);
        system("cls");
        for(ctd = 5; ctd>=0; ctd = ctd - 1)
        {
            printf("Directing you to the application in %d.\n ", ctd);
            Sleep(500);
            system("cls");
        }

            //MAIN MENU
    int choice;
    int gotostart=0;

    system("cls");
    beginning:
    Sleep(1000);
    system("COLOR 97");
    printf("=============================================\n");
    printf("Welcome to the Internet Cafe Billing System!\n");
    printf("=============================================\n");
    printf("Press 1 - Add Customer\n");
    printf("Press 2 - Add Billing\n");
    printf("\n");
    printf("Press 9 - Lock Application/User sign out\n");
    printf("Press 0 - Exit\n");
    printf("\n");
    printf("Press 90 - About Application\n");
    printf("=============================================\n");
    printf("Type option here ---> ");
    scanf("%d",&choice);

    system("cls");

    if(choice == 1)
    {
        //ADD CUSTOMER
        char  addr[50], bd[20];
        time_t t;
        int opt;
        time(&t);
        FILE *ofp;

customer:
        Sleep(750);
        system("COLOR 2");

        ofp = fopen("1.txt","w");

        printf("=========================================\n");
        printf("Add Customer Screen\n");
        printf("Current Time: %s",ctime(&t));
        printf("=========================================\n");
        Sleep(500);
        printf("\n");
        fgets(mi, 3, stdin);
        printf("Enter First Name: ");
        gets(fn);
        printf("Enter Last Name: ");
        gets(ln);
        printf("Enter Address: ");
        gets(addr);
        printf("Enter birthdate [mm/dd/yyyy]: ");
        gets(bd);
        printf("=========================================\n");

        /* loading ka-che-che-an */
        system("cls");
        printf("Saving data entered in Database, please wait.");
        Sleep(500);
        system("cls");
        printf("Saving data entered in Database, please wait. .");
        Sleep(500);
        system("cls");
        printf("Saving data entered in Database, please wait. . .");
        Sleep(500);

        //overview
        Sleep(1000);
        system("COLOR 7");
        system("cls");
        printf("=========================================\n");
        printf("Entry succesfully saved!\n");
        printf("Entry saved at: %s",ctime(&t));
        printf("=========================================\n");
        printf("Press any key to view entry summary.\n");
        printf("=========================================\n");
        getch();
        printf("First Name: %s\n", fn);
        fprintf(ofp, "First name: %s\n", fn);
        printf("Last Name: %s\n", ln);
        fprintf(ofp, "Last name: %s\n", ln);
        printf("Address: %s\n", addr);
        fprintf(ofp, "Address: %s\n", addr);
        printf("Birthdate: %s\n", bd);
        fprintf(ofp, "Birthdate: %s\n", bd);
        fclose(ofp);
        printf("=========================================\n");
        Sleep(1000);
        MessageBox(0,"Entry successfully saved! Output saved in 1.txt","Add Customer",1);

options:
        printf("Press 1 to return to main menu\n");
        printf("Press 0 to exit program\n");
        printf("Enter choice here --> ");
        scanf("%d",&opt);

        if(opt == 1)
        {
            system("cls");
            goto beginning;
        }

        else if(opt == 0)
        {
            exit(0);
        }

        else
        {
            printf("Option error. Try Again \n");
            goto options;
        }
    }

    else if(choice==2)
    {
        //billing


        time_t t;
        int gotostart=0;
        int opt2, opt3, opt4, vd, r = rand() % 9000 + 1000;
        float prt, pbnws, pbnwl, pclrs, pclrl, food, load, prtttl, num, oth, totchg, tender, change, tax, vat, pt;
        int dig1, dig2, dig3, dig4, pay, cc1, cc2, cc3, cc4, appr, gc1;
        char str1[10], str2[10], str3[10], str4[10], net[20], cm[20];
        float timel, timechg, gcd, gcr, gcb;
        time(&t);
        FILE *ofp;

        vd:
        Sleep(1000);
        timechg = 0;
        prtttl = 0;
        food = 0;
        load = 0;
        oth = 0;
        timel = 0;
        dig1 = 0;
        dig2 = 0;
        dig3 = 0;
        dig4 = 0;

        billing:
        system("COLOR 37");
        printf("=========================================\n");
        printf("Add Billing Screen\n");
        printf("Current Time: %s",ctime(&t));
        printf("=========================================\n");
        printf("Customer Name: %s %s\n", fn, ln);
        printf("=========================================\n");
        Sleep(500);
        printf("\n");



        printf("1 - Time Charge\n");
        printf("2 - Printing Charge\n");
        printf("3 - Food Charge\n");
        printf("4 - Prepaid Load Charge\n");
        printf("5 - Other Charges\n");
        printf("\n");
        printf("9 - Proceed to Checkout\n");
        printf("0 - Go back to main menu\n");
        printf("Enter option --> ");
        scanf("%d", &opt2);

        if(opt2==1)
        {
            system("cls");

            printf("=========================================\n");
            printf("Time Rental - Add Charges\n");
            printf("Current Time: %s",ctime(&t));
            printf("=========================================\n");
            printf("Customer Name: %s %s\n", fn, ln);
            printf("=========================================\n");
            printf("Time elapsed (h.mm): ");
            scanf("%f",&timel);
            timechg = (timel * 12);
            printf("Total time charges: P %.2f \n", timechg);
            MessageBox(0,"Time rental charge successfully added!","Time Rental - Add Charges",1);
            system("cls");
            goto billing;
        }

        else if(opt2==2)
        {

            system("cls");

            printf("=========================================\n");
            printf("Printing - Add Charges\n");
            printf("Current Time: %s",ctime(&t));
            printf("=========================================\n");
            printf("Customer Name: %s %s\n", fn, ln);
            printf("=========================================\n");
            printf("*** PRINTING CHARGES ***\n");
            printf("    - No. of Short, Black and White Prints: ");
            scanf("%f",&pbnws);
            printf("    - No. of Long, Black and White Prints: ");
            scanf("%f",&pbnwl);
            printf("    - No. of Short, Colored Prints: ");
            scanf("%f",&pclrs);
            printf("    - No. of Long, Colored Prints: ");
            scanf("%f",&pclrl);

            prtttl = (pbnws * 1) + (pbnwl * 2) + (pclrs * 5) + (pclrl * 7);

            printf("\n");

            printf("Total print charges: P %.2f \n", prtttl);
            Sleep(1000);
            MessageBox(0,"Printing Charges successfully added!","Printing - Add Charges",1);
            system("cls");
            goto billing;
        }

        else if(opt2 == 3)
        {
            system("cls");

            printf("=========================================\n");
            printf("Food - Add Charges\n");
            printf("Current Time: %s",ctime(&t));
            printf("=========================================\n");
            printf("Customer Name: %s %s\n", fn, ln);
            printf("=========================================\n");
            printf("Total Food purchased: ");
            scanf("%f",&food);
            printf("\n");
            Sleep(1000);
            MessageBox(0,"Food Charges successfully added!","Food - Add Charges",1);
            system("cls");
            goto billing;

        }

        else if(opt2 == 4)
        {
            system("cls");
            printf("=========================================\n");
            printf("Prepaid Load - Add Charges\n");
            printf("Current Time: %s",ctime(&t));
            printf("=========================================\n");
            printf("Customer Name: %s %s\n", fn, ln);
            printf("=========================================\n");
            printf("Total Prepaid Load Credits purchased: ");
            scanf("%f",&load);
            MessageBox(0,"Networks available: \n1 - Globe/TM \n2 - Smart/TNT \n3 - Sun \n4 - Cignal. ","Network List", 1);

            celnet:
            printf("Cellular Network: ");
            scanf("%s",&net);
            printf("\n");
            printf("Enter Cellphone Number: ");
            scanf("%f",&num);

            MessageBox(0,"Confirm successful loading of the number. ","Load Confirmation", 1);
            MessageBox(0,"Prepaid Load Charges successfully added!","Prepaid Load - Add Charges",1);
            system("cls");
            goto billing;
        }

        else if(opt2 == 5)
        {
            system("cls");

            printf("=========================================\n");
            printf("Others - Add Charges\n");
            printf("Current Time: %s",ctime(&t));
            printf("=========================================\n");
            printf("Customer Name: %s %s\n", fn, ln);
            printf("=========================================\n");
            printf("Total of Other Charges occurred: ");
            scanf("%f", &oth);
            Sleep(1000);
            MessageBox(0,"Other Charges successfully added!","Others - Add Charges",1);
            system("cls");
            goto billing;
        }

        else if(opt2 == 9)
        {
            system("cls");

            chk:
            printf("=========================================\n");
            printf("Checkout\n");
            printf("Current Time: %s",ctime(&t));
            printf("=========================================\n");
            printf("Customer Name: %s %s\n", fn, ln);
            printf("=========================================\n");

            totchg = timechg + prtttl + food + load + oth;

            printf("\nTotal Charges: %.2f\n",totchg);
            printf("\n");

            if(dig1 == 0)
            {
                printf("Loyalty Card Number: Not Available\n");
            }

            else
            {
                printf("Loyalty Card Number: %d ", dig1);
                printf("%d ", dig2);
                printf("%d ", dig3);
                printf("%d \n", dig4);
            }


            t:
            printf("\n1 - Continue to payment\n");
            printf("2 - Back to Billing\n");
            printf("3 - Void transaction\n");
            printf("4 - Add Loyalty Card\n");
            printf("Enter option --> ");
            scanf("%d",&opt4);

            if(opt4 == 1)
            {
                printf("\n");
                goto tender;
            }

            else if(opt4 == 2)
            {
                printf("\n");
                system("cls");
                goto billing;
            }

            else if(opt4 == 3)
            {
                printf("\n");
                printf("Sure to void transaction? \n 1 - Yes, any - No: ");
                scanf("%d", &vd);

                if(vd==1)
                {
                    MessageBox(0,"Transaction successfully voided.","Void",1);
                    system("cls");
                    goto vd;
                }

                else
                {
                    goto t;
                }

            }

            else if(opt4==4)
            {
                printf("\nEnter First 4 Digits: ");
                scanf("%d", &dig1);
                printf("\n");
                printf("Enter Second 4 Digits: ");
                scanf("%d", &dig2);
                printf("\n");
                printf("Enter Third 4 Digits: ");
                scanf("%d", &dig3);
                printf("\n");
                printf("Enter Last 4 Digits: ");
                scanf("%d", &dig4);
                printf("\n");
                MessageBox(0,"Confirm Loyalty Card Number.","Loyalty Card",1);
                printf("Entered Card Number: %d ", dig1);
                printf("%d ", dig2);
                printf("%d ", dig3);
                printf("%d \n", dig4);
                Sleep(750);
                pt = totchg / 10;
                printf("\n");
                printf("Points earned: %.2f ", pt);
                Sleep(750);
                MessageBox(0,"Loyalty Card successfully added. ","Loyalty Card",1);
                printf("\n");
                system("cls");
                goto chk;
            }

            else
            {
                goto t;
            }


            tender:
            printf("Payment Options:\n");
            printf("1 - Cash\n");
            printf("2 - Credit Card/Debit Card\n");
            printf("3 - Gift Certificate\n");
            printf("Enter Option --> ");
            scanf("%d", &pay);

            if(pay == 1)
            {
                printf("Enter tendered payment: P ");
                scanf("%f",&tender);

                if(tender >= totchg)
                {
                    goto commit;
                }

                else
                {
                    printf("Insufficient funds. Try again. \n");
                    goto tender;
                }

                commit:
                printf("Commiting tender...\n");
                Sleep(250);
                printf("\n");

                change = tender - totchg;
                vat = totchg * 0.12;
                tax = totchg - vat;

                ofp = fopen("2.txt","w");

                fprintf(ofp, "CHERYL PISONET\n");
                fprintf(ofp, "476 Workenshire Road\n");
                fprintf(ofp, "Manhattan, New York City\n");
                fprintf(ofp, "Official Receipt\n");
                fprintf(ofp, "--------------------------------\n");
                fprintf(ofp, "Customer Name: %s ", fn);
                fprintf(ofp, "--------------------------------\n");
                fprintf(ofp, "Internet Charges \n");
                fprintf(ofp, " - Total Time: %.2f \n", timel);
                fprintf(ofp, "     * 12.00/hour \n");
                fprintf(ofp, " - Total Charges: %.2f \n", timechg);
                fprintf(ofp, "Printing Charges \n");
                fprintf(ofp, " - Total Charges: %.2f \n", prtttl);
                fprintf(ofp, "Total Food: %.2f \n", food);
                fprintf(ofp, "Load Charges: %s \n",net);
                fprintf(ofp, " - P %.2f \n", load);
                fprintf(ofp, "--------------------------------\n");
                fprintf(ofp, "Grand Total:   %.2f\n", totchg);
                fprintf(ofp, " - Taxable:    %.2f\n", tax);
                fprintf(ofp, " - VAT 12%:    %.2f\n", vat);
                fprintf(ofp, "Amount Tendered: \n");
                fprintf(ofp, " - Cash        %.2f\n", tender);
                fprintf(ofp, "Change:        %.2f\n", change);
                fprintf(ofp, "Loyalty Card: \n");
                fprintf(ofp, " - Card No.: xxxx %d\n", dig4);
                fprintf(ofp, " - Points Earned: %.2f\n", pt);
                fprintf(ofp, "--------------------------------\n");
                fprintf(ofp, "%d | ", r);
                fprintf(ofp, "%s",ctime(&t));
                fprintf(ofp, "--------------------------------\n");
                fprintf(ofp, "      Thank you for trusting    \n");
                fprintf(ofp, "          CHERYL PISONET       \n");
                fprintf(ofp, "--------------------------------\n");

                fclose(ofp);

                change = tender - totchg;
                vat = totchg * 0.12;
                tax = totchg - vat;

                printf("----------------");
                printf("Change: %.2f", change);
                printf("----------------\n");
                printf("Taxable: P %.2f \n", tax);
                printf("VAT: P %.2f \n", vat);
                printf("\n");
                printf("Press any key to view receipt.\n");
                getch();

                Sleep(1000);
                system("cls");
                printf("=========================================\n");
                printf("Receipt Preview \n");
                printf("Current Time: %s",ctime(&t));
                printf("=========================================\n");
                printf("\n");
                printf("CHERYL PISONET\n");
                printf("476 Workenshire Road\n");
                printf("Manhattan, New York City\n");
                printf("Official Receipt\n");
                printf("------------------------------\n");
                printf("Customer Name: %s \n", fn);
                printf("------------------------------\n");
                printf("Internet Charges\n");
                printf(" - Total Time: %.2f\n", timel);
                printf("     * 12.00/hour\n");
                printf(" - Total Charges: %.2f\n", timechg);
                printf("Printing Charges\n");
                printf(" - Total Charges: %.2f\n", prtttl);
                printf("Total Food: %.2f\n", food);
                printf("Load Charges: %s\n",net);
                printf(" - P %.2f\n", load);
                printf("------------------------------\n");
                printf("Grand Total:   %.2f\n", totchg);
                printf(" - Taxable:    %.2f\n", tax);
                printf(" - VAT 12%:    %.2f\n", vat);
                printf("Amount Tendered: \n");
                printf(" - Cash        %.2f\n", tender);
                printf("Change:        %.2f\n", change);
                printf("Loyalty Card: \n");
                printf(" - Card No.: xxxx %d\n", dig4);
                printf(" - Points Earned: %.2f\n", pt);
                printf("------------------------------\n");
                printf("%d | ", r);
                printf("%s",ctime(&t));
                printf("------------------------------\n");
                printf("    Thank you for trusting    \n");
                printf("       CHERYL PISONETAN       \n");
                printf("------------------------------\n");
                printf("\n");
                printf("Saving to database...\n");
                Sleep(1000);
                MessageBox(0,"Receipt can be printed from 2.txt.","Print Receipt",1);
                printf("=========================================\n");
                printf("  THANK YOU FOR TRUSTING CHERYL PISONET\n");
                printf("=========================================\n");
                Sleep(1000);
                goto m;
            }

                //credit card
                if(pay == 2)
                {
                    printf("Card Number: \n");
                    printf(" - First 4 Digits: ");
                    scanf("%d", &cc1);
                    printf(" - Second 4 Digits: ");
                    scanf("%d", &cc2);
                    printf(" - Third 4 Digits: ");
                    scanf("%d", &cc3);
                    printf(" - Last 4 Digits: ");
                    scanf("%d", &cc4);
                    printf("\n");
                    MessageBox(0,"Card Merchants:\n - Visa\n - Mastercard\n - JCB\n - AMEX","Charge to Credit Card",1);
                    printf("Card Merchant: ");
                    scanf("%s", &cm);
                    printf("\n");
                    printf("Charge P %.2f to Credit Card. \n", totchg);
                    printf("Press any key to continue...\n");
                    getch();
                    printf("Enter approval code: ");
                    scanf("%d", &appr);

                    printf("\nCommiting tender...\n");
                    Sleep(250);
                    printf("\n");

                    vat = totchg * 0.12;
                    tax = totchg - vat;

                    ofp = fopen("2.txt","w");

                    fprintf(ofp, "CHERYL PISONET\n");
                    fprintf(ofp, "476 Workenshire Road\n");
                    fprintf(ofp, "Manhattan, New York City\n");
                    fprintf(ofp, "Official Receipt\n");
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "Customer Name: %s ", fn);
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "Internet Charges \n");
                    fprintf(ofp, " - Total Time: %.2f \n", timel);
                    fprintf(ofp, "     * 12.00/hour \n");
                    fprintf(ofp, " - Total Charges: %.2f \n", timechg);
                    fprintf(ofp, "Printing Charges \n");
                    fprintf(ofp, " - Total Charges: %.2f \n", prtttl);
                    fprintf(ofp, "Total Food: %.2f \n", food);
                    fprintf(ofp, "Load Charges: %s \n",net);
                    fprintf(ofp, " - P %.2f \n", load);
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "Grand Total:   %.2f\n", totchg);
                    fprintf(ofp, " - Taxable:    %.2f\n", tax);
                    fprintf(ofp, " - VAT 12%:    %.2f\n", vat);
                    fprintf(ofp, "Amount Tendered: \n");
                    fprintf(ofp, " - Credit Card: %s\n", cm);
                    fprintf(ofp, " - Card No: xxxx %d\n", cc4);
                    fprintf(ofp, " - Approval Code: %d\n", appr);
                    fprintf(ofp, "Loyalty Card: \n");
                    fprintf(ofp, " - Card No.: xxxx %d\n", dig4);
                    fprintf(ofp, " - Points Earned: %.2f\n", pt);
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "%d | ", r);
                    fprintf(ofp, "%s",ctime(&t));
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "      Thank you for trusting    \n");
                    fprintf(ofp, "          CHERYL PISONET       \n");
                    fprintf(ofp, "--------------------------------\n");

                    fclose(ofp);

                    system("cls");
                    printf("=========================================\n");
                    printf("Checkout\n");
                    printf("Current Time: %s",ctime(&t));
                    printf("=========================================\n");
                    printf("Customer Name: %s %s\n", fn, ln);
                    printf("=========================================\n");
                    printf("\n");
                    printf("----------------");
                    printf("Credit Card Transaction Successful!");
                    printf("----------------\n");
                    printf("Credit Card No.: %d", cc1);
                    printf("%d", cc2);
                    printf("%d", cc3);
                    printf("%d\n", cc4);
                    printf("\n");
                    printf("Approval Code: %d\n", appr);
                    printf("\n");
                    printf("Card Merchant: %s\n", cm);
                    printf("\n");
                    printf("Taxable: P %.2f \n", tax);
                    printf("VAT: P %.2f \n", vat);
                    printf("\n");
                    printf("Press any key to view receipt.\n");
                    getch();

                    Sleep(1000);
                    system("cls");
                    printf("=========================================\n");
                    printf("Receipt Preview \n");
                    printf("Current Time: %s",ctime(&t));
                    printf("=========================================\n");
                    printf("\n");
                    printf("CHERYL PISONET\n");
                    printf("476 Workenshire Road\n");
                    printf("Manhattan, New York City\n");
                    printf("Official Receipt\n");
                    printf("------------------------------\n");
                    printf("Customer Name: %s \n", fn);
                    printf("------------------------------\n");
                    printf("Internet Charges\n");
                    printf(" - Total Time: %.2f\n", timel);
                    printf("     * 12.00/hour\n");
                    printf(" - Total Charges: %.2f\n", timechg);
                    printf("Printing Charges\n");
                    printf(" - Total Charges: %.2f\n", prtttl);
                    printf("Total Food: %.2f\n", food);
                    printf("Load Charges: %s\n",net);
                    printf(" - P %.2f\n", load);
                    printf("------------------------------\n");
                    printf("Grand Total:   %.2f\n", totchg);
                    printf(" - Taxable:    %.2f\n", tax);
                    printf(" - VAT 12%:    %.2f\n", vat);
                    printf("Amount Tendered: \n");
                    printf(" - Credit Card: %s\n", cm);
                    printf(" - Card No: xxxx %d\n", cc4);
                    printf(" - Approval Code: %d\n", appr);
                    printf("Loyalty Card: \n");
                    printf(" - Card No.: xxxx %d\n", dig4);
                    printf(" - Points Earned: %.2f\n", pt);
                    printf("------------------------------\n");
                    printf("%d | ", r);
                    printf("%s",ctime(&t));
                    printf("------------------------------\n");
                    printf("    Thank you for trusting    \n");
                    printf("       CHERYL PISONETAN       \n");
                    printf("------------------------------\n");
                    printf("\n");
                    printf("Saving to database...\n");
                    Sleep(1000);
                    MessageBox(0,"Receipt can be printed from 2.txt.","Print Receipt",1);
                    printf("=========================================\n");
                    printf("  THANK YOU FOR TRUSTING CHERYL PISONET\n");
                    printf("=========================================\n");
                    Sleep(1000);
                    goto m;

                }

                if(pay==3)
                {
                    gc:
                    printf("Gift Check Code: \n");
                    printf(" - First 5 Digits: ");
                    scanf("%d", &gc1);
                    printf(" - Last 3 Digits: ");
                    scanf("%f", &gcd);
                    printf("\n");
                    printf("GC Denomination: P%.2f\n", gcd);

                    gcv:
                    printf("GC Balance: ");
                    scanf("%f", &gcb);

                    if(gcb <= totchg)
                    {

                        printf("Insufficient balance. Try another GC.\n");
                        Sleep(750);
                        goto gc;
                    }

                    else if(gcb >= totchg)
                    {
                        goto gcc;
                    }

                    else
                    {
                        goto gcv;
                    }


                    gcc:
                    printf("\n");
                    Sleep(1000);
                    printf("Charge P %.2f to GC# %d%.0f\n",totchg,gc1,gcd);
                    printf("Press any key to continue...\n");
                    getch();
                    Sleep(500);
                    MessageBox(0,"Insert GC for validation.","GC Payment",1);

                    ofp = fopen("GCV.txt","w");

                    gcr = gcb - totchg;

                    fprintf(ofp, "CHERYL PISONET\n");
                    fprintf(ofp, "--------------------------\n");
                    fprintf(ofp, "GC VALUE DEDUCTION\n");
                    fprintf(ofp, "GC #: %d%.0f\n",gc1,gcd);
                    fprintf(ofp, "GC Ini. Balance: %.2f\n", gcb);
                    fprintf(ofp, "--------------------------\n");
                    fprintf(ofp, "Trans #: %d\n", r);
                    fprintf(ofp, "Amount Charged: %.2f\n", totchg);
                    fprintf(ofp, "Rem. Bal: %.2f\n", gcr);
                    fprintf(ofp, "--------------------------\n");
                    fprintf(ofp, "%s",ctime(&t));
                    fprintf(ofp, "--------------------------\n");

                    fclose(ofp);

                    MessageBox(0,"Print validation from GCV.txt","GC Payment",1);

                    vat = totchg * 0.12;
                    tax = totchg - vat;

                    ofp = fopen("2.txt","w");

                    fprintf(ofp, "CHERYL PISONET\n");
                    fprintf(ofp, "476 Workenshire Road\n");
                    fprintf(ofp, "Manhattan, New York City\n");
                    fprintf(ofp, "Official Receipt\n");
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "Customer Name: %s ", fn);
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "Internet Charges \n");
                    fprintf(ofp, " - Total Time: %.2f \n", timel);
                    fprintf(ofp, "     * 12.00/hour \n");
                    fprintf(ofp, " - Total Charges: %.2f \n", timechg);
                    fprintf(ofp, "Printing Charges \n");
                    fprintf(ofp, " - Total Charges: %.2f \n", prtttl);
                    fprintf(ofp, "Total Food: %.2f \n", food);
                    fprintf(ofp, "Load Charges: %s \n",net);
                    fprintf(ofp, " - P %.2f \n", load);
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "Grand Total:   %.2f\n", totchg);
                    fprintf(ofp, " - Taxable:    %.2f\n", tax);
                    fprintf(ofp, " - VAT 12%:    %.2f\n", vat);
                    fprintf(ofp, "Amount Tendered: GC\n");
                    fprintf(ofp, " - GC #      %d%.0f\n", gc1, gcd);
                    fprintf(ofp, " - GC Ini Bal: %.2f\n", gcb);
                    fprintf(ofp, " - GC Rem Bal: %.2f\n", gcr);
                    fprintf(ofp, "Loyalty Card: \n");
                    fprintf(ofp, " - Card No.: xxxx %d\n", dig4);
                    fprintf(ofp, " - Points Earned: %.2f\n", pt);
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "%d | ", r);
                    fprintf(ofp, "%s",ctime(&t));
                    fprintf(ofp, "--------------------------------\n");
                    fprintf(ofp, "      Thank you for trusting    \n");
                    fprintf(ofp, "          CHERYL PISONET       \n");
                    fprintf(ofp, "--------------------------------\n");

                    fclose(ofp);

                    system("cls");
                    printf("=========================================\n");
                    printf("Checkout\n");
                    printf("Current Time: %s",ctime(&t));
                    printf("=========================================\n");
                    printf("Customer Name: %s %s\n", fn, ln);
                    printf("=========================================\n");
                    printf("\n");
                    printf("------------");
                    printf("Gift Certificate Transaction Successful!");
                    printf("------------\n");
                    printf("GC#: %d%.0f\n", gc1, gcd);
                    printf("GC Balance: P %.2f\n", gcb);
                    printf("Charged to GC: P %.2f\n", totchg);
                    printf("GC Rem. Balance: P %.2f", gcr);
                    printf("\n");
                    printf("Taxable: P %.2f \n", tax);
                    printf("VAT: P %.2f \n", vat);
                    printf("\n");
                    printf("Press any key to view receipt.\n");
                    getch();

                    Sleep(1000);
                    system("cls");
                    printf("=========================================\n");
                    printf("Receipt Preview \n");
                    printf("Current Time: %s",ctime(&t));
                    printf("=========================================\n");
                    printf("\n");
                    printf("CHERYL PISONET\n");
                    printf("476 Workenshire Road\n");
                    printf("Manhattan, New York City\n");
                    printf("Official Receipt\n");
                    printf("------------------------------\n");
                    printf("Customer Name: %s \n", fn);
                    printf("------------------------------\n");
                    printf("Internet Charges\n");
                    printf(" - Total Time: %.2f\n", timel);
                    printf("     * 12.00/hour\n");
                    printf(" - Total Charges: %.2f\n", timechg);
                    printf("Printing Charges\n");
                    printf(" - Total Charges: %.2f\n", prtttl);
                    printf("Total Food: %.2f\n", food);
                    printf("Load Charges: %s\n",net);
                    printf(" - P %.2f\n", load);
                    printf("------------------------------\n");
                    printf("Grand Total:   %.2f\n", totchg);
                    printf(" - Taxable:    %.2f\n", tax);
                    printf(" - VAT 12%:    %.2f\n", vat);
                    printf("Amount Tendered: GC\n");
                    printf(" - GC #      %d%.0f\n", gc1, gcd);
                    printf(" - GC Ini Bal: %.2f\n", gcb);
                    printf(" - GC Rem Bal: %.2f\n", gcr);
                    printf("Loyalty Card: \n");
                    printf(" - Card No.: xxxx %d\n", dig4);
                    printf(" - Points Earned: %.2f\n", pt);
                    printf("------------------------------\n");
                    printf("%d | ", r);
                    printf("%s",ctime(&t));
                    printf("------------------------------\n");
                    printf("    Thank you for trusting    \n");
                    printf("       CHERYL PISONETAN       \n");
                    printf("------------------------------\n");
                    printf("\n");
                    printf("Saving to database...\n");
                    Sleep(1000);
                    MessageBox(0,"Receipt can be printed from 2.txt.","Print Receipt",1);
                    printf("=========================================\n");
                    printf("  THANK YOU FOR TRUSTING CHERYL PISONET\n");
                    printf("=========================================\n");
                    Sleep(1000);
                    goto m;
                }



                m:
                printf("\n");
                printf("1 - Add Billing\n");
                printf("2 - New Customer\n");
                printf("3 - Main Menu\n");
                printf("\n");
                printf("0 - Exit\n");
                printf("Enter option here --> ");
                scanf("%d", &opt3);
                system("cls");
                Sleep(500);

                if(opt3==1)
                {
                    goto vd;
                }

                else if(opt3==2)
                {
                    goto customer;
                }

                else if(opt3==3)
                {
                    goto beginning;
                }

                else if(opt3 == 0)
                {
                    exit (0);
                }

                else
                {
                    goto m;
                }


        }

        else if(opt2 == 0)
        {
            system("cls");
            goto beginning;
        }

        else
        {
            printf("Option Error, returning to menu...");
            Sleep(1000);
            system("cls");
            goto billing;
        }



    }

    else if(choice == 9)
    {
        printf("Locking application...");
        Sleep(1000);
        system("cls");
        goto pw;
    }

    else if(choice == 90)
    {
        MessageBox(0,"Welcome to Internet Cafe Billing System\n© 2016 by Ryan Joshua David.\nA project in BES 200: Computer Fundamentals and Programming.\nSubmitted to Engr. Benjamin Allan Paculan.\n\nPress OK to continue.","Welcome!",1);
        system("cls");
        goto beginning;
    }
    else if(choice==0)
    {
        system("COLOR 2");
        int con;
        printf("Are you sure you want to exit? 1 if yes --> ");
        scanf("%d",&con);

        if(con==1)
        {
            exit(0);
        }

        else
        {
            system("cls");
            goto beginning;
        }
    }
    else
    {
        printf("Invalid option");
        goto beginning;
    }
    while (choice != 5);
    }

    else
    {
        printf("Password error. Try Again. \n");
        goto pw;
    }


}
