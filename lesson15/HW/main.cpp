#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

using std::cout; using std::endl; using std::cin; using std::cerr;

static unsigned int ses_count = 0;

class TextEditor
{
private:
    std::string inpStr;
    std::string filename;
    std::fstream* pfile;
    std::fstream* ufile;
    std::vector<std::string> userfiles;
    std::vector<int> sessions;
    int sesnum;
public:
    TextEditor(){
        inpStr = "empty";
        filename = "default.txt";
        // userfiles = {"defaulttext"};
        std::fstream f_userfiles;
        f_userfiles.open("_userfiles.txt");
        if (f_userfiles.is_open())
        {
            ufile = &f_userfiles;
        }
        else cout << "...ERROR - unable to open file \"_userfiles.txt\"." << endl;
        pfile = nullptr;
        sessions = {0};
        sesnum = 0;
    }

    ~TextEditor(){
        pfile->close();
        ufile->close();
    }

    // TextEditor* init()
    // {
    //     ses_count++;
    //     TextEditor* newses = new TextEditor;
    //     newses->sesnum = ses_count;
    //     return newses;
    // }

    void createFile(std::string input)
    {
        std::vector<std::string>::iterator it = std::find(userfiles.begin(), userfiles.end(), input);
        if (it == userfiles.end())
        {
            userfiles.push_back(input);
            filename = input + ".txt";
            std::fstream file;
            pfile = &file;
            file.open(filename, std::ios::out);
            file << "text";
            cout << "Now working in \"" << filename << '\"' << endl;
            file_handler(filename);
        }
        else
        {
            cout << "...ERROR - File named \"" << filename << "\" is already created." << endl;
        }
    }

    void writeString(std::string input)
    {
        if (pfile->is_open())
        {
            *pfile << input;
        }
        else cout << "...ERROR - unable to open file." << endl;
    }

    void readString()
    {
        if (pfile->is_open())
        {
            std::string ostr;
            while (*pfile)
            {
                ostr = pfile->get();
                cout << ostr;
            }
        }
        else cout << "...ERROR - unable to open file." << endl;
    }

    // void input_handler(std::string input)
    // {
    //     if (input == "start")
    //     {
    //         ses_count++;
    //         this->init();
    //     }
    // }

    void file_handler(std::string filename)
    {
        std::string str = filename + '\n';
        *ufile << str;
    }

    void session_handler(TextEditor* pointer)
    {

    }
};

int main()
{
    // std::string userinput;
    // TextEditor zeroinstance;
    // cout << "Waiting for user input    >:" << endl;
    // while(ses_count != 0)
    // {
    //     cin >> userinput;
    //     zeroinstance.input_handler(userinput);
    // }
    cout << endl << "TEXT EDITOR IS STARTED" << endl << endl;
    TextEditor test;
    test.createFile("testfile");
    test.createFile("testfile");
    test.createFile("newfile");

   




    return 0;
}