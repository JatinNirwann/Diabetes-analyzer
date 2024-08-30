// Taking Insulin level

    cout << "Enter your Insulin Level  : " << endl;
    cin >> x;

    if (x < 1.5)
    {
        s[9] = '';
    }

    else if (5.7 < x < 6.4)
    {
        s[9] = 'P';
    }

    else
    {
        cout<<"Wrong Input"<<endl;
    }

// Taking C-Peptide level

    cout << "Enter your C-Peptide Level  : " << endl;
    cin >> x;

    if (x < 0.2)
    {
        s[10] = '1';
    }

    else  ( x>=0.2)
    {
        s[10] = '2';
    }

    else
    {
        cout<<"Wrong Input"<<endl;
    }


 // Taking Auto-antibodies presence

    cout << "Auto-antibodies (A/B)  : " << endl;
    cin >> a;
    a= toupper(a);

    if (a=='P')
    {
        s[11] = '1';
    }

    else if ( a=='A')
    {
        s[11] = '2';
    }

    else
    {
        cout<<"Wrong Input"<<endl;
    }   