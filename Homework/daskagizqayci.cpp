//#include<iostream>
//using namespace std;
//
//void main() {
    //const int size = 3;
    //char arr[size][size]{ '*','*','*','*','*','*','*','*','*' };


    //int secim = 0;
    //int secim2 = 0;
    //bool a = true;
    //while (a) {
    //    for (size_t i = 0; i < size; i++)
    //    {
    //        for (size_t k = 0; k < size; k++)
    //        {
    //            cout << arr[i][k] << " ";
    //        }
    //        cout << endl;
    //    }
    //    cout << "Men1:";
    //    cin >> secim;
    //    switch (secim) {
    //        if (arr[0][0] != 'X' && arr[0][0] != 'O') {
    //    case 1: arr[0][0] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }

    //        if (arr[0][1] != 'X' && arr[0][1] != 'O') {
    //    case 2: arr[0][1] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //        if (arr[0][2] != 'X' && arr[0][2] != 'O') {
    //    case 3: arr[0][2] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //        if (arr[1][0] != 'X' && arr[1][0] != 'O') {
    //    case 4: arr[1][0] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //        if (arr[1][1] != 'X' && arr[1][1] != 'O') {
    //    case 5: arr[1][1] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //        if (arr[1][2] != 'X' && arr[1][2] != 'O') {
    //    case 6: arr[1][2] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //        if (arr[2][0] != 'X' && arr[2][0] != 'O') {
    //    case 7: arr[2][0] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //        if (arr[2][1] != 'X' && arr[2][1] != 'O') {
    //    case 8: arr[2][1] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }

    //        if (arr[2][2] != 'X' && arr[2][2] != 'O') {
    //    case 9: arr[2][2] = 'X'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men1:";
    //            cin >> secim;
    //            switch (secim) {
    //            case 1: arr[0][0] = 'X'; break;
    //            case 2: arr[0][1] = 'X'; break;
    //            case 3: arr[0][2] = 'X'; break;
    //            case 4: arr[1][0] = 'X'; break;
    //            case 5: arr[1][1] = 'X'; break;
    //            case 6: arr[1][2] = 'X'; break;
    //            case 7: arr[2][0] = 'X'; break;
    //            case 8: arr[2][1] = 'X'; break;
    //            case 9: arr[2][2] = 'X'; break;
    //            }
    //        }
    //    }
    //    system("CLS");
    //    if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' || arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X' || arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
    //    {
    //        cout << "Man 1 Qazandi" << endl;
    //        break;
    //    }
    //    if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' || arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O' || arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
    //    {
    //        cout << "Man 2 Qazandi" << endl;
    //        break;
    //    }
    //    for (size_t i = 0; i < size; i++)
    //    {
    //        for (size_t k = 0; k < size; k++)
    //        {
    //            cout << arr[i][k] << " ";
    //        }
    //        cout << endl;
    //    }

    //    cout << "Men2:";
    //    cin >> secim2;
    //    switch (secim2) {
    //        if (arr[0][0] != 'X' && arr[0][0] != 'O') {
    //    case 1: arr[0][0] = 'O'; break;
    //        }
    //    else {
    //    cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //    cout << "Men2:";
    //    cin >> secim2;
    //    switch (secim2) {
    //    case 1: arr[0][0] = 'O'; break;
    //    case 2: arr[0][1] = 'O'; break;
    //    case 3: arr[0][2] = 'O'; break;
    //    case 4: arr[1][0] = 'O'; break;
    //    case 5: arr[1][1] = 'O'; break;
    //    case 6: arr[1][2] = 'O'; break;
    //    case 7: arr[2][0] = 'O'; break;
    //    case 8: arr[2][1] = 'O'; break;
    //    case 9: arr[2][2] = 'O'; break;
    //    }
    //    }

    //        if (arr[0][1] != 'X' && arr[0][1] != 'O') {
    //    case 2: arr[0][1] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //        if (arr[0][2] != 'X' && arr[0][2] != 'O') {
    //    case 3: arr[0][2] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //        if (arr[1][0] != 'X' && arr[1][0] != 'O') {
    //    case 4: arr[1][0] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //        if (arr[1][1] != 'X' && arr[1][1] != 'O') {
    //    case 5: arr[1][1] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //        if (arr[1][2] != 'X' && arr[1][2] != 'O') {
    //    case 6: arr[1][2] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //        if (arr[2][0] != 'X' && arr[2][0] != 'O') {
    //    case 7: arr[2][0] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //        if (arr[2][1] != 'X' && arr[2][1] != 'O') {
    //    case 8: arr[2][1] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }

    //        if (arr[2][2] != 'X' && arr[2][2] != 'O') {
    //    case 9: arr[2][2] = 'O'; break;
    //        }
    //        else {
    //            cout << "Bura artig X ve ya O qoyulub!!! Yeniden cehd edir" << endl;
    //            cout << "Men2:";
    //            cin >> secim2;
    //            switch (secim2) {
    //            case 1: arr[0][0] = 'O'; break;
    //            case 2: arr[0][1] = 'O'; break;
    //            case 3: arr[0][2] = 'O'; break;
    //            case 4: arr[1][0] = 'O'; break;
    //            case 5: arr[1][1] = 'O'; break;
    //            case 6: arr[1][2] = 'O'; break;
    //            case 7: arr[2][0] = 'O'; break;
    //            case 8: arr[2][1] = 'O'; break;
    //            case 9: arr[2][2] = 'O'; break;
    //            }
    //        }
    //    }
    //    system("CLS");
    //    if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' || arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X' || arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
    //    {
    //        cout << "Man 1 Qazandi" << endl;
    //        break;
    //    }
    //    if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' || arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O' || arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
    //    {
    //        cout << "Man 2 Qazandi" << endl;
    //        break;
    //    }




















































































































































//}
        






















































