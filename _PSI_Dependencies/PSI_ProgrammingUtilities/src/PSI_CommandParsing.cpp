/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_CommandParsing.cpp
********************************************* */

#include "PSI_CommandParsing.hpp"

/* *********************************************
        COMMAND LINE ARGUMENTS MANAGEMENT

int main(int argc, char const *argv[])
{
        PSI_paramlist_t myParameters;
        PSI_paramout_t myOutput;


        ***SET ONE BY ONE***

        int options_count1;
        string* short_options1 = {};
        string* long_options1 = {};
        string* descriptions_options1 = {};
        function<void*(void)*> options1[options_count1];
        for (int i = 0 ; i < options_count1; i++ ){
                options1[i] = []() => { };
        }
        int subcommands_count1;
        string* short_subcommands1 = {};
        string* long_subcommands1 = {};
        string* descriptions_subcommands1 = {};
        function<void*(void)*> subcommands1[subcommands_count1];
        for (int i = 0 ; i < subcommands_count1; i++ ){
                subcommands1[i] = []() => { };
        }
        set_command(myParameters,"short_name1","long_name1", []() => { },  "description1"
                options_count1, short_options1, long_options1, options1, descriptions_options1,
                subcommands_count1, short_subcommands1, long_subcommand1s, subcommands1, long_subcommands1
        );
        int options_count2;
        string* short_options2 = {};
        string* long_options2 = {};
        string* descriptions_options2 = {};
        function<void*(void)*> options2[options_count2];
        for (int i = 0 ; i < options_count2; i++ ){
                option2s[i] = []() => { };
        }
        int subcommands_count2;
        string* short_subcommands2 = {};
        string* long_subcommands2 = {};
        string* descriptions_subcommands2 = {};
        function<void*(void)*> subcommands2[subcommands_count2];
        for (int i = 0 ; i < subcommands_count2; i++ ){
                subcommands2[i] = []() => { };
        }
        set_command(myParameters,"short_name2","long_name2", []() => { },  "description2"
                options_count2, short_option2s, long_options2, options,2, descriptions_options2
                subcommands_count2, short_subcommands2, long_subcommands2, subcommands2, descriptions_subcommands2
        );
        ...

        ***SET ALL AT ONCE***

        int params_count = 5;
        string short_params[] = {  }
        string long_params[] = {  }
        string descriptions_params[] = {  }
        function<void*(void)*> params[params_count];

        int alloptions_count[params_count];
        string* alloptions_short[params_count];
        string* alloptions_long[params_count];
        string* alloptions_description[params_count];
        function<void*(void)*>* options[params_count];

        int allsubcommands_count[params_count];
        string* allsubcommands_short[params_count];
        string* allsubcommands_long[params_count];
        string* allsubcommands_descriptions[params_count];
        function<void*(void)*>* subcommands[params_count];

        set_allcommands(MyParameters, params_count, short_params, long_params, descriptions_params
                alloptions_count, alloptions_short, alloptions_long, options, alloptions_description,
                allsubcommands_count, allsubcommands_short, allsubcommands_long, subcommands, allsubcommands_descriptions
        );

        myOutput = evaluate_commands(argc, argv);


        IF ANY RESULT IS NEEDED EVALUATE COMMAND RESULT IN AN PSI_PARAMOUT_T
        WHICH HOLS THE COMMANDS, OPTIONS AND SUBCOMMANDS OUTPUTS CASTS AS VOID
        POINTERS.

        return 0;
}

********************************************* */

typedef struct PSI_param_s
{
        string short_command;
        string long_command;
        function<void *(void *)> command;
        string description_command;
        uint64_t options_count;
        string *short_options;
        string *long_options;
        function<void *(void *)> *options;
        string *descriptions_options;
        uint64_t subcommands_count;
        string *short_subcommands_count;
        string *long_subcommands_count;
        function<void *(void *)> *subcommands;
        string *descriptions_subcommands;
} PSI_param_t;

typedef struct PSI_paramlist_s
{
        uint64_t size;
        PSI_param_s *params;
} PSI_paramlist_t;

typedef struct PSI_paramout_s
{
        void **commands;
        uint64_t options_count;
        void ***options_out;
        uint64_t subcommands_count;
        void ***subcommands_out;
} PSI_paramout_t;

/* *********************************************
        CONFIGURATION FILE PROCESSING

int main(int argc, char const *argv[])
{
        PSI_configurationfile_t myconfig;
        setConfig(myconfig, path, format);
        PSI_configurationdata_t = getConfig(myconfig);

        Keys            Entry
        0               { 0, 1, 2 ,3 ,4 ,5, ...}
        1               2
        2               "String data"
        ...
        n               {"String1","String2",...}
        n+1             myObject
        ...
        m               myObjectArray[10]

        modifyConfig(myconfig, key_index, entry);
        removeConfig(myconfig, key_index, entry);
        saveConfig(myconfig);
        return 0;
}

********************************************* */

typedef struct PSI_configurationfile_s
{
        string hostname;
        string user;
        string group;
        string credentials;
        string drive;
        string filepath;
        string dataformat;
        void *data;
} PSI_configurationfile_t;

typedef struct PSI_configurationdata_s
{
        uint64_t keys_count;
        string *keys;
        void **entries;
        template <typename... T>
        void castconfig_all(void **entries){};
        int castconfig_int(void *entry) { return *(int *)entry; };
        int *castconfig_intptr(void *entry) { return (int *)entry; };
        float castconfig_float(void *entry) { return *(float *)entry; };
        float *castconfig_floatptr(void *entry) { return (float *)entry; };
        char castconfig_char(void *entry) { return *(char *)entry; };
        char *castconfig_charptr(void *entry) { return (char *)entry; };
        string castconfig_string(void *entry) { return *(string *)entry; };
        string *castconfig_stringptr(void *entry) { return (string *)entry; };
        template <typename T>
        void *castconfig_object(void *entry) { return *(T *)entry; };
        template <typename T>
        void **castconfig_objectptr(void *entry) { return (T *)entry; };
} PSI_configurationdata_t;

/* *********************************************
        TEST AND BENCHMARK

int main(int argc, char const *argv[])
{

        return 0;
}

********************************************* */

/* *********************************************
        INTERPROCESS-INTERSYSTEM COMMUNICATION

int main(int argc, char const *argv[])
{
        /////////////////////////////////////////////////////////
        PSI_fileShareConfig myfileShared;
        PSI_fileShareData myfileData = getData(myfileShared);
        //

        //
        setData(myfileShare);
        /////////////////////////////////////////////////////////
        PSI_sharedMemory mymemShared;
        mymemShared = getmemShared();
        //

        //
        setmemShared(mymemShared);

        /////////////////////////////////////////////////////////
        PSI_localSocket myLocal;


        /////////////////////////////////////////////////////////
        PSI_remoteSocket myRemote;




        /////////////////////////////////////////////////////////
        return 0;
}

********************************************* */

typedef struct PSI_fileshareConfig_s
{

} PSI_filesharedConfig_t;

typedef struct PSI_sharedMemory_s
{

} PSI_sharedMemory_t;

typedef struct PSI_localSocket_s
{

} PSI_localSocket_t;

typedef struct PSI_remoteSocket_s
{

} PSI_remoteSocket_t;

/* *********************************************
        COMMUNICATION PROTOCOLS

int main(int argc, char const *argv[])
{
        ORGANON COMMUNICATION INTERFACE:

        MESSAGE PASSAGE INTERFACE:

        INTERPROCESS COMMUNCIATION:

        NETWORK:

        return 0;
}

********************************************* */

/* *********************************************
        COMPRESSION & CRYPTOGRAPHY

int main(int argc, char const *argv[])
{

        return 0;
}

********************************************* */

/* *********************************************
        FILE FORMAT TOOLS

int main(int argc, char const *argv[])
{

        return 0;
}

********************************************* */

/* *********************************************
        SOFTWARE DISTRIBUTION

int main(int argc, char const *argv[])
{

        return 0;
}

********************************************* */

/* *********************************************
        MAIN
********************************************* */

int main(int argc, char const *argv[])
{

        return 0;
}
