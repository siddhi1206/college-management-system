#include<stdio.h>
int display();
void Departments();
void comp();
void IT();
void ENTC();
void contact_us();
void MIS();
void G1();
void H1();
void N1();
void I1();
void E1();
void J1();
void form();
void course_reg();
void exam_reg();


int main(){

    display();
    
    
    
}

int display(){
    int a;
    printf("\n\n\n\n");
    printf("                _________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                         MIT WORLD PEACE UNIVERSITY, PUNE                                                |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |      Adress   :  Kothrud, Pune, Maharashtra 411038                                                Helpline No. 8669990193               |\n");
    printf("               |      Email ID :  uttam.padwal@mitwpu.ed                                                                                                 |\n");
    printf("               |                                                                                                                                         |\n");                                           
    printf("               |_________________________________________________________________________________________________________________________________________|\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                            ---- 1. DEPARTMENTS ----                                                     |\n");        
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                        1 . Computer Engineering           2. Information Technology          3. Electronics and Telecommunication       |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |_________________________________________________________________________________________________________________________________________|\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                ---- 2. MIS ----                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                        1. Course Registration                    2. Exam Registration                                   |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |_________________________________________________________________________________________________________________________________________|\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                             ---- 3. CONTACT US ----                                                     |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                        1. Email ID : uttam.padwal@mitwpu.ed       2. Instagram ID : @mitwpupune        3. Twitter : @mitwpu             |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |_________________________________________________________________________________________________________________________________________|\n\n\n\n\n");
    printf("\n\n\n          -----------------------------------------------------------------Enter Your Choice-------------------------------------------------------\n\n\n");

    printf("                                                                            1 to jump on the Departments page\n");
    printf("                                                                            2 for the Online MIS\n");
    printf("                                                                            3 For Contact Us\n");
    printf("                                                                            4 for Exit : ");
    scanf("%d", &a);

    if(a==1){
        Departments();
    }
    else if(a==2){
        MIS();
    }
    else if(a==3){
        contact_us();
    }
    else if(a==4){
        return 0;
    }
    else{
        printf("Enter a valid no.!!!!!!!!!!!!\n\n\n\n");
        display();
    }

    
}

void Departments(){
    int a;
    printf("\n\n\n\n\n\n");
    printf("                _________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                            ---- 1. DEPARTMENTS ----                                                     |\n");        
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                        1 . Computer Engineering           2. Information Technology          3. Electronics and Telecommunication       |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |_________________________________________________________________________________________________________________________________________|\n\n\n\n");
    printf("\n\n\n          -----------------------------------------------------------------Enter Your Choice-------------------------------------------------------\n\n\n");
    printf("                                                                          1 to visit Computer Engineering Department                              \n");
    printf("                                                                          2 for Information Technology                                            \n");
    printf("                                                                          3 for Electronics and telecommunication                                 \n");
    printf("                                                                          4 to go back on the previous page : ");    
    scanf("%d", &a);

    if(a==1){
        comp();
    }
    else if(a==2){
        IT();
    }
    else if(a==3){
        ENTC();
    }
    else if(a==4){
        display();
    }
    else{
        printf("Enter the valid no.!!!!!!!!!\n\n\n");
        Departments();
    }

}

void comp(){
    int a;
    printf("\n\n\n\n");
    printf("                __________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                          ---- COMPUTER ENGINEERING ----                                                  |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                 1. G1 Divsion                                                        2. H1 Divion                        |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |__________________________________________________________________________________________________________________________________________|\n");
    printf("\n\n\n          ----------------------------------------------------------------Enter Your Choice---------------------------------------------------------\n\n\n");
    printf("                                                                      1 to see information of G1 Division\n");    
    printf("                                                                      2 for H1 Division\n");
    printf("                                                                      3 for jump on the previous page : ");
    scanf("%d", &a);

    if(a==1){
        G1();
    }
    else if(a==2){
        H1();
    }
    else if(a==3){
        Departments();
    }
    else{
        printf("Enter the valid no.!!!!!!!!\n\n\n");
        comp();
    }

}

void IT(){
    int a;
    printf("\n\n\n\n");
    printf("                __________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                        ---- INFORMATION TECHNOLOGY ----                                                  |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                 1. N1 Divsion                                                        2. I1 Divion                        |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |__________________________________________________________________________________________________________________________________________|\n");
    printf("\n\n\n          ---------------------------------------------------------------Enter Your Choice----------------------------------------------------------\n\n\n");
    printf("                                                                      1 to see information of N1 Division\n");    
    printf("                                                                      2 for I1 Division\n");
    printf("                                                                      3 for jump on the previous page : ");
    scanf("%d", &a);

    if(a==1){
        N1();
    }
    else if(a==2){
        I1();
    }
    else if(a==3){
        Departments();
    }
    else{
        printf("Enter the valid no.!!!!!!!!\n\n\n");
        IT();
    }

}

void ENTC(){
    int a;
    printf("\n\n\n\n");
    printf("                __________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                     ---- ELECTRONICS AND TELECOMMUNICATTION ----                                         |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |                                 1. E1 Divsion                                                        2. J1 Divion                        |\n");
    printf("               |                                                                                                                                          |\n");
    printf("               |__________________________________________________________________________________________________________________________________________|\n");
    printf("\n\n\n          ----------------------------------------------------------------Enter Your Choice---------------------------------------------------------\n\n\n");
    printf("                                                                      1 to see information of E1 Division\n");    
    printf("                                                                      2 for J1 Division\n");
    printf("                                                                      3 for jump on the previous page : ");
    scanf("%d", &a);

    if(a==1){
        E1();
    }
    else if(a==2){
        J1();
    }
    else if(a==3){
        Departments();
    }
    else{
        printf("Enter the valid no.!!!!!!!!\n\n\n");
        ENTC();
    }
}

void contact_us(){
    int a;
    printf("\n\n\n\n\n\n");
    printf("                _________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                             ---- 3. CONTACT US ----                                                     |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                        1. Email ID : uttam.padwal@mitwpu.ed       2. Instagram ID : @mitwpupune        3. Twitter : @mitwpu             |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |_________________________________________________________________________________________________________________________________________|\n\n\n\n\n");
    printf("\n\n\n          ---------------------------------------------------------------- Enter Your Choice ------------------------------------------------------\n\n\n");
    printf("                                                               You can Contact US through our social handles!!!!\n\n\n");
    printf("                                                                 Enter 1 If you want to contact for a new admission purpose\n");
    printf("                                                                       2 to jump on the previous page : ");
    scanf("%d", &a);

    if(a==1){
        form();
    }
    else if(a==2){
        display();
    }
    else{
        printf("                                                  Enter a valid no.!!!!!\n\n\n\n");
        contact_us();
    }

}
void form(){
    int num, a, b;
    float per;       
    char name[50], mail[30], department[30];
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("                                                                              Fill the below form\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n");
    printf("                                                                          Name : ");
    gets(name);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                          Email ID : ");
    gets(mail);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                          Enter Your SSC Percentages : ");
    scanf("%f", &per);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                          Enter your phone number : ");
    scanf("%d", &num);
    printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
    printf("                                                                          Press 1 for Submit\n");
    printf("                                                                          Press 2 for Reset : ");
    scanf("%d", &a);

    if(a==1){
        printf("                                                                \n\n\nYour form is submitted successfully!!! You will get further details about admission process through mails\n");
    }
    else if(a==2){
        form();
        }
    else{
            printf("                                                            \n\nEnter a valid number!!!!!!!");
            form();
        }
    printf("\n\n\n-------------------------------------------------------------------------- Enter Your Choice ------------------------------------------------------\n\n\n");
    printf("                                                                      Press 1 to go back on the previous page\n\n");
    scanf("%d", &b);
    if(b==1){
        contact_us();
    }
    else{
        printf("                                                                      \n\nEnter a valid number!!!!!!!");      
        form();  
    }        

}
void MIS(){
    int a;
    printf("\n\n\n\n");
    printf("                _________________________________________________________________________________________________________________________________________\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                ---- 2. MIS ----                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                        1. Course Registration                    2. Exam Registration                                   |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |                                                                                                                                         |\n");
    printf("               |_________________________________________________________________________________________________________________________________________|\n\n\n\n\n");
    printf("\n\n\n          ---------------------------------------------------------------- Enter Your Choice ------------------------------------------------------\n\n\n");
    printf("                                                                            1 for Course Registration\n");    
    printf("                                                                            2 for Exam Registration\n");
    printf("                                                                            3 to jump on previous page : ");
    scanf("%d", &a);

    if(a==1){
        course_reg();
    }
    else if(a==2){
        exam_reg();
    }
    else if(a==3){
        display();
    }
    else{
        printf("                                                                  Enter a valid no. !!!!!!!!!\n\n\n\n\n");
        MIS();
    }
}

void course_reg(){
    int en, a, pass, confirm_pass, c;
    printf("                                                                      WELCOME TO THE COURSE REGISTRATION\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n");
    printf("                                                                      Enter your Enrollment number : ");
    scanf("%d", &en);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                      Password : ");
    scanf("%d", &pass);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                      Confirm password : ");
    scanf("%d", &confirm_pass);
    printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
    printf("                                                                          Press 1 for login\n");
    printf("                                                                          Press 2 for Reset : ");
    scanf("%d", &a);

    if(a==1){
        int array[5], i, b;
        if(pass == confirm_pass){
            printf("\n\n                                                                You have logged in successfully !!!\n");
            printf("\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                                  Choose from the following courses for your course registration : \n");
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                                  1. COMMUNICATION SKILLS\n");
            printf("                                                                  2. DATA STRUCTURES\n");
            printf("                                                                  3. APPLIES PHHYSICS\n");
            printf("                                                                  4. PROGRAMMING IN C\n");
            printf("                                                                  5. OOP C++\n");
            printf("                                                                  6. LINUX BASICS\n");
            printf("                                                                  7. COMPUTER NETWORKING\n");
            printf("                                                                  8. PYTHON\n");
            printf("                                                                  9. ANDROID APPLICATION PROGRAMMING\n");
            printf("                                                                  10. JAVASCRIPT\n");
            printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
            for(i=0;i<5;i++){
                scanf("%d", &array[i]);
            }
            printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
            printf("                                                                   Do you want to submit the choices?\n");
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                                   1. YES\n");
            printf("                                                                   2. NO : ");
            scanf("%d", &b);
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            if(b == 1){
            printf("\n\n                                                                 You have successfully registered for the courses : \n");
            for(i=0;i<5;i++){
                if(array[i] == 1){
                    printf("                                                                  1. COMMUNICATION SKILLS\n");
                }
                else if(array[i]==2){
                    printf("                                                                  2. DATA STRUCTURES\n");
                }
                else if(array[i]==3){
                    printf("                                                                  3. APPLIED PHYSICS\n");
                }
                else if(array[i]==4){
                    printf("                                                                  4. PROGRAMMING IN C\n");
                }
                else if(array[i]==5){
                    printf("                                                                  5. OOP C++\n");
                }
                else if(array[i]==6){
                    printf("                                                                  6. LINUX BASICS\n");
                }
                else if(array[i]==7){
                    printf("                                                                  7. COMPUTER NETWORKING\n");
                }
                else if(array[i]==8){
                    printf("                                                                  8. PYTHON\n");
                }
                else if(array[i]==9){
                    printf("                                                                  9. ANDROID APPLICATION PROGRAMMING\n");
                }
                else if(array[i]==10){
                    printf("                                                                  10. JAVASCRIPT\n");
                }
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            }
            }

        }
        else{
            printf("\n\n                                                                Wrong password!!! Please try again !!!");
            course_reg();
            
        }
    printf("\n\n\n-------------------------------------------------------------------------- Enter Your Choice ------------------------------------------------------\n\n\n");
    printf("                                                                      Press 1 to go back on the previous page\n\n");
    scanf("%d", &c);
    if(c==1){
        MIS();
    }
    else{
        printf("                                                                      \n\nEnter a valid number!!!!!!!");      
        course_reg();  
    }   


    }
    else if(a==2){
        course_reg();
    }
    else{
            printf("                                                              \n\nEnter a valid number!!!!!!!");
            course_reg();
        }


}

void exam_reg(){
int en, a, pass, confirm_pass, c, d, e;
    printf("                                                                      WELCOME TO THE EXAM REGISTRATION\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n");
    printf("                                                                      Enter your Enrollment number : ");
    scanf("%d", &en);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                      Password : ");
    scanf("%d", &pass);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                                      Confirm password : ");
    scanf("%d", &confirm_pass);
    printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
    printf("                                                                          Press 1 for login\n");
    printf("                                                                          Press 2 for Reset : ");
    scanf("%d", &a);

    if(a==1){
        int array[5], i, b;
        if(pass == confirm_pass){
            printf("\n\n                                                                You have logged in successfully !!!\n");
            printf("\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                                  Choose from the following courses for your exam registration : \n");
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                                  1. COMMUNICATION SKILLS\n");
            printf("                                                                  2. DATA STRUCTURES\n");
            printf("                                                                  3. APPLIES PHHYSICS\n");
            printf("                                                                  4. PROGRAMMING IN C\n");
            printf("                                                                  5. OOP C++\n");
            printf("                                                                  6. LINUX BASICS\n");
            printf("                                                                  7. COMPUTER NETWORKING\n");
            printf("                                                                  8. PYTHON\n");
            printf("                                                                  9. ANDROID APPLICATION PROGRAMMING\n");
            printf("                                                                  10. JAVASCRIPT\n");
            printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
            for(i=0;i<5;i++){
                scanf("%d", &array[i]);
            }
            printf("\n\n\n------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------------------------\n\n\n");
            printf("                                                                   Do you want to submit the choices?\n");
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                                   1. YES\n");
            printf("                                                                   2. NO : ");
            scanf("%d", &b);
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            if(b == 1){
            printf("\n\n                                                                 You have successfully registered for the exam : \n");
            for(i=0;i<5;i++){
                if(array[i] == 1){
                    printf("                                                                  1. COMMUNICATION SKILLS\n");
                }
                else if(array[i]==2){
                    printf("                                                                  2. DATA STRUCTURES\n");
                }
                else if(array[i]==3){
                    printf("                                                                  3. APPLIED PHYSICS\n");
                }
                else if(array[i]==4){
                    printf("                                                                  4. PROGRAMMING IN C\n");
                }
                else if(array[i]==5){
                    printf("                                                                  5. OOP C++\n");
                }
                else if(array[i]==6){
                    printf("                                                                  6. LINUX BASICS\n");
                }
                else if(array[i]==7){
                    printf("                                                                  7. COMPUTER NETWORKING\n");
                }
                else if(array[i]==8){
                    printf("                                                                  8. PYTHON\n");
                }
                else if(array[i]==9){
                    printf("                                                                  9. ANDROID APPLICATION PROGRAMMING\n");
                }
                else if(array[i]==10){
                    printf("                                                                  10. JAVASCRIPT\n");
                }
            printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            }
            }

        }
        else{
            printf("\n\n                                                                Wrong password!!! Please try again !!!");
            exam_reg();
            
        }
    printf("\n\n\n-------------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------\n\n\n");
    printf("                                                                            Do you want to pay now or later?\n");
    printf("                                                                            1. Now\n");
    printf("                                                                            1. Later : ");
    scanf("%d", &d);

    if(d==1){
        printf("\n\n\n-------------------------------------------------------------------------- Enter Your Choice -------------------------------------------------------\n\n\n");
        printf("                                                                      Enter the amount\n");
        scanf("%d", &e);
        printf("                                                              Successfully paid %d/- for you registration\n", e);
        printf("                                                              Exam Registration successfull!!!\n");
    }
    else if(d==2){
        printf("                                                              Exam Registration is incomplete please pay your fees later !!!\n");
    }
    else{
        printf("                                                              \n\nEnter a valid number!!!!!!!");
        exam_reg();
    }


    


    printf("\n\n\n-------------------------------------------------------------------------- Enter Your Choice ------------------------------------------------------\n\n\n");

    printf("                                                                      Press 1 to go back on the previous page\n\n");
    scanf("%d", &c);
    if(c==1){
        MIS();
    }
    else{
        printf("                                                                      \n\nEnter a valid number!!!!!!!");      
        exam_reg();  
    }   


    }
    else if(a==2){
        exam_reg();
    }
    else{
            printf("                                                              \n\nEnter a valid number!!!!!!!");
            exam_reg();
        }
 }

void G1() {
    int a ;
    printf("\n\n\n\n") ;
    printf("                _______________________________________________________________________________________\n");
    printf("               |      ||         ||                                   ||       ||   ||           ||    |\n");
    printf("               |      ||         ||                                   ||       ||   ||           ||    |\n");
    printf("               |      ||   SR    ||                NAME               ||   DIV ||   || ENROLL NO ||    |\n");
    printf("               |---------------------------------------------------------------------------------------|\n");
    printf("               |      ||   01.   || ADIRAJ VIVEK SAWANT               ||   G1  ||   || 2106001   ||    |\n");
    printf("               |      ||   02.   || AHIRE VEDANT BHAGWAT              ||   G1  ||   || 2106002   ||    |\n");
    printf("               |      ||   03.   || AMIT LAVHAJI PATIL                ||   G1  ||   || 2106003   ||    |\n");
    printf("               |      ||   04.   || ANARSE PAYAL LAHUJI               ||   G1  ||   || 2106004   ||    |\n");
    printf("               |      ||   05.   || ARJUN RAHUL PANSE                 ||   G1  ||   || 2106005   ||    |\n");
    printf("               |      ||   06.   || AUTI AASAWARI MANGESH             ||   G1  ||   || 2106006   ||    |\n");
    printf("               |      ||   07.   || BADHE HARSH DATTATRAY             ||   G1  ||   || 2106007   ||    |\n");
    printf("               |      ||   08.   || BAGAD GAURI BALU                  ||   G1  ||   || 2106008   ||    |\n");
    printf("               |      ||   09.   || BAGWAN IMDADAHMED MUKHTARAHEMED   ||   G1  ||   || 2106009   ||    |\n");
    printf("               |      ||   10.   || BARANGULE SHAMBHU NAVNATH         ||   G1  ||   || 2106010   ||    |\n");
    printf("               |      ||   11.   || BARKASE SOHAM DNYANESHWAR         ||   G1  ||   || 2106011   ||    |\n");
    printf("               |      ||   12.   || BAVIKAR PARTH SANDEEP             ||   G1  ||   || 2106012   ||    |\n");
    printf("               |      ||   13.   || BHAGAT PRACHI PANDURANG           ||   G1  ||   || 2106013   ||    |\n");
    printf("               |      ||   14.   || BhAGAT RUSHIKESH RAJKUMAR         ||   G1  ||   || 2106014   ||    |\n");
    printf("               |      ||   15.   || BHALSING HARSGAD BALASO           ||   G1  ||   || 2106015   ||    |\n");
    printf("               |      ||   16.   || BHANDE ADITYA VISHNU              ||   G1  ||   || 2106016   ||    |\n");
    printf("               |      ||   17.   || BHISE NIKITA SANJAY               ||   G1  ||   || 2106017   ||    |\n");
    printf("               |      ||   18.   || BHITRE PRIYA SAGAR                ||   G1  ||   || 2106018   ||    |\n");
    printf("               |      ||   19.   || BHOITE RIYA TUKARAM               ||   G1  ||   || 2106019   ||    |\n");
    printf("               |      ||   20.   || BHONDVE TEJASVINI DNYANDEO        ||   G1  ||   || 2106020   ||    |\n");
    printf("               |      ||   21.   || BHUTE SACHIN NAVRATAN             ||   G1  ||   || 2106021   ||    |\n");
    printf("               |      ||   22.   || BIRAJDAR ADITYA ANGAD             ||   G1  ||   || 2106022   ||    |\n");
    printf("               |      ||   23.   || BORAGE SAKSHI SAGAR               ||   G1  ||   || 2106023   ||    |\n");
    printf("               |      ||   24.   || BORSE KALPESH DNYANESHWAR         ||   G1  ||   || 2106024   ||    |\n");
    printf("               |      ||   25.   || CHALAWADI SNEHAL MAHESH           ||   G1  ||   || 2106025   ||    |\n");
    printf("               |      ||   26.   || CHAUDHARI MITALI RATILAL          ||   G1  ||   || 2106026   ||    |\n");
    printf("               |      ||   27.   || CHAURE SAGAR NANA                 ||   G1  ||   || 2106027   ||    |\n");
    printf("               |      ||   28.   || CHAVAN ABHAY UMESH                ||   G1  ||   || 2106028   ||    |\n");
    printf("               |      ||   29.   || CHAVAN PRITHVIRAJ SUNIL           ||   G1  ||   || 2106029   ||    |\n");
    printf("               |      ||   30.   || CHAVAN    SHREYA NAVNATH          ||   G1  ||   || 2106030   ||    |\n");
    printf("               |      ||         ||                                   ||       ||   ||           ||    |\n"); 
    printf("               |______||_________||___________________________________||_______||___||___________||____|\n");
    printf("\n\n\n          ---------------------------------Enter Your Choice----------------------------------\n\n\n");

    printf("                                         1 for directly go to the Home page\n");
    printf("                                         2 for previous page :");
    scanf("%d", &a);
    if(a==1){
        display();
    }
    else if(a==2){
        comp();
    }
    else{
        printf("                                         PLEASE ENTER A VALID NO.!!!!!!!!!!!!\n\n\n\n\n");
        G1();
    }
}

void H1(){
    int a;
    printf("                _________________________________________________________________________________________\n");
    printf("               |      ||         ||                                   ||       ||   ||           ||      |\n");
    printf("               |      ||         ||                                   ||       ||   ||           ||      |\n");
    printf("               |      ||   SR    ||               Name                ||  Div  ||   || Enroll No ||      |\n");
    printf("               |-----------------------------------------------------------------------------------------|\n");
    printf("               |      ||   01.   || CHAVAN SHREYA NAVNATH             ||   H1  ||   || 2106031   ||      |\n");
    printf("               |      ||   02.   || CHAVAN SNEHA NITIN                ||   H1  ||   || 2106032   ||      |\n");
    printf("               |      ||   03.   || CHAVHAN SIDDHI GORAKH             ||   H1  ||   || 2106033   ||      |\n");
    printf("               |      ||   04.   || CHHABILWAD SHREYASH DILIP         ||   H1  ||   || 2106034   ||      |\n");
    printf("               |      ||   05.   || CHIKANE SAKSHI SANDEEP            ||   H1  ||   || 2106035   ||      |\n");
    printf("               |      ||   06.   || CHINCHOLE RITESH GANESH           ||   H1  ||   || 2106036   ||      |\n");
    printf("               |      ||   07.   || CHOPADE PRAJWAL SHRIKANT          ||   H1  ||   || 2106037   ||      |\n");
    printf("               |      ||   08.   || DASARWAD VISHWAJEET PANDHARI      ||   H1  ||   || 2106038   ||      |\n");
    printf("               |      ||   09.   || DAWALE RUSHIKESH PUNDLIK          ||   H1  ||   || 2106039   ||      |\n");
    printf("               |      ||   10.   || DEOBHANKAR SHREYAS SUNIL          ||   H1  ||   || 2106040   ||      |\n");
    printf("               |      ||   11.   || DEORE YAMINI BHAGWAN              ||   H1  ||   || 2106041   ||      |\n");
    printf("               |      ||   12.   || DESHMUKH MOHINI MUKESH            ||   H1  ||   || 2106042   ||      |\n");
    printf("               |      ||   13.   || DESHPANDE SHRAVAN GANESH          ||   H1  ||   || 2106043   ||      |\n");
    printf("               |      ||   14.   || DESHPANDE SUJAY HEMANTKUMAR       ||   H1  ||   || 2106044   ||      |\n");
    printf("               |      ||   15.   || DEVARE SAKSHI PANDURANG           ||   H1  ||   || 2106045   ||      | \n");
    printf("               |      ||   16.   || DEVKATE VISHAL SANDIPAN           ||   H1  ||   || 2106046   ||      | \n");
    printf("               |      ||   17.   || DIGHE MANJUSHREE NAVNATH          ||   H1  ||   || 2106047   ||      | \n");
    printf("               |      ||   18.   || DODAKE ANIRUDDHA ANIL             ||   H1  ||   || 2106048   ||      | \n");
    printf("               |      ||   19.   || DONGARE VAISHNAVI AJINATH         ||   H1  ||   || 2106049   ||      | \n");
    printf("               |      ||   20.   || EAKANSH YOGESH KSHIRSAGAR         ||   H1  ||   || 2106050   ||      | \n");
    printf("               |      ||   21.   || GADADE DHANASHRI SARJERAO         ||   H1  ||   || 2106051   ||      | \n");
    printf("               |      ||   22.   || GADHAVE DIKSHA MAHESH             ||   H1  ||   || 2106052   ||      | \n");
    printf("               |      ||   23.   || GAIKWAD ATHARV ISHWARA            ||   H1  ||   || 2106053   ||      | \n");
    printf("               |      ||   24.   || GAIKWAD NIKITA MANOJ              ||   H1  ||   || 2106054   ||      | \n");
    printf("               |      ||   25.   || GAIKWAD OM DNYANESHWAR            ||   H1  ||   || 2106055   ||      | \n");
    printf("               |      ||   26.   || GAIKWAD SANIYA KIRAN              ||   H1  ||   || 2106056   ||      | \n");
    printf("               |      ||   27.   || GAIKWAD SUHANI BAPU               ||   H1  ||   || 2106057   ||      | \n");
    printf("               |      ||   28.   || GAIKWAD TUSHAR GURUDAS            ||   H1  ||   || 2106058   ||      | \n");
    printf("               |      ||   29.   || GAMBHIR CHINMAY MAHESH            ||   H1  ||   || 2106059   ||      | \n");
    printf("               |      ||   30.   || GAYAKE ATHARVA SANJAY             ||   H1  ||   || 2106060   ||      | \n");
    printf("               |      ||         ||                                   ||       ||   ||           ||      |\n");
    printf("               |______||_________||___________________________________||_______||___||___________||______|\n");
    printf("\n\n\n          -----------------------------------------Enter Your Choice-------------------------------\n\n\n");

    printf("                                                        1 for HOME Page\n");
    printf("                                                        2 for previous page : ");
    scanf("%d", &a);

    if(a==1){
        display();
    }
    else if(a==2){
        comp();
    }
    else{
        printf("                                         PLEASE ENTER A VALID NO.!!!!!!!!!!!!\n\n\n\n\n");
        H1();
    }
}

void N1(){
    int a;
    printf("                ____________________________________________________________________________________________\n");
    printf("               |      ||        ||                                        ||      ||   ||            ||     |\n");
    printf("               |      ||   SR   ||                 Name                   ||  Div ||   ||  Enroll No ||     |\n");
    printf("               |-------------------------------------------------------------------------------------||     |\n");
    printf("               |      ||   01.  ||      GHADAGE AARYA MAHESHKUMAR         ||  N1  ||   ||  2106061   ||     |\n");
    printf("               |      ||   02.  ||      GHOGARE SIDDHI VASANT             ||  N1  ||   ||  2106062   ||     |\n");
    printf("               |      ||   03.  ||      GHORPADE MAYURI VILAS             ||  N1  ||   ||  2106063   ||     |\n");
    printf("               |      ||   04.  ||      GIRI SUSHIL SAKHARAM              ||  N1  ||   ||  2106064   ||     |\n");
    printf("               |      ||   05.  ||      GITE ANIKET PANDURANG             ||  N1  ||   ||  2106065   ||     |\n");
    printf("               |      ||   06.  ||      GOMARE PRAGATI CHANDRAKANT        ||  N1  ||   ||  2106066   ||     |\n");
    printf("               |      ||   07.  ||      GORE SAKSHI RAMDAS                ||  N1  ||   ||  2106067   ||     |\n");
    printf("               |      ||   08.  ||      HALLOLI PRIYANKA MALLIKARJUN      ||  N1  ||   ||  2106068   ||     |\n");
    printf("               |      ||   09.  ||      HARALE ANUSHKA SOMNATH            ||  N1  ||   ||  2106069   ||     |\n");
    printf("               |      ||   10.  ||      HARGUDE SAYALI ANIL               ||  N1  ||   ||  2106070   ||     |\n");
    printf("               |      ||   11.  ||      HOLE SRUSHTI SHIVAJI              ||  N1  ||   ||  2106071   ||     |\n");
    printf("               |      ||   12.  ||      HUMBE BHAKTI RAJENDRA             ||  N1  ||   ||  2106072   ||     |\n");
    printf("               |      ||   13.  ||      INAMDAR SHAHEJIN AAMIR            ||  N1  ||   ||  2106073   ||     |\n");
    printf("               |      ||   14.  ||      IPPAR SHIVANI SANDEEP             ||  N1  ||   ||  2106074   ||     |\n");
    printf("               |      ||   15.  ||      JADHAV TANUJA RAJENDRA            ||  N1  ||   ||  2106075   ||     |\n");
    printf("               |      ||   16.  ||      JADHAV VAIBHAV BHARAT             ||  N1  ||   ||  2106076   ||     |\n");
    printf("               |      ||   17.  ||      JAGTAP DIKSHA DATTRAY             ||  N1  ||   ||  2106077   ||     |\n");
    printf("               |      ||   18.  ||      JAGTAP PRIYANKA SANJAY            ||  N1  ||   ||  2106078   ||     |\n");
    printf("               |      ||   19.  ||      JAGTAP SEJAL SAYAJI               ||  N1  ||   ||  2106079   ||     |\n");
    printf("               |      ||   20.  ||      JAGTAP VARUN BIPIN                ||  N1  ||   ||  2106080   ||     |\n");
    printf("               |      ||   21.  ||      JARAD DIKSHA RAMCHANDRA           ||  N1  ||   ||  2106081   ||     |\n");
    printf("               |      ||   22.  ||      JOSHI SWARALI SUNIL               ||  N1  ||   ||  2106082   ||     |\n");
    printf("               |      ||   23.  ||      KABADE DHARTI PRAKASH             ||  N1  ||   ||  2106083   ||     |\n");
    printf("               |      ||   24.  ||      KADAM ATHARVA KAILAS              ||  N1  ||   ||  2106084   ||     |\n");
    printf("               |      ||   25.  ||      KADAM VAISHNAVI AMAR              ||  N1  ||   ||  2106085   ||     |\n");
    printf("               |      ||   26.  ||      KALE KSHITIJ VISHWNATH            ||  N1  ||   ||  2106086   ||     |\n");
    printf("               |      ||   27.  ||      KALE SAMRUDDHI SURESH             ||  N1  ||   ||  2106087   ||     |\n");
    printf("               |      ||   28.  ||      KALE VEDANT PRAMOD                ||  N1  ||   ||  2106088   ||     |\n");
    printf("               |      ||   29.  ||      KAMVLE VISHWAJEET VIVEK           ||  N1  ||   ||  2106089   ||     |\n");
    printf("               |      ||   30.  ||      KANDE VAISHNAVI SUDHAKAR          ||  N1  ||   ||  2106090   ||     |\n");
    printf("               |      ||        ||                                        ||      ||   ||            ||     |\n");
    printf("               |______||________||________________________________________||______||___||____________||_____|\n");  
    printf("\n\n\n          ------------------------------------ Enter Your Choice --------------------------------------\n\n\n");                                          

    printf("                                                   1 for HOME Page\n");
    printf("                                                   2 for previous page : ");
    scanf("%d", &a);

    if(a==1){
        display();
    }
    else if(a==2){
        IT();
    }
    else{
        printf("                                         PLEASE ENTER A VALID NO.!!!!!!!!!!!!\n\n\n\n\n");
        N1();
    }

}
void I1(){
    int a;
    printf("                ______________________________________________________________________________________________\n");
    printf("               |      ||        ||                                        ||        ||   ||            ||     |\n");
    printf("               |      ||   SR   ||                 Name                   ||  Div   ||   ||  Enroll No ||     |\n");
    printf("               |---------------------------------------------------------------------------------------||     |\n");
    printf("               |      ||    1   ||        KAPLE SAKSHI RAJESH             ||   I1   ||   ||   2106093  ||     |\n");
    printf("               |      ||    2   ||        KAPSE SAHIL SANJAY              ||   I1   ||   ||   2106094  ||     |\n");
    printf("               |      ||    3   ||        KARALE SAMRUDDHI YOGESH         ||   I1   ||   ||   2106095  ||     |\n");
    printf("               |      ||    4   ||        KATE CHANDRASHEKHAR GAJANAN     ||   I1   ||   ||   2106096  ||     |\n");
    printf("               |      ||    5   ||        KEDARI PRATIK CHHAGAN           ||   I1   ||   ||   2106097  ||     |\n");
    printf("               |      ||    6   ||        KHADE NAMRATA HANUMANT          ||   I1   ||   ||   2106098  ||     |\n");
    printf("               |      ||    7   ||        KHAIRNAR KUNAL DHANAJI          ||   I1   ||   ||   2106099  ||     |\n");
    printf("               |      ||    8   ||        KHALULE SAMYAK DHANANJAY        ||   I1   ||   ||   2106100  ||     |\n");
    printf("               |      ||    9   ||        KHANDAGALE SAMIKSHA RAJENDRA    ||   I1   ||   ||   2106101  ||     |\n");
    printf("               |      ||    10  ||        KHARADE OM PRASHANT             ||   I1   ||   ||   2106103  ||     |\n");
    printf("               |      ||    11  ||        KHATAKALE RADHIKA DATTATRAY     ||   I1   ||   ||   2106104  ||     |\n");
    printf("               |      ||    12  ||        KHESE DURGA JAYRAM              ||   I1   ||   ||   2106105  ||     |\n");
    printf("               |      ||    13  ||        KHOMANE SIDDHI SANTOSH          ||   I1   ||   ||   2106106  ||     |\n");
    printf("               |      ||    14  ||        KHURANGE SHRIKANT BAYAJIRAO     ||   I1   ||   ||   2106107  ||     |\n");
    printf("               |      ||    15  ||        KHURPE SANIKA DIPAK             ||   I1   ||   ||   2106108  ||     |\n");
    printf("               |      ||    16  ||        KHUTE SANCHI SANJEEV            ||   I1   ||   ||   2106109  ||     |\n");
    printf("               |      ||    17  ||        KIRVE SAHIL SANTOSH             ||   I1   ||   ||   2106110  ||     |\n");
    printf("               |      ||    18  ||        KOSALGE SAMIKSHA RAMAKANT       ||   I1   ||   ||   2106111  ||     |\n");
    printf("               |      ||    19  ||        KSHIRSAGAR SANSKRUTI AMBER      ||   I1   ||   ||   2106112  ||     |\n");
    printf("               |      ||    20  ||        KUDALE DNYANESHWARI MOHAN       ||   I1   ||   ||   2106113  ||     |\n");
    printf("               |      ||    21  ||        KULKARNI VINAY RAVINDRA         ||   I1   ||   ||   2106114  ||     |\n");
    printf("               |      ||    22  ||        KUMBHAR TUSHAR SHIVAJI          ||   I1   ||   ||   2106115  ||     |\n");
    printf("               |      ||    23  ||        KUMBHARKAR SHIVAM MOHAN         ||   I1   ||   ||   2106116  ||     |\n");
    printf("               |      ||    24  ||        KURUMKAR YASH VINOD             ||   I1   ||   ||   2106117  ||     |\n");
    printf("               |      ||    25  ||        LAWANDE SAKSHI SUBHASH          ||   I1   ||   ||   2106118  ||     |\n");
    printf("               |      ||    26  ||        LIMBEKAR PRASAD SIDDHESHWAR     ||   I1   ||   ||   2106119  ||     |\n");
    printf("               |      ||    27  ||        LOHAKARE HARSHAD SANTOSH        ||   I1   ||   ||   2106120  ||     |\n");
    printf("               |      ||    28  ||        LOKHANDE DISHA SANDIP           ||   I1   ||   ||   2106121  ||     |\n");
    printf("               |      ||    29  ||        LOMATE POOJA DATTATRAY          ||   I1   ||   ||   2106122  ||     |\n");
    printf("               |      ||    30  ||        Mahanawar Jairaj Hanumant       ||   I1   ||   ||   2106123  ||     |\n");
    printf("               |      ||        ||                                        ||        ||   ||            ||     |\n");
    printf("               |______||________||________________________________________||________||___||____________||_____|\n");
    printf("\n\n\n          ------------------------------------ Enter Your Choice --------------------------------------\n\n\n");                                          

    printf("                                                   1 for HOME Page\n");
    printf("                                                   2 for previous page : ");
    scanf("%d", &a);

    if(a==1){
        display();
    }
    else if(a==2){
        IT();
    }
    else{
        printf("                                         PLEASE ENTER A VALID NO.!!!!!!!!!!!!\n\n\n\n\n");
        I1();
    }
}
void E1(){
    int a;
    printf("                ______________________________________________________________________________________________\n");
    printf("               |      ||        ||                                        ||        ||   ||            ||     |\n");
    printf("               |      ||   SR   ||                 Name                   ||  Div   ||   ||  Enroll No ||     |\n");
    printf("               |---------------------------------------------------------------------------------------||     |\n");
    printf("               |      ||    1   ||           MANASWI DEEPAK MORE          ||   E1   ||   ||   2106124  ||     |\n");
    printf("               |      ||    2   ||           MANDLIK GAURI BALASAHEB      ||   E1   ||   ||   2106125  ||     |\n");
    printf("               |      ||    3   ||           MARNE SHRUTI GORAKH          ||   E1   ||   ||   2106126  ||     |\n");
    printf("               |      ||    4   ||           MARNE AYUSHA RAHUL           ||   E1   ||   ||   2106127  ||     |\n");
    printf("               |      ||    5   ||           MASKE SAHIL PARMESHWAR       ||   E1   ||   ||   2106128  ||     |\n");
    printf("               |      ||    6   ||           MERURKAR PRITI SANTOSH       ||   E1   ||   ||   2106129  ||     |\n");
    printf("               |      ||    7   ||           MOHARE VISHAL POPAT          ||   E1   ||   ||   2106130  ||     |\n");
    printf("               |      ||    8   ||           MORE JAGRUTI DHNYANESHWAR    ||   E1   ||   ||   2106131  ||     |\n");
    printf("               |      ||    9   ||           MORE SATEJ VILAS             ||   E1   ||   ||   2106132  ||     |\n");
    printf("               |      ||    10  ||           MORE SRUSHTI RAJENDRA        ||   E1   ||   ||   2106133  ||     |\n");
    printf("               |      ||    11  ||           MULUK MAYURESH TUKARAM       ||   E1   ||   ||   2106134  ||     |\n");
    printf("               |      ||    12  ||           NAGAWADE PUJA SOMNATH        ||   E1   ||   ||   2106135  ||     |\n");
    printf("               |      ||    13  ||           NAIK ADITYA ANIL             ||   E1   ||   ||   2106136  ||     |\n");
    printf("               |      ||    14  ||           NANDINI SAJAN KAKARNIYA      ||   E1   ||   ||   2106137  ||     |\n");
    printf("               |      ||    15  ||           NANGARE ATHARV RAJENDRA      ||   E1   ||   ||   2106138  ||     |\n");
    printf("               |      ||    16  ||           NEHA RAJKUMAR DIWAN          ||   E1   ||   ||   2106139  ||     |\n");
    printf("               |      ||    17  ||           NIGADE SHRAVANU PRAMOD       ||   E1   ||   ||   2106140  ||     |\n");
    printf("               |      ||    18  ||           NIKAM ADITI KRISHANT         ||   E1   ||   ||   2106141  ||     |\n");
    printf("               |      ||    19  ||           NISARGAN PREM SUNIL          ||   E1   ||   ||   2106142  ||     |\n");
    printf("               |      ||    20  ||           PADAR RUTUJA RAVINDRA        ||   E1   ||   ||   2106143  ||     |\n");
    printf("               |      ||    21  ||           PANSARE SHRAVANI JEEVAN      ||   E1   ||   ||   2106144  ||     |\n");
    printf("               |      ||    22  ||           PAPARKAR SUMIRAN SANJAY      ||   E1   ||   ||   2106145  ||     |\n");
    printf("               |      ||    23  ||           PARASE SUDARSHAN TANAJI      ||   E1   ||   ||   2106146  ||     |\n");
    printf("               |      ||    24  ||           PATHAK ADITYA VASANT         ||   E1   ||   ||   2106147  ||     |\n");
    printf("               |      ||    25  ||           PATIL BHOJRAJ DHARMENDRA     ||   E1   ||   ||   2106148  ||     |\n");
    printf("               |      ||    26  ||           PATIL VAISHNAVI SANJAY       ||   E1   ||   ||   2106149  ||     |\n");
    printf("               |      ||    27  ||           PATIL VAISHNAVI SANJIV       ||   E1   ||   ||   2106150  ||     |\n");
    printf("               |      ||    28  ||           PAWALE ROHAN SUNIL           ||   E1   ||   ||   2106151  ||     |\n");
    printf("               |      ||    29  ||           PAWAR GOURAVI SURESH         ||   E1   ||   ||   2106152  ||     |\n");
    printf("               |      ||    30  ||           PAWAR JAYRAM BHAGWAT         ||   E1   ||   ||   2106153  ||     |\n");
    printf("               |      ||        ||                                        ||        ||   ||            ||     |\n");
    printf("               |______||________||________________________________________||________||___||____________||_____|\n");
    printf("\n\n\n          ------------------------------------ Enter Your Choice --------------------------------------\n\n\n");                                          

    printf("                                                   1 for HOME Page\n");
    printf("                                                   2 for previous page : ");
    scanf("%d", &a);

    if(a==1){
        display();
    }
    else if(a==2){
        ENTC();
    }
    else{
        printf("                                         PLEASE ENTER A VALID NO.!!!!!!!!!!!!\n\n\n\n\n");
        E1();
    }

}
void J1(){
    int a;
    printf("                ______________________________________________________________________________________________\n");
    printf("               |      ||        ||                                        ||        ||   ||            ||     |\n");
    printf("               |      ||   SR   ||                 Name                   ||  Div   ||   ||  Enroll No ||     |\n");
    printf("               |---------------------------------------------------------------------------------------||     |\n");
    printf("               |      ||    1   ||           MANASWI DEEPAK MORE          ||   J1   ||   ||   2106154  ||     |\n");
    printf("               |      ||    2   ||           MANDLIK GAURI BALASAHEB      ||   J1   ||   ||   2106155  ||     |\n");
    printf("               |      ||    3   ||           MARNE SHRUTI GORAKH          ||   J1   ||   ||   2106156  ||     |\n");
    printf("               |      ||    4   ||           MARNE AYUSHA RAHUL           ||   J1   ||   ||   2106157  ||     |\n");
    printf("               |      ||    5   ||           MASKE SAHIL PARMESHWAR       ||   J1   ||   ||   2106158  ||     |\n");
    printf("               |      ||    6   ||           MERURKAR PRITI SANTOSH       ||   J1   ||   ||   2106159  ||     |\n");
    printf("               |      ||    7   ||           MOHARE VISHAL POPAT          ||   J1   ||   ||   2106600  ||     |\n");
    printf("               |      ||    8   ||           MORE JAGRUTI DHNYANESHWAR    ||   J1   ||   ||   2106161  ||     |\n");
    printf("               |      ||    9   ||           MORE SATEJ VILAS             ||   J1   ||   ||   2106162  ||     |\n");
    printf("               |      ||    10  ||           MORE SRUSHTI RAJENDRA        ||   J1   ||   ||   2106163  ||     |\n");
    printf("               |      ||    11  ||           MULUK MAYURESH TUKARAM       ||   J1   ||   ||   2106164  ||     |\n");
    printf("               |      ||    12  ||           NAGAWADE PUJA SOMNATH        ||   J1   ||   ||   2106165  ||     |\n");
    printf("               |      ||    13  ||           NAIK ADITYA ANIL             ||   J1   ||   ||   2106166  ||     |\n");
    printf("               |      ||    14  ||           NANDINI SAJAN KAKARNIYA      ||   J1   ||   ||   2106167  ||     |\n");
    printf("               |      ||    15  ||           NANGARE ATHARV RAJENDRA      ||   J1   ||   ||   2106168  ||     |\n");
    printf("               |      ||    16  ||           NEHA RAJKUMAR DIWAN          ||   J1   ||   ||   2106169  ||     |\n");
    printf("               |      ||    17  ||           NIGADE SHRAVANU PRAMOD       ||   J1   ||   ||   2106170  ||     |\n");
    printf("               |      ||    18  ||           NIKAM ADITI KRISHANT         ||   J1   ||   ||   2106171  ||     |\n");
    printf("               |      ||    19  ||           NISARGAN PREM SUNIL          ||   J1   ||   ||   2106172  ||     |\n");
    printf("               |      ||    20  ||           PADAR RUTUJA RAVINDRA        ||   J1   ||   ||   2106173  ||     |\n");
    printf("               |      ||    21  ||           PANSARE SHRAVANI JEEVAN      ||   J1   ||   ||   2106174  ||     |\n");
    printf("               |      ||    22  ||           PAPARKAR SUMIRAN SANJAY      ||   J1   ||   ||   2106175  ||     |\n");
    printf("               |      ||    23  ||           PARASE SUDARSHAN TANAJI      ||   J1   ||   ||   2106176  ||     |\n");
    printf("               |      ||    24  ||           PATHAK ADITYA VASANT         ||   J1   ||   ||   2106177  ||     |\n");
    printf("               |      ||    25  ||           PATIL BHOJRAJ DHARMENDRA     ||   J1   ||   ||   2106178  ||     |\n");
    printf("               |      ||    26  ||           PATIL VAISHNAVI SANJAY       ||   J1   ||   ||   2106179  ||     |\n");
    printf("               |      ||    27  ||           PATIL VAISHNAVI SANJIV       ||   J1   ||   ||   2106180  ||     |\n");
    printf("               |      ||    28  ||           PAWALE ROHAN SUNIL           ||   J1   ||   ||   2106181  ||     |\n");
    printf("               |      ||    29  ||           PAWAR GOURAVI SURESH         ||   J1   ||   ||   2106182  ||     |\n");
    printf("               |      ||    30  ||           PAWAR JAYRAM BHAGWAT         ||   J1   ||   ||   2106183  ||     |\n");
    printf("               |      ||        ||                                        ||        ||   ||            ||     |\n");
    printf("               |______||________||________________________________________||________||___||____________||_____|\n");
    printf("\n\n\n          ------------------------------------ Enter Your Choice --------------------------------------\n\n\n");                                          

    printf("                                                   1 for HOME Page\n");
    printf("                                                   2 for previous page : ");
    scanf("%d", &a);

    if(a==1){
        display();
    }
    else if(a==2){
        ENTC();
    }
    else{
        printf("                                         PLEASE ENTER A VALID NO.!!!!!!!!!!!!\n\n\n\n\n");
        J1();
    }

}


