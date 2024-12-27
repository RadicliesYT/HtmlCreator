#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string title;
    string txt;
    string colorb;
    string colortxt;
    string fonttxt;
    cout<<"wht is the tittle of website:";
    getline( cin, title);
    string html = "<Html><head>";
    html.append("<link rel =""Stylesheet"" href = ""skibidi.css"">");
    html.append("<link rel=""icon"" type=""image/x-icon""  href=""HtmlCreatorBeta.png"">");
    html.append("<title>");
    html.append(title);
    html.append("</title></head><body>");

    cout<<"write something on website:";
    getline( cin, txt);
    html.append("<h1>");
    html.append(txt);
    html.append("</h1>");
    html.append("</body></html>");

    cout<<"font of txt:";
    getline( cin, fonttxt);

//CSS for body
    cout<<"Color of website:";
    getline( cin, colorb);
    string CSS = "body{background-color:";
    CSS.append(colorb);
    CSS.append(";}");

//CSS for H1
    cout<<"Color of txt:";
    getline( cin, colortxt);
    CSS.append("h1{");
    CSS.append("color:");
    CSS.append(colortxt);
    CSS.append(";");

    //Font niguh
    CSS.append("font-family:");
    CSS.append(fonttxt);
    CSS.append(";}");

//

    ofstream bgCSS("skibidi.css");
    if (!bgCSS)
    {
        cout<<"not skibidi sigma"<<endl;
        return -421;
    }
    bgCSS << CSS <<endl;
    bgCSS.close();

    ofstream website("skibidi.html");
    if (!website)
    {
        cout<<"not skibidi"<<endl;
        return -69;
    }
    website << html << endl;
    website.close();
    return 0;
}