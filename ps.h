// ---G.Rubino, 2014

/* PICOSIMULATOR, simplified version --- ps.h */

/* --- event structure */
typedef struct event_struct {
	double		Time;	/* event time */
	int		Class;	/* event type or class */
	struct event_struct *Next;
}		EVENT;

/* --- prototypes */
void		InsertEv  (EVENT *);
void		DeleteEv  (EVENT *);
void		FirstEv   (int *, double *);
void		InitEvList(double);
void      PrintEventList();

/* --- the event class "end" */
#define END_SIM 0

/* --- event allocation */
#define ALLOC_EV(ptr_ev) ptr_ev = (EVENT *) malloc(sizeof *ptr_ev);

/* --- event creation */
#define CREATE_EV(ev,c,t) ALLOC_EV(ev); ev->Class=c; ev->Time=t; ev->Next=NULL;
