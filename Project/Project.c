#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Build the Doctor
typedef struct{
    int id;
    char name[50];
    char specialization[100];
    char degree[10];
}Doctor;

//Build the Patient
typedef struct{
    int id;
    int age;
    char name[50];
    char address[100];
    char contact[15];
    char sex[2];
    int doctor_id;
}Patient;

//Define the Maximum Intake
#define MAX_PATIENT 300
#define MAX_DOCTOR 50

//Create the Field
Patient patient[MAX_PATIENT];
Doctor doctor[MAX_DOCTOR];
int patient_count = 0;
int doctor_count = 0;
//Function Prototype
void add_patient();
void display_patients();
void search_patient();
void add_doctor();
void display_doctors();
void assign_doctor();
void prescribed_bill();

void add_patient(){
    if(patient_count>=MAX_PATIENT){
        printf("Maximum Patient Reached");
        return;
    }
    printf("Enter Patient ID: ");
    scanf("%d",&patient[patient_count].id);

    printf("Enter Patient Name: ");
    scanf("%s",&patient[patient_count].name);

    printf("Enter Patient Age: ");
    scanf("%d",&patient[patient_count].age);

    printf("Enter Patient Address: ");
    scanf("%s",&patient[patient_count].address);

    printf("Enter Patient Contact: ");
    scanf("%s",&patient[patient_count].contact);

    printf("Enter Patient Sex: ");
    scanf("%s",&patient[patient_count].sex);

    printf("Enter Doctor ID for this Patient: ");
    scanf("%d",&patient[patient_count].doctor_id);

    patient_count++;
    printf("Patient Added Successfully");

}

void display_patients(){
    if(patient_count==0){
        printf("No Patients are found");
        return;
    }
    printf("------Patient Details------\n");
    printf("ID\tName\tAge\tAddress\tContact\tDoctor ID\n");
    for(int i=0;i<patient_count;i++){
        printf("%d\t%s\t%d\t%s\t%s\t%d\n",patient[i].id,patient[i].name,patient[i].age,patient[i].address,patient[i].contact,patient[i].doctor_id);
    }
    return;
}
void search_patient(){
    int id;
    printf("Enter Patient ID to Search: ");
    scanf("%d", &id);
    for(int i=0;i<patient_count;i++){
        if(patient[i].id == id){
            printf("ID\tName\tAge\tAddress\tContact\tDoctor ID\n");
            printf("%d\t%s\t%d\t%s\t%s\t%d\n",patient[i].id,patient[i].name,patient[i].age,patient[i].address,patient[i].contact,patient[i].doctor_id);
            return;
        }
    }
}
void add_doctor(){
    if(doctor_count>=MAX_DOCTOR){
        printf("Maximum Doctor Reached");
        return;
    }
    printf("Enter Doctor ID: ");
    scanf("%d",&doctor[doctor_count].id);

    printf("Enter Doctor Name: ");
    scanf("%s",&doctor[doctor_count].name);

    printf("Enter Doctor Specialization: ");
    scanf("%s",&doctor[doctor_count].specialization);

    printf("Enter Doctor Degree: ");
    scanf("%s",&doctor[doctor_count].degree);

    doctor_count++;
    printf("Doctor Added Succesfully");
}

void display_doctors(){
    if(doctor_count==0){
        printf("No Doctors are found");
        return;
    }
    printf("------Doctor Details------\n");
    printf("ID\tName\tSpecialization\tDegree\n\n");
    for(int i=0;i<doctor_count;i++){
        printf("%d\t%s\t%s\t%s\n",doctor[i].id,doctor[i].name,doctor[i].specialization,doctor[i].degree);
    }
}

void assign_doctor(){
    int patient_id, doctor_id;
    printf("Enter Patient ID to assign a doctor: ");
    scanf("%d", &patient_id);
    printf("Enter Doctor ID to assign: ");
    scanf("%d", &doctor_id);
    int patient_found = 0;
    int doctor_found = 0;
    for(int i=0;i<patient_count;i++){
        if(patient[i].id == patient_id){
            patient_found=1;
            for(int j=0;j<doctor_count;j++){
                if(doctor[j].id==doctor_id){
                    doctor_found=1;
                    patient[i].doctor_id = doctor_id;
                    return;
                }
            }
        }
    }
    if(patient_found==0){
        printf("Patient not Found.\n");
    }
    if(doctor_found==0){
        printf("Doctor not Found.\n");
    }
}

void prescribed_bill(){
    int patient_id;
    printf("Enter the Patient ID for Billing: ");
    scanf("%d", &patient_id);
    if(patient_count == 0) {
        printf("No Patients Found.\n");
        return;
    }
    for(int i=0;i<patient_count;i++){
        if(patient[i].id == patient_id){
            int consult_fee = 2000;
            printf("\n Bill for Patient ID %d is %d\n", patient[i].id, consult_fee);
            return;
        }
    }
}


int main(){
    //Representative
    int choice;
    while(1){
        printf("\n------Hospital Management System------\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Add Doctor\n");
        printf("5. Display Doctors\n");
        printf("6. Assign Doctor to Patient\n");
        printf("7. Prescribed Bill\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1: add_patient(); break;
            case 2: display_patients(); break;
            case 3: search_patient(); break;
            case 4: add_doctor(); break;
            case 5: display_doctors(); break;
            case 6: assign_doctor(); break;
            case 7: prescribed_bill(); break;
            case 8: exit(0);
            default: printf("Invalid Choice! Please try again.\n");
        }
    }
}