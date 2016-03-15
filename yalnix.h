
/**
* Top-level kernal structures and functions.
* @author fg10, zz23
*/

#ifndef yalnix_h
#define yalnix_h

/* Process Control Block */
typedef struct PCB 
{
    unsigned int pid;  // Process ID

    int status;
     
    /* Hierachy Info */
    struct PCB* parent;
    Queue *children, *wait_child;

    struct pte* pt;
     
    /* CPU state */
    ExceptionStackFrame *es_frame;
    SavedContext saved_ctx;

    unsigned int clock_current, clock_delay; // 
 
} PCB;