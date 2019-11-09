vector<map<string,string>> lista;

map<string,string> temp;

cin >> temp["LOCAL"];
cin >> temp["PRIORIDADE"];
cin >> temp["RESPONSAVEL"];

lista.push_back(temp);

for(int i=0;i<lista.size();i++){
    cout << lista[i]["LOCAL"]
    cout << lista[i]["PRIORIDADE"]
}

