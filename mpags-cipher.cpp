#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    char in_char{'x'};
    std::string out_str{""};

    for (int i{1}; i < cmdLineArgs.size(); i++)
    {
        if (cmdLineArgs[i] == "-h" || cmdLineArgs[i] == "--help")
        {
            std::cout << "The program takes an input and transliterates it. Letters are made to be upper case, numbers are replaced with their corresponding word (2 becomes TWO). All other characters are ignored. To continue, type an input, press enter, then press Ctrl+D." << std::endl;
        }
        else if (cmdLineArgs[i] == "--version")
        {   
            /* I have no idea how to get the version number out of github, so I'm doing it manually for now */
            std::cout << "v0.2.0" << std::endl;
        }
        else if (cmdLineArgs[i] == "-i")
        {
            std::string input_file{cmdLineArgs[i+1]};
            std::cout << "Input file: " << input_file << std::endl;
            i++;
        }
        else if (cmdLineArgs[i] == "-o")
        {
            std::string output_file{cmdLineArgs[i+1]};
            std::cout << "Output file: " << output_file << std::endl;
            i++;
        }
        else
        {
            std::cout << "Error: "<< cmdLineArgs[i] << " is not a valid command!" << std::endl;    
            return(0);
        }
        
    }
    

    while (std::cin >> in_char)
    {
        if (islower(in_char))
        {
            in_char = toupper(in_char);
            out_str = out_str + in_char;
            continue;
        }
        else if (isupper(in_char))
        {
            out_str = out_str + in_char;
            continue;
        }
        /* If the loop is still going, then the character is not a letter. We first check for numbers. */
        switch (in_char)
        {
        case '0':
            out_str = out_str + "ZERO";
            break;
        case '1':
            out_str = out_str + "ONE";
            break;
        case '2':
            out_str = out_str + "TWO";
            break;
        case '3':
            out_str = out_str + "THREE";
            break;
        case '4':
            out_str = out_str + "FOUR";
            break;
        case '5':
            out_str = out_str + "FIVE";
            break;
        case '6':
            out_str = out_str + "SIX";
            break;
        case '7':
            out_str = out_str + "SEVEN";
            break;    
        case '8':
            out_str = out_str + "EIGHT";
            break;
        case '9':
            out_str = out_str + "NINE";
            break;    
        default:
            /*We don't want characters that aren't numbers or letters, so we can safely do nothing here */
            break;
        }
    }
    std::cout << out_str << std::endl;
    return(0);

}