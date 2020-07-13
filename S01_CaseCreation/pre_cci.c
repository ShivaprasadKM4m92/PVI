# 1 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	
	lr_start_transaction("S01_01_OpenApplication");
	
	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("external", 
		"URL={URL_External}/external", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");
	
	web_concurrent_start(0);

	web_url("bootstrap-c5ae98cdc147f655f96564c4340000c4.css", 
		"URL={URL_External}/assets/bootstrap-c5ae98cdc147f655f96564c4340000c4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_External}/external", 
		"Snapshot=t11.inf", 
		"LAST");

	web_url("login-17e4cb116ee46711bb739b7018d00771.css", 
		"URL={URL_External}/assets/login-17e4cb116ee46711bb739b7018d00771.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_External}/external", 
		"Snapshot=t13.inf", 
		"LAST");

	
	web_url("bootstrap.min-79b5346433d3bdf736aab2379a008083.js", 
		"URL={URL_External}/assets/vendorUi/bootstrap/bootstrap.min-79b5346433d3bdf736aab2379a008083.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/external", 
		"Snapshot=t16.inf", 
		"LAST");

	web_url("notify.min-a1134657dba6e98914066f2530604e68.js", 
		"URL={URL_External}/assets/vendorUi/notifyjs/dist/notify.min-a1134657dba6e98914066f2530604e68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/external", 
		"Snapshot=t17.inf", 
		"LAST");

	web_url("notify-metro-3463085bfd0a7cac9f983d075b271bca.js", 
		"URL={URL_External}/assets/vendorUi/notifications/notify-metro-3463085bfd0a7cac9f983d075b271bca.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/external", 
		"Snapshot=t18.inf", 
		"LAST");

	web_url("jquery.core-2521768e514d3a431ddca828a1bebd3c.js", 
		"URL={URL_External}/assets/common/jquery.core-2521768e514d3a431ddca828a1bebd3c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/external", 
		"Snapshot=t19.inf", 
		"LAST");

	web_url("jquery-fdb24ba38c94d04e948de967076c64aa.js", 
		"URL={URL_External}/assets/vendorUi/jquery/jquery-fdb24ba38c94d04e948de967076c64aa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/external", 
		"Snapshot=t20.inf", 
		"LAST");

	web_concurrent_end(0);

		
	lr_end_transaction("S01_01_OpenApplication",2);

	lr_think_time(3);

	
	lr_start_transaction("S01_02_Login");

	web_reg_find("Search=Body",
		"Text=Welcome to PV Admin",
		"LAST");

	web_submit_data("authenticate", 
		"Action={URL_External}/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL_External}/external", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=username", "Value={UserName}", "ENDITEM", 
		"Name=password", "Value={Password}", "ENDITEM", 
		"Name=callBackUrl", "Value=/", "ENDITEM", 
		"LAST");

	web_concurrent_start(0);

	web_url("change-theme-d6b58272d1305acd108c19d477017de0.js", 
		"URL={URL_External}/assets/common/change-theme-d6b58272d1305acd108c19d477017de0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/", 
		"Snapshot=t38.inf", 
		"LAST");

	web_url("application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"URL={URL_External}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_External}/", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("jquery-2.2.4-f3b292379cbb03d9a68dc04fb0ac6bf5.js", 
		"URL={URL_External}/assets/vendorUi/jquery/jquery-2.2.4-f3b292379cbb03d9a68dc04fb0ac6bf5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("UIConstants-e05f20031f3c986ffd86b552402112e0.js", 
		"URL={URL_External}/assets/UIConstants-e05f20031f3c986ffd86b552402112e0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/", 
		"Snapshot=t41.inf", 
		"LAST");

	

	web_url("loadTheme", 
		"URL={URL_External}/preference/loadTheme", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_External}/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2", 
		"URL={URL_External}/assets/OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_External}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("application-14170135eceb1a9ce6feedb51cdc6745.js", 
		"URL={URL_External}/assets/application-14170135eceb1a9ce6feedb51cdc6745.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_External}/", 
		"Snapshot=t44.inf", 
		"LAST");

 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL_External}/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_External}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2", 
		"URL={URL_External}/assets/materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2?v=2.1.99", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_External}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t46.inf", 
		"LAST");

 

	web_url("en.json", 
		"URL={URL_External}/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_External}/", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	lr_end_transaction("S01_02_Login",2);

	lr_think_time(3);

	lr_start_transaction("S01_03_Navigate_PVI");

	web_reg_find("Search=Body",
		"Text=PV Intake",
		"LAST");

	web_url("10.100.22.228:8081", 
		"URL={URL_PVI}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_External}/", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("dashboard-manifest-b8c4a5998dad68d4595e4d0aa8d50016.css", 
		"URL={URL_PVI}/assets/app/dashboard/dashboard-manifest-b8c4a5998dad68d4595e4d0aa8d50016.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_PVI}/", 
		"Snapshot=t51.inf", 
		"LAST");

	web_url("change-theme-6ebd5f05979bc64dfe2d6f10b3e3b3db.js", 
		"URL={URL_PVI}/assets/common/change-theme-6ebd5f05979bc64dfe2d6f10b3e3b3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/", 
		"Snapshot=t52.inf", 
		"LAST");

	web_url("jquery-2.2.4-e72e6e97da5fd952079c33c415741fc6.js", 
		"URL={URL_PVI}/assets/vendorUi/jquery/jquery-2.2.4-e72e6e97da5fd952079c33c415741fc6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/", 
		"Snapshot=t53.inf", 
		"LAST");

	web_url("application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"URL={URL_PVI}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_PVI}/", 
		"Snapshot=t54.inf", 
		"LAST");

	web_url("UIConstants-ee3587ab40d47b8bed173814ecf5a0be.js", 
		"URL={URL_PVI}/assets/UIConstants-ee3587ab40d47b8bed173814ecf5a0be.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/", 
		"Snapshot=t55.inf", 
		"LAST");

	web_url("application-762c12a54eb6dcdb8387326502049900.js", 
		"URL={URL_PVI}/assets/application-762c12a54eb6dcdb8387326502049900.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/", 
		"Snapshot=t56.inf", 
		"LAST");

 

	web_url("loadTheme_2", 
		"URL={URL_PVI}/preference/loadTheme", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("attachmentViewer-manifest-e567905628ad845bff03c7d191846db5.js", 
		"URL={URL_PVI}/assets/vendor/attachmentViewer-manifest-e567905628ad845bff03c7d191846db5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("dashboard-manifest-341004fa249db2aaf456b8b3f9116380.js", 
		"URL={URL_PVI}/assets/app/dashboard/dashboard-manifest-341004fa249db2aaf456b8b3f9116380.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("appConfig", 
		"URL={URL_PVI}/config/appConfig", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2_2", 
		"URL={URL_PVI}/assets/OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_PVI}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("loadAllState", 
		"URL={URL_PVI}/user/loadAllState?pageType=&section=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2_2", 
		"URL={URL_PVI}/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_PVI}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t63.inf", 
		"LAST");

	web_url("loadServerTime", 
		"URL={URL_PVI}/config/loadServerTime?_=1594639551159", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2_2", 
		"URL={URL_PVI}/assets/materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2?v=2.1.99", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_PVI}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t65.inf", 
		"LAST");

	web_url("referenceData", 
		"URL={URL_PVI}/task/referenceData?_=1594639551158", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t66.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("personalStats", 
		"URL={URL_PVI}/dashboard/personalStats?_=1594639551160", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL_PVI}/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL_PVI}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t68.inf", 
		"LAST");

	web_url("en-US.json", 
		"URL={URL_PVI}/assets/vendor/documentViewerJson/en-US.json?_=1594639551163", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("1", 
		"URL={URL_PVI}/case/rest/list_columns/1?_=1594639551162", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t70.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("predefinedSearch.json", 
		"URL={URL_PVI}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1594639551164", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("2", 
		"URL={URL_PVI}/case/rest/list_columns/2?_=1594639551161", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReason.json", 
		"URL={URL_PVI}/assets/vendor/documentViewerJson/redactionReason.json?_=1594639551165", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("commentTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1594639551166", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("copyOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1594639551168", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("downloadOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1594639551169", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("contextMenuTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1594639551167", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("esignOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1594639551170", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hyperlinkMenuTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1594639551171", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("imageStampOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1594639551172", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("overwriteOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1594639551173", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("pageRedactionOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1594639551174", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1594639551175", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		"LAST");

	web_submit_data("loadState", 
		"Action={URL_PVI}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=pageType", "Value=case_list_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_url("redactionReasonTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1594639551177", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1594639551176", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("unsavedChangesOverlayTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1594639551178", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewerTemplate.html", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1594639551179", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		"LAST");

	web_submit_data("updateWidget", 
		"Action={URL_PVI}/dashboard/updateWidget", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=items", "Value=[\n    {\n        \"id\": \"3657\",\n        \"x\": 0,\n        \"y\": 0,\n        \"width\": 3,\n        \"height\": 3\n    },\n    {\n        \"id\": \"3658\",\n        \"x\": 3,\n        \"y\": 0,\n        \"width\": 9,\n        \"height\": 3\n    },\n    {\n        \"id\": \"3659\",\n        \"x\": 0,\n        \"y\": 3,\n        \"width\": 12,\n        \"height\": 7\n    },\n    {\n        \"id\": \"3660\",\n        \"x\": 0,\n        \"y\": 10,\n        \"width\": 12,\n   "
		"     \"height\": 7\n    }\n]", "ENDITEM", 
		"LAST");

	web_submit_data("loadState_2", 
		"Action={URL_PVI}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_submit_data("updateWidget_2", 
		"Action={URL_PVI}/dashboard/updateWidget", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=items", "Value=[\n    {\n        \"id\": \"3657\",\n        \"x\": 0,\n        \"y\": 0,\n        \"width\": 3,\n        \"height\": 3\n    },\n    {\n        \"id\": \"3658\",\n        \"x\": 3,\n        \"y\": 0,\n        \"width\": 9,\n        \"height\": 3\n    },\n    {\n        \"id\": \"3659\",\n        \"x\": 0,\n        \"y\": 3,\n        \"width\": 12,\n        \"height\": 7\n    },\n    {\n        \"id\": \"3660\",\n        \"x\": 0,\n        \"y\": 10,\n        \"width\": 12,\n   "
		"     \"height\": 7\n    }\n]", "ENDITEM", 
		"LAST");
	
	web_concurrent_end(0);

	web_submit_data("1_2", 
		"Action={URL_PVI}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[2][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[3][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[5][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=products", "ENDITEM", 
		"Name=columns[6][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=events", "ENDITEM", 
		"Name=columns[7][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[9][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[10][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[11][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value={UserName}", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=priority", "ENDITEM", 
		"Name=columns[13][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[14][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[15][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[16][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[17][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[18][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=gender", "ENDITEM", 
		"Name=columns[19][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=destination", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[21][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[23][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[24][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[25][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[26][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[30][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[31][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[32][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[33][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[34][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[35][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=categories", "ENDITEM", 
		"Name=columns[36][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=productName", "ENDITEM", 
		"Name=columns[37][name]", "Value=productName", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=substances", "ENDITEM", 
		"Name=columns[38][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[39][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={ \"firstReceiptDate\" : \"{\\\"gte\\\":\\\"2020-04-14T00:00:00Z\\\",\\\"lte\\\":\\\"2020-07-12T23:59:59Z\\\"}\", \"caseStateId\" : \"2,3,4,6\", \"sourceDbId\" : \"1\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=3", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=5", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("2_2", 
		"Action={URL_PVI}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value={UserName}", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2020-04-14T00:00:00Z\\\",\\\"lte\\\":\\\"2020-07-12T23:59:59Z\\\"}\",\"caseStateId\":\"1,2\",\"sourceDbId\":\"1\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=5", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_url("casePrioritySelect.hbs", 
		"URL={URL_PVI}/assets/common/hbs-templates/casePrioritySelect.hbs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewAction.hbs", 
		"URL={URL_PVI}/assets/common/hbs-templates/viewAction.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/", 
		"Snapshot=t95.inf", 
		"LAST");

	web_url("getActionViewList", 
		"URL={URL_PVI}/case/getActionViewList?pageId=2&sourceDbId=1&_=1594639551180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_03_Navigate_PVI",2);

	lr_think_time(3);

	lr_start_transaction("S01_03_Click_NewCase");

	web_url("index", 
		"URL={URL_PVI}/caseEntry/index?templateId=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("case-entry-manifest-0691008e616302be087a77f0c4f6bc2a.css", 
		"URL={URL_PVI}/assets/app/case-entry/case-entry-manifest-0691008e616302be087a77f0c4f6bc2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t98.inf", 
		"LAST");

	web_url("attachmentViewer-manifest-d21cd5ef9afc9d23b8e3146c7832bb09.css", 
		"URL={URL_PVI}/assets/vendor/documentViewer/attachmentViewer-manifest-d21cd5ef9afc9d23b8e3146c7832bb09.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t99.inf", 
		"LAST");

	web_url("case-entry-manifest-1f6053504a6aa6832023b0604d43e51e.js", 
		"URL={URL_PVI}/assets/app/case-entry/case-entry-manifest-1f6053504a6aa6832023b0604d43e51e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t100.inf", 
		"LAST");

 

	web_url("en-US.json_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerJson/en-US.json?_=1594639576705", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("predefinedSearch.json_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1594639576706", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("commentTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1594639576708", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("downloadOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1594639576711", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("contextMenuTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1594639576709", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hyperlinkMenuTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1594639576713", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("esignOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1594639576712", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("imageStampOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1594639576714", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("overwriteOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1594639576715", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReason.json_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerJson/redactionReason.json?_=1594639576707", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReasonTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1594639576719", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1594639576717", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1594639576718", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("pageRedactionOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1594639576716", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("unsavedChangesOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1594639576720", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewerTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1594639576721", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fetchReferenceData", 
		"URL={URL_PVI}/caseEntry/fetchReferenceData?_=1594639576722", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("copyOverlayTemplate.html_2", 
		"URL={URL_PVI}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1594639576710", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		"LAST");

 

	web_url("product_template.hbs", 
		"URL={URL_PVI}/assets/pv/comp/templates/product_template.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t119.inf", 
		"LAST");

	web_url("product_browser.hbs", 
		"URL={URL_PVI}/assets/pv/comp/templates/product_browser.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t120.inf", 
		"LAST");

	web_url("meddra_template.hbs", 
		"URL={URL_PVI}/assets/pv/comp/templates/meddra_template.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t121.inf", 
		"LAST");

	web_url("meddra_browser.hbs", 
		"URL={URL_PVI}/assets/pv/comp/templates/meddra_browser.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("study_template.hbs", 
		"URL={URL_PVI}/assets/pv/comp/templates/study_template.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("study_browser.hbs", 
		"URL={URL_PVI}/assets/pv/comp/templates/study_browser.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t124.inf", 
		"LAST");

 

	web_url("casePrioritySelect.hbs_2", 
		"URL={URL_PVI}/assets/common/hbs-templates/casePrioritySelect.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t125.inf", 
		"LAST");

	web_url("loadServerTime_2", 
		"URL={URL_PVI}/config/loadServerTime?_=1594639576723", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getIngredients", 
		"URL={URL_PVI}/getIngredients?mapOfIds=%7B%7D&isSpecialField=false&_=1594639576724", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fetchAllUser", 
		"URL={URL_PVI}/user/fetchAllUser?_=1594639576725", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("referenceData_2", 
		"URL={URL_PVI}/task/referenceData?_=1594639576726", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("referenceData_3", 
		"URL={URL_PVI}/followUpQueryFrontEnd/referenceData?_=1594639576727", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("taskListForCase", 
		"URL={URL_PVI}/task/taskListForCase", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"draw\":1,\"columns\":[{\"data\":\"taskIndex\",\"name\":\"taskIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskTypeId\",\"name\":\"taskTypeId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"assignedToId\",\"name\":\"assignedToId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"description\",\"name\":\"description\",\"searchable\""
		":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dueDate\",\"name\":\"dueDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"completionDate\",\"name\":\"completionDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"priorityId\",\"name\":\"priorityId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"status\",\"name\""
		":\"status\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"createdByUserId\",\"name\":\"createdByUserId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateCreated\",\"name\":\"dateCreated\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\""
		"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskAction\",\"name\":\"taskAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n                                    N/A\\n                                \",\"searchCriteria\":{\""
		"rangeList\":[]}}", 
		"LAST");

	web_custom_request("fuqListForCase", 
		"URL={URL_PVI}/fuq/fuqListForCase", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"draw\":1,\"columns\":[{\"data\":\"fuqIndex\",\"name\":\"fuqIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentTo\",\"name\":\"sentTo\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"methodId\",\"name\":\"methodId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"subject\",\"name\":\"subject\",\"searchable\":true,\"orderable\":false,\""
		"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateSent\",\"name\":\"dateSent\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentBy\",\"name\":\"sentBy\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"comments\",\"name\":\"comments\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateClosed\",\"name\":\"dateClosed\",\"searchable\":true,\""
		"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"fuqAction\",\"name\":\"fuqAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,"
		"\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n                                    N/A\\n                                \",\"searchCriteria\":{\"rangeList\":[]}}", 
		"LAST");

	web_url("viewAction.hbs_2", 
		"URL={URL_PVI}/assets/common/hbs-templates/viewAction.hbs", 
		"Resource=1", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t133.inf", 
		"LAST");

	web_url("getActionViewList_2", 
		"URL={URL_PVI}/case/getActionViewList?pageId=3&templateId=2&sourceDbId=1&_=1594639576728", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fetchAllTemplates", 
		"URL={URL_PVI}/caseEntry/fetchAllTemplates?templateId=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	lr_end_transaction("S01_03_Click_NewCase",2);

	lr_think_time(3);

	lr_start_transaction("S01_04_Enter_GeneralDetails");

	lr_end_transaction("S01_04_Enter_GeneralDetails",2);

	lr_think_time(3);

	lr_start_transaction("S01_05_Enter_ReporterDetails");

	lr_end_transaction("S01_05_Enter_ReporterDetails",2);

	lr_think_time(3);

	lr_start_transaction("S01_06_Add_Product1");

	web_url("searchData", 
		"URL={URL_PVI}/PVBRest/searchData?browserType=product&search_field=licenses.value&search_value=Rx+&_=1594639576729", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_06_Add_Product1",2);

	lr_think_time(3);

	lr_start_transaction("S01_07_Add_Product2");

	web_url("searchData_2", 
		"URL={URL_PVI}/PVBRest/searchData?browserType=product&search_field=licenses.value&search_value=Rx+&_=1594639576730", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		"LAST");


	lr_end_transaction("S01_07_Add_Product2",2);

	lr_think_time(3);

	lr_start_transaction("S01_08_Add_Product3");

	web_url("searchData_3", 
		"URL={URL_PVI}/PVBRest/searchData?browserType=product&search_field=licenses.value&search_value=Rx+&_=1594639576731", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_08_Add_Product3",2);

	lr_think_time(3);

	
	lr_start_transaction("S01_09_Add_Product4");

	web_url("searchData_4", 
		"URL={URL_PVI}/PVBRest/searchData?browserType=product&search_field=licenses.value&search_value=Rx+&_=1594639576732", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_09_Add_Product4",2);

	lr_think_time(3);

	lr_start_transaction("S01_10_Add_Product5");

	web_url("searchData_5", 
		"URL={URL_PVI}/PVBRest/searchData?browserType=product&search_field=licenses.value&search_value=Rx+&_=1594639576733", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_10_Add_Product5",2);

	lr_think_time(3);

	lr_start_transaction("S01_12_Add_Event1");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_4", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=Fever+&_=1594639576737", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_12_Add_Event1",2);

	lr_think_time(3);

	lr_start_transaction("S01_13_Add_Event2");
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_6", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=Cold+&_=1594639576739", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_13_Add_Event2",2);

	lr_think_time(3);

	lr_start_transaction("S01_14_Add_Event3");
	
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_8", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=cough&_=1594639576740", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		"LAST");
	
	lr_end_transaction("S01_14_Add_Event3",2);

	lr_think_time(3);

	lr_start_transaction("S01_15_Add_Event4");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_12", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=headache&_=1594639576745", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		"LAST");
	
	lr_end_transaction("S01_15_Add_Event4",2);

	lr_think_time(3);

	lr_start_transaction("S01_16_Add_Event5");

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_17", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=typhoid&_=1594639576750", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		"LAST");

		

	lr_end_transaction("S01_16_Add_Event5",2);

	lr_think_time(3);

	lr_start_transaction("S01_17_Add_Test1");

	web_url("searchMedDRAs_18", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=abd&_=1594639576751", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_17_Add_Test1",2);

	lr_think_time(3);

	lr_start_transaction("S01_18_Add_Test2");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_21", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=abd&_=1594639576754", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_18_Add_Test2",2);

	lr_think_time(3);

	lr_start_transaction("S01_19_Add_Test3");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_24", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=adb&_=1594639576757", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_19_Add_Test3",2);

	lr_think_time(3);

	lr_start_transaction("S01_20_Add_Test4");

	web_url("searchMedDRAs_25", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=den&_=1594639576758", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_20_Add_Test4",2);

	lr_think_time(3);

	lr_start_transaction("S01_21_Add_Test5");

	web_url("searchMedDRAs_26", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=den&_=1594639576759", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_21_Add_Test5",2);

	lr_think_time(3);

	lr_start_transaction("S01_22_Add_Test6");

	web_url("searchMedDRAs_27", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=Den&_=1594639576760", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_22_Add_Test6",2);

	lr_think_time(3);

	lr_start_transaction("S01_22_Add_Test6");

	web_url("searchMedDRAs_31", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=dia&_=1594639576772", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_22_Add_Test6",2);

	lr_think_time(3);

	lr_start_transaction("S01_23_Add_Test7");

	web_url("searchMedDRAs_32", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=Dia&_=1594639576773", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_23_Add_Test7",2);

	lr_think_time(3);

	lr_start_transaction("S01_24_Add_Test8");

	web_url("searchMedDRAs_33", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=hyp&_=1594639576774", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_24_Add_Test8",2);

	lr_think_time(3);

	lr_start_transaction("S01_25_Add_Test9");

 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_35", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=hyper&_=1594639576776", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_25_Add_Test9",2);

	lr_think_time(3);

	lr_start_transaction("S01_26_Add_Test10");

	web_url("searchMedDRAs_36", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=Hypo&_=1594639576777", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_26_Add_Test10",2);

	lr_think_time(3);

	lr_start_transaction("S01_27_Add_Test11");

	web_url("searchMedDRAs_37", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=Hypo&_=1594639576778", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_27_Add_Test11",2);

	lr_think_time(3);

	lr_start_transaction("S01_28_Add_Test12");

	web_url("searchMedDRAs_38", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=tho&_=1594639576779", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_28_Add_Test12",2);

	lr_think_time(3);

	lr_start_transaction("S01_29_Add_Test13");

	web_url("searchMedDRAs_39", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=tho&_=1594639576780", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_29_Add_Test13",2);

	lr_think_time(3);

	lr_start_transaction("S01_30_Add_Test14");

 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_41", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=poli&_=1594639576782", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_30_Add_Test14",2);

	lr_think_time(3);

	lr_start_transaction("S01_31_Add_Test15");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_44", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=poli&_=1594639576785", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_31_Add_Test15",2);

	lr_think_time(3);

	lr_start_transaction("S01_32_Add_Test16");

	web_url("searchMedDRAs_45", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=hea&_=1594639576786", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_32_Add_Test16",2);

	lr_think_time(3);

	lr_start_transaction("S01_33_Add_Test17");

	web_url("searchMedDRAs_46", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=head&_=1594639576787", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_33_Add_Test17",2);

	lr_think_time(3);

	lr_start_transaction("S01_34_Add_Test18");

	web_url("searchMedDRAs_47", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=head&_=1594639576788", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_34_Add_Test18",2);

	lr_think_time(3);

	lr_start_transaction("S01_35_Add_Test19");

 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_49", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=eye&_=1594639576790", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_35_Add_Test19",2);

	lr_think_time(3);

	lr_start_transaction("S01_36_Add_Test20");

	web_url("searchMedDRAs_50", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=eye&_=1594639576791", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_36_Add_Test20",2);

	lr_think_time(3);

	lr_start_transaction("S01_37_Navigate_Summary");

	lr_end_transaction("S01_37_Navigate_Summary",2);

	lr_think_time(3);

	lr_start_transaction("S01_38_Navigate_Patient");

	lr_end_transaction("S01_38_Navigate_Patient",2);

	lr_think_time(3);

	lr_start_transaction("S01_39_Add_MedicalHistory1");

	web_url("searchMedDRAs_53", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=adb&_=1594639576794", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_39_Add_MedicalHistory1",2);

	lr_think_time(3);

	lr_start_transaction("S01_40_Add_MedicalHistory2");

	web_url("searchMedDRAs_54", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=abd&_=1594639576795", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_40_Add_MedicalHistory2",2);

	lr_think_time(3);

	lr_start_transaction("S01_41_Add_MedicalHistory3");

	web_url("searchMedDRAs_55", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=abd&_=1594639576796", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_41_Add_MedicalHistory3",2);

	lr_think_time(3);

	lr_start_transaction("S01_42_Add_MedicalHistory4");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_58", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=fever&_=1594639576799", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_42_Add_MedicalHistory4",2);

	lr_think_time(3);

	lr_start_transaction("S01_43_Add_MedicalHistory5");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("searchMedDRAs_63", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=fever&_=1594639576804", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_43_Add_MedicalHistory5",2);

	lr_think_time(3);

	lr_start_transaction("S01_44_Add_MedicalHistory6");


	web_url("searchMedDRAs_64", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=cold&_=1594639576805", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		"LAST");


	lr_end_transaction("S01_44_Add_MedicalHistory6",2);

	lr_think_time(3);

	lr_start_transaction("S01_45_Add_MedicalHistory7");

	web_url("searchMedDRAs_65", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=head&_=1594639576806", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_45_Add_MedicalHistory7",2);

	lr_think_time(3);

	lr_start_transaction("S01_46_Add_MedicalHistory8");

	web_url("searchMedDRAs_66", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=head&_=1594639576807", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_46_Add_MedicalHistory8",2);

	lr_think_time(3);

	lr_start_transaction("S01_47_Add_MedicalHistory9");

	web_url("searchMedDRAs_67", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=cold&_=1594639576808", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_47_Add_MedicalHistory9",2);

	lr_think_time(3);

	lr_start_transaction("S01_48_Add_MedicalHistory10");

	web_url("searchMedDRAs_68", 
		"URL={URL_PVI}/PVBRest/searchMedDRAs?browserType=meddra&search_field=llt&search_value=cold&_=1594639576809", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_48_Add_MedicalHistory10",2);

	lr_think_time(3);

	lr_start_transaction("S01_49_Click_Create");

	web_reg_find("Search=Body",
		"Text=created successfully",
		"LAST");

	web_submit_data("save", 
		"Action={URL_PVI}/caseEntry/save", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/index?templateId=2", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=id", "Value=", "ENDITEM", 
		"Name=priorityJustification", "Value=", "ENDITEM", 
		"Name=templateId", "Value=2", "ENDITEM", 
		"Name=showAllAccordion", "Value=false", "ENDITEM", 
		"Name=isDiffViewMode", "Value=false", "ENDITEM", 
		"Name=lastSequenceNumber", "Value=123", "ENDITEM", 
		"Name=medDraHierarchyMap", "Value={\"eventReportedReaction-15\":{\"lltcode\":\"10049362\",\"isUpdated\":true},\"eventReportedReaction-42\":{\"lltcode\":\"10009867\",\"isUpdated\":true},\"eventReportedReaction-43\":{\"lltcode\":\"10073576\",\"isUpdated\":true},\"eventReportedReaction-44\":{\"lltcode\":\"10019215\",\"isUpdated\":true},\"eventReportedReaction-45\":{\"lltcode\":\"10045275\",\"isUpdated\":true},\"testName-16\":{\"lltcode\":\"10000039\",\"isUpdated\":true},\"testName-46\":{\"lltcode\":\""
		"10000041\",\"isUpdated\":true},\"testName-49\":{\"lltcode\":\"10059365\",\"isUpdated\":true},\"testName-52\":{\"lltcode\":\"10012310\",\"isUpdated\":true},\"testName-55\":{\"lltcode\":\"10012313\",\"isUpdated\":true},\"testName-58\":{\"lltcode\":\"\",\"isUpdated\":true},\"testName-64\":{\"lltcode\":\"\",\"isUpdated\":true},\"testName-61\":{\"lltcode\":\"\",\"isUpdated\":true},\"testName-67\":{\"lltcode\":\"\",\"isUpdated\":true},\"testName-70\":{\"lltcode\":\"10012601\",\"isUpdated\":true},\""
		"testName-73\":{\"lltcode\":\"10012603\",\"isUpdated\":true},\"testName-76\":{\"lltcode\":\"10065987\",\"isUpdated\":true},\"testName-79\":{\"lltcode\":\"10069944\",\"isUpdated\":true},\"testName-82\":{\"lltcode\":\"10020942\",\"isUpdated\":true},\"testName-85\":{\"lltcode\":\"10020934\",\"isUpdated\":true},\"testName-88\":{\"lltcode\":\"10053975\",\"isUpdated\":true},\"testName-91\":{\"lltcode\":\"10043460\",\"isUpdated\":true},\"testName-94\":{\"lltcode\":\"10036009\",\"isUpdated\":true},\""
		"testName-97\":{\"lltcode\":\"10036010\",\"isUpdated\":true},\"testName-100\":{\"lltcode\":\"10057871\",\"isUpdated\":true},\"testName-103\":{\"lltcode\":\"10019208\",\"isUpdated\":true},\"testName-106\":{\"lltcode\":\"10077191\",\"isUpdated\":true},\"testName-109\":{\"lltcode\":\"10015903\",\"isUpdated\":true},\"testName-112\":{\"lltcode\":\"10015906\",\"isUpdated\":true},\"patientMedicalHistory-7\":{\"lltcode\":\"10059365\",\"isUpdated\":true},\"patientMedicalHistory-115\":{\"lltcode\":\""
		"10000041\",\"isUpdated\":true},\"patientMedicalHistory-116\":{\"lltcode\":\"10000045\",\"isUpdated\":true},\"patientMedicalHistory-117\":{\"lltcode\":\"10016559\",\"isUpdated\":true},\"patientMedicalHistory-118\":{\"lltcode\":\"10016562\",\"isUpdated\":true},\"patientMedicalHistory-119\":{\"lltcode\":\"10009867\",\"isUpdated\":true},\"patientMedicalHistory-120\":{\"lltcode\":\"10019206\",\"isUpdated\":true},\"patientMedicalHistory-121\":{\"lltcode\":\"10057870\",\"isUpdated\":true},\""
		"patientMedicalHistory-122\":{\"lltcode\":\"10065228\",\"isUpdated\":true},\"patientMedicalHistory-123\":{\"lltcode\":\"10009855\",\"isUpdated\":true}}", "ENDITEM", 
		"Name=priority.id", "Value=", "ENDITEM", 
		"Name=safetyData.sourceType.id", "Value=3", "ENDITEM", 
		"Name=safetyData.classifications.id", "Value=56", "ENDITEM", 
		"Name=safetyData.receiptDate", "Value=12-Jul-2020", "ENDITEM", 
		"Name=safetyData.mostRecentReceiptDate", "Value=12-Jul-2020", "ENDITEM", 
		"Name=safetyData.centralReceiptDate", "Value=12-Jul-2020", "ENDITEM", 
		"Name=safetyData.customProperty.customDateField", "Value=12-Jul-2020", "ENDITEM", 
		"Name=caseCountry.id", "Value=99", "ENDITEM", 
		"Name=vendor.id", "Value=4461490", "ENDITEM", 
		"Name=safetyData.senderType.id", "Value=", "ENDITEM", 
		"Name=safetyData.senderName", "Value=", "ENDITEM", 
		"Name=safetyData.senderEmail", "Value=", "ENDITEM", 
		"Name=dueDate", "Value=", "ENDITEM", 
		"Name=dueDateJustification", "Value=", "ENDITEM", 
		"Name=dueDateManual", "Value=", "ENDITEM", 
		"Name=safetyData.localSubmissionDueDate", "Value=", "ENDITEM", 
		"Name=safetyData.localSubmissionDate", "Value=", "ENDITEM", 
		"Name=versionComment", "Value=", "ENDITEM", 
		"Name=assignee.id", "Value=7350555", "ENDITEM", 
		"Name=_safetyData.customProperty.nonInterventional", "Value=", "ENDITEM", 
		"Name=safetyData.references[0].referenceType.id", "Value=", "ENDITEM", 
		"Name=safetyData.references[0].internalRowId", "Value=2", "ENDITEM", 
		"Name=safetyData.references[0].id", "Value=", "ENDITEM", 
		"Name=safetyData.references[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.study.number", "Value=", "ENDITEM", 
		"Name=safetyData.study.id", "Value=", "ENDITEM", 
		"Name=safetyData.study.studyType.id", "Value=", "ENDITEM", 
		"Name=safetyData.study.name", "Value=", "ENDITEM", 
		"Name=safetyData.study.registrations[0].number", "Value=", "ENDITEM", 
		"Name=safetyData.study.registrations[0].internalRowId", "Value=3", "ENDITEM", 
		"Name=safetyData.study.registrations[0].country.id", "Value=", "ENDITEM", 
		"Name=safetyData.study.registrations[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.reporters[0].title", "Value=Reporter1", "ENDITEM", 
		"Name=safetyData.reporters[0].internalRowId", "Value=4", "ENDITEM", 
		"Name=safetyData.reporters[0].givenName", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].middleName", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].familyName", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].organization", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].department", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].street", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].city", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].state", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].postcode", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].telephone", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].faxNumber", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].email", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].country.id", "Value=99", "ENDITEM", 
		"Name=safetyData.reporters[0].qualification.id", "Value=4", "ENDITEM", 
		"Name=safetyData.reporters[0].contactTypes.id", "Value=2002", "ENDITEM", 
		"Name=safetyData.reporters[0].consentToDisclosePII.id", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].consentForFU.id", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].deleted", "Value=false", "ENDITEM", 
		"Name=_safetyData.reporters[0].primary", "Value=", "ENDITEM", 
		"Name=safetyData.reporters[0].primary", "Value=true", "ENDITEM", 
		"Name=safetyData.literatures[0].author", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].internalRowId", "Value=5", "ENDITEM", 
		"Name=safetyData.literatures[0].title", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].journal", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].year", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].vol", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].pages", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].literatureArticle.filePath", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].literatureArticle.id", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].literatureArticle.fileName", "Value=", "ENDITEM", 
		"Name=safetyData.literatures[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.name", "Value=pat001", "ENDITEM", 
		"Name=safetyData.patient.patientId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.age.value", "Value=50 Years", "ENDITEM", 
		"Name=safetyData.patient.age.id", "Value=5", "ENDITEM", 
		"Name=safetyData.patient.age.ageType", "Value=PATIENT_ON_SET_AGE", "ENDITEM", 
		"Name=safetyData.patient.gender.id", "Value=1", "ENDITEM", 
		"Name=safetyData.patient.lmpDate.value", "Value=12-Jul-2020", "ENDITEM", 
		"Name=safetyData.patient.lmpDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.weight", "Value=50", "ENDITEM", 
		"Name=safetyData.patient.weightUnit.id", "Value=44", "ENDITEM", 
		"Name=safetyData.patient.height", "Value=100", "ENDITEM", 
		"Name=safetyData.patient.heightUnit.id", "Value=46", "ENDITEM", 
		"Name=safetyData.patient.customProperty.patientCountry", "Value=", "ENDITEM", 
		"Name=safetyData.patient.customProperty.patientEthnicity", "Value=", "ENDITEM", 
		"Name=safetyData.patient.gpRecordNumber", "Value=50", "ENDITEM", 
		"Name=safetyData.patient.specialistRecordNumber", "Value=50", "ENDITEM", 
		"Name=safetyData.patient.hospitalRecordNumber", "Value=50", "ENDITEM", 
		"Name=_safetyData.patient.concomitantTherapies", "Value=", "ENDITEM", 
		"Name=safetyData.patient.additionalRelevantMedicalHistory", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.autopsyDone", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].causeType.id", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].internalRowId", "Value=6", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.deathDetail.deathCauses[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].medicalHistory.reactionCoded", "Value=Politano-Leadbetter procedure", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].medicalHistory.lltCode", "Value=10059365", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].medicalHistory.codedWithSearchString", "Value=adb", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].medicalHistory.reportedReaction", "Value=adb", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].internalRowId", "Value=7", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[0].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].comments", "Value=Test1", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].medicalHistory.reactionCoded", "Value=Abdo. bloating", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].medicalHistory.lltCode", "Value=10000041", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].medicalHistory.codedWithSearchString", "Value=abd", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].medicalHistory.reportedReaction", "Value=abd", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].internalRowId", "Value=115", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[1].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[1].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].medicalHistory.reactionCoded", "Value=Abdomen enlarged", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].medicalHistory.lltCode", "Value=10000045", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].medicalHistory.codedWithSearchString", "Value=abd", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].medicalHistory.reportedReaction", "Value=abd", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].internalRowId", "Value=116", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[2].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[2].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].medicalHistory.reactionCoded", "Value=Fever chills", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].medicalHistory.lltCode", "Value=10016559", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].medicalHistory.codedWithSearchString", "Value=fever", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].medicalHistory.reportedReaction", "Value=fever", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].internalRowId", "Value=117", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[3].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[3].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].medicalHistory.reactionCoded", "Value=Fever neonatal", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].medicalHistory.lltCode", "Value=10016562", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].medicalHistory.codedWithSearchString", "Value=fever", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].medicalHistory.reportedReaction", "Value=fever", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].internalRowId", "Value=118", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[4].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[4].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].medicalHistory.reactionCoded", "Value=Cold symptoms", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].medicalHistory.lltCode", "Value=10009867", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].medicalHistory.codedWithSearchString", "Value=cold", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].medicalHistory.reportedReaction", "Value=cold", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].internalRowId", "Value=119", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[5].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[5].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].medicalHistory.reactionCoded", "Value=Head X-ray", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].medicalHistory.lltCode", "Value=10019206", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].medicalHistory.codedWithSearchString", "Value=head", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].medicalHistory.reportedReaction", "Value=head", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].internalRowId", "Value=120", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[6].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[6].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].medicalHistory.reactionCoded", "Value=Head lag", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].medicalHistory.lltCode", "Value=10057870", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].medicalHistory.codedWithSearchString", "Value=head", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].medicalHistory.reportedReaction", "Value=head", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].internalRowId", "Value=121", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[7].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[7].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].medicalHistory.reactionCoded", "Value=Cold antibody present", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].medicalHistory.lltCode", "Value=10065228", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].medicalHistory.codedWithSearchString", "Value=cold", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].medicalHistory.reportedReaction", "Value=cold", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].internalRowId", "Value=122", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[8].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[8].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].medicalHistory.reactionCoded", "Value=Cold agglutinins present", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].medicalHistory.lltCode", "Value=10009855", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].medicalHistory.codedWithSearchString", "Value=cold", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].medicalHistory.reportedReaction", "Value=cold", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].internalRowId", "Value=123", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].continuing", "Value=", "ENDITEM", 
		"Name=_safetyData.patient.medicalHistories[9].familyHistory", "Value=", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].comments", "Value=Test", "ENDITEM", 
		"Name=safetyData.patient.medicalHistories[9].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugName.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugName.id", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].internalRowId", "Value=8", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugIndication.reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugIndication.lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugIndication.codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugIndication.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugIndication.reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugReaction.reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugReaction.lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugReaction.codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugReaction.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].drugReaction.reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.patient.pastDrugHistories[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.parent.name", "Value=", "ENDITEM", 
		"Name=safetyData.parent.age.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.age.id", "Value=", "ENDITEM", 
		"Name=safetyData.parent.weight", "Value=", "ENDITEM", 
		"Name=safetyData.parent.weightUnit.id", "Value=44", "ENDITEM", 
		"Name=safetyData.parent.height", "Value=", "ENDITEM", 
		"Name=safetyData.parent.heightUnit.id", "Value=46", "ENDITEM", 
		"Name=safetyData.parent.gender.id", "Value=", "ENDITEM", 
		"Name=safetyData.parent.lmpDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.lmpDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.parent.additionalRelevantMedicalHistory", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].medicalHistory.reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].medicalHistory.lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].medicalHistory.codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].medicalHistory.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].medicalHistory.reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].internalRowId", "Value=9", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].continuing", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].comments", "Value=", "ENDITEM", 
		"Name=safetyData.parent.medicalHistories[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugName.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugName.id", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].internalRowId", "Value=10", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugIndication.reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugIndication.lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugIndication.codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugIndication.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugIndication.reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugReaction.reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugReaction.lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugReaction.codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugReaction.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].drugReaction.reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.parent.pastDrugHistories[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[0].license.value", "Value=Rx CISPLATIN ID", "ENDITEM", 
		"Name=safetyData.products[0].license.id", "Value=100381", "ENDITEM", 
		"Name=safetyData.products[0].id", "Value=100271", "ENDITEM", 
		"Name=safetyData.products[0].internalRowId", "Value=11", "ENDITEM", 
		"Name=safetyData.products[0].dosageForm.id", "Value=480", "ENDITEM", 
		"Name=safetyData.products[0].role.id", "Value=29", "ENDITEM", 
		"Name=safetyData.products[0].obtainCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].authNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].authCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].authHolder.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].cumulativeDoseToFirstReaction.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].cumulativeDoseToFirstReaction.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].exposureGestationPeriod.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].exposureGestationPeriod.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].actionTaken.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].expirationDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].expirationDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].replacementRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].returnRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].refundRequested.id", "Value=", "ENDITEM", 
		"Name=_safetyData.products[0].blinded", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].additionalDrugInfoNotes", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[0].customProperty.deviceUsed", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].customProperty.deviceOperator", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].customProperty.deviceAvailable", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].customProperty.deviceLocation", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].customProperty.deviceManufacturerDate", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].ingredients[0].name.id", "Value=3539", "ENDITEM", 
		"Name=safetyData.products[0].ingredients[0].internalRowId", "Value=21", "ENDITEM", 
		"Name=safetyData.products[0].ingredients[0].strength.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].ingredients[0].strength.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].ingredients[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].internalRowId", "Value=13", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].productIndications[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].dose.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].dose.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].internalRowId", "Value=14", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].frequency.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].batchNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].route.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].parentRoute.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].description", "Value=", "ENDITEM", 
		"Name=safetyData.products[0].doseInformations[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[1].license.value", "Value=Rx CISPLATIN ID", "ENDITEM", 
		"Name=safetyData.products[1].license.id", "Value=100382", "ENDITEM", 
		"Name=safetyData.products[1].id", "Value=100271", "ENDITEM", 
		"Name=safetyData.products[1].internalRowId", "Value=22", "ENDITEM", 
		"Name=safetyData.products[1].dosageForm.id", "Value=480", "ENDITEM", 
		"Name=safetyData.products[1].role.id", "Value=29", "ENDITEM", 
		"Name=safetyData.products[1].obtainCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].authNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].authCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].authHolder.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].cumulativeDoseToFirstReaction.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].cumulativeDoseToFirstReaction.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].exposureGestationPeriod.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].exposureGestationPeriod.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].actionTaken.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].expirationDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].expirationDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].replacementRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].returnRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].refundRequested.id", "Value=", "ENDITEM", 
		"Name=_safetyData.products[1].blinded", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].additionalDrugInfoNotes", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[1].customProperty.deviceUsed", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].customProperty.deviceOperator", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].customProperty.deviceAvailable", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].customProperty.deviceLocation", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].customProperty.deviceManufacturerDate", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].ingredients[0].name.id", "Value=3539", "ENDITEM", 
		"Name=safetyData.products[1].ingredients[0].internalRowId", "Value=26", "ENDITEM", 
		"Name=safetyData.products[1].ingredients[0].strength.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].ingredients[0].strength.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].ingredients[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].internalRowId", "Value=24", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].productIndications[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].dose.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].dose.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].internalRowId", "Value=25", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].frequency.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].batchNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].route.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].parentRoute.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].description", "Value=", "ENDITEM", 
		"Name=safetyData.products[1].doseInformations[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[2].license.value", "Value=RX Diclofenac Capsule", "ENDITEM", 
		"Name=safetyData.products[2].license.id", "Value=100074", "ENDITEM", 
		"Name=safetyData.products[2].id", "Value=100057", "ENDITEM", 
		"Name=safetyData.products[2].internalRowId", "Value=27", "ENDITEM", 
		"Name=safetyData.products[2].dosageForm.id", "Value=2", "ENDITEM", 
		"Name=safetyData.products[2].role.id", "Value=29", "ENDITEM", 
		"Name=safetyData.products[2].obtainCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].authNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].authCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].authHolder.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].cumulativeDoseToFirstReaction.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].cumulativeDoseToFirstReaction.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].exposureGestationPeriod.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].exposureGestationPeriod.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].actionTaken.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].expirationDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].expirationDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].replacementRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].returnRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].refundRequested.id", "Value=", "ENDITEM", 
		"Name=_safetyData.products[2].blinded", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].additionalDrugInfoNotes", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[2].customProperty.deviceUsed", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].customProperty.deviceOperator", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].customProperty.deviceAvailable", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].customProperty.deviceLocation", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].customProperty.deviceManufacturerDate", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].ingredients[0].name.id", "Value=3572", "ENDITEM", 
		"Name=safetyData.products[2].ingredients[0].internalRowId", "Value=31", "ENDITEM", 
		"Name=safetyData.products[2].ingredients[0].strength.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].ingredients[0].strength.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].ingredients[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].internalRowId", "Value=29", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].productIndications[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].dose.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].dose.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].internalRowId", "Value=30", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].frequency.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].batchNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].route.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].parentRoute.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].description", "Value=", "ENDITEM", 
		"Name=safetyData.products[2].doseInformations[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[3].license.value", "Value=Rx B KEYTRUDA", "ENDITEM", 
		"Name=safetyData.products[3].license.id", "Value=100312", "ENDITEM", 
		"Name=safetyData.products[3].id", "Value=100264", "ENDITEM", 
		"Name=safetyData.products[3].internalRowId", "Value=32", "ENDITEM", 
		"Name=safetyData.products[3].dosageForm.id", "Value=276", "ENDITEM", 
		"Name=safetyData.products[3].role.id", "Value=29", "ENDITEM", 
		"Name=safetyData.products[3].obtainCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].authNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].authCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].authHolder.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].cumulativeDoseToFirstReaction.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].cumulativeDoseToFirstReaction.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].exposureGestationPeriod.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].exposureGestationPeriod.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].actionTaken.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].expirationDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].expirationDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].replacementRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].returnRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].refundRequested.id", "Value=", "ENDITEM", 
		"Name=_safetyData.products[3].blinded", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].additionalDrugInfoNotes", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[3].customProperty.deviceUsed", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].customProperty.deviceOperator", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].customProperty.deviceAvailable", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].customProperty.deviceLocation", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].customProperty.deviceManufacturerDate", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].ingredients[0].name.id", "Value=104742", "ENDITEM", 
		"Name=safetyData.products[3].ingredients[0].internalRowId", "Value=36", "ENDITEM", 
		"Name=safetyData.products[3].ingredients[0].strength.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].ingredients[0].strength.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].ingredients[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].internalRowId", "Value=34", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].productIndications[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].dose.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].dose.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].internalRowId", "Value=35", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].frequency.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].batchNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].route.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].parentRoute.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].description", "Value=", "ENDITEM", 
		"Name=safetyData.products[3].doseInformations[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[4].license.value", "Value=Rx IPILIMUMAB", "ENDITEM", 
		"Name=safetyData.products[4].license.id", "Value=100317", "ENDITEM", 
		"Name=safetyData.products[4].id", "Value=100265", "ENDITEM", 
		"Name=safetyData.products[4].internalRowId", "Value=37", "ENDITEM", 
		"Name=safetyData.products[4].dosageForm.id", "Value=276", "ENDITEM", 
		"Name=safetyData.products[4].role.id", "Value=29", "ENDITEM", 
		"Name=safetyData.products[4].obtainCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].authNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].authCountry.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].authHolder.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].cumulativeDoseToFirstReaction.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].cumulativeDoseToFirstReaction.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].exposureGestationPeriod.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].exposureGestationPeriod.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].actionTaken.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].expirationDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].expirationDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].replacementRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].returnRequired.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].refundRequested.id", "Value=", "ENDITEM", 
		"Name=_safetyData.products[4].blinded", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].additionalDrugInfoNotes", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[4].customProperty.deviceUsed", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].customProperty.deviceOperator", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].customProperty.deviceAvailable", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].customProperty.deviceLocation", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].customProperty.deviceManufacturerDate", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].ingredients[0].name.id", "Value=10309601", "ENDITEM", 
		"Name=safetyData.products[4].ingredients[0].internalRowId", "Value=41", "ENDITEM", 
		"Name=safetyData.products[4].ingredients[0].strength.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].ingredients[0].strength.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].ingredients[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].internalRowId", "Value=39", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].productIndications[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].dose.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].dose.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].internalRowId", "Value=40", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].frequency.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].batchNumber", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].route.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].parentRoute.idOrValue", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].description", "Value=", "ENDITEM", 
		"Name=safetyData.products[4].doseInformations[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.events[0].reportedReaction", "Value=Fever ", "ENDITEM", 
		"Name=safetyData.events[0].lltCode", "Value=10049362", "ENDITEM", 
		"Name=safetyData.events[0].codedWithSearchString", "Value=Fever ", "ENDITEM", 
		"Name=safetyData.events[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].internalRowId", "Value=15", "ENDITEM", 
		"Name=safetyData.events[0].reportedLanguage.id", "Value=1", "ENDITEM", 
		"Name=safetyData.events[0].reactionCoded", "Value=Fever blister", "ENDITEM", 
		"Name=safetyData.events[0].highlightedByReporter.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].outcome.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].medicallyConfirmed.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].country.id", "Value=99", "ENDITEM", 
		"Name=safetyData.events[0].hospitalizationStartDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].hospitalizationStartDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].hospitalizationEndDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].hospitalizationEndDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.events[1].reportedReaction", "Value=Cold ", "ENDITEM", 
		"Name=safetyData.events[1].lltCode", "Value=10009867", "ENDITEM", 
		"Name=safetyData.events[1].codedWithSearchString", "Value=Cold ", "ENDITEM", 
		"Name=safetyData.events[1].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].internalRowId", "Value=42", "ENDITEM", 
		"Name=safetyData.events[1].reportedLanguage.id", "Value=1", "ENDITEM", 
		"Name=safetyData.events[1].reactionCoded", "Value=Cold symptoms", "ENDITEM", 
		"Name=safetyData.events[1].highlightedByReporter.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].outcome.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].medicallyConfirmed.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].country.id", "Value=99", "ENDITEM", 
		"Name=safetyData.events[1].hospitalizationStartDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].hospitalizationStartDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].hospitalizationEndDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].hospitalizationEndDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[1].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.events[2].reportedReaction", "Value=cough ", "ENDITEM", 
		"Name=safetyData.events[2].lltCode", "Value=10073576", "ENDITEM", 
		"Name=safetyData.events[2].codedWithSearchString", "Value=cough ", "ENDITEM", 
		"Name=safetyData.events[2].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].internalRowId", "Value=43", "ENDITEM", 
		"Name=safetyData.events[2].reportedLanguage.id", "Value=1", "ENDITEM", 
		"Name=safetyData.events[2].reactionCoded", "Value=Cough weak", "ENDITEM", 
		"Name=safetyData.events[2].highlightedByReporter.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].outcome.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].medicallyConfirmed.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].country.id", "Value=99", "ENDITEM", 
		"Name=safetyData.events[2].hospitalizationStartDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].hospitalizationStartDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].hospitalizationEndDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].hospitalizationEndDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[2].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.events[3].reportedReaction", "Value=headache", "ENDITEM", 
		"Name=safetyData.events[3].lltCode", "Value=10019215", "ENDITEM", 
		"Name=safetyData.events[3].codedWithSearchString", "Value=headache", "ENDITEM", 
		"Name=safetyData.events[3].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].internalRowId", "Value=44", "ENDITEM", 
		"Name=safetyData.events[3].reportedLanguage.id", "Value=1", "ENDITEM", 
		"Name=safetyData.events[3].reactionCoded", "Value=Headache dull", "ENDITEM", 
		"Name=safetyData.events[3].highlightedByReporter.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].outcome.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].medicallyConfirmed.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].country.id", "Value=99", "ENDITEM", 
		"Name=safetyData.events[3].hospitalizationStartDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].hospitalizationStartDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].hospitalizationEndDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].hospitalizationEndDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[3].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.events[4].reportedReaction", "Value=typhoid", "ENDITEM", 
		"Name=safetyData.events[4].lltCode", "Value=10045275", "ENDITEM", 
		"Name=safetyData.events[4].codedWithSearchString", "Value=typhoid", "ENDITEM", 
		"Name=safetyData.events[4].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].internalRowId", "Value=45", "ENDITEM", 
		"Name=safetyData.events[4].reportedLanguage.id", "Value=1", "ENDITEM", 
		"Name=safetyData.events[4].reactionCoded", "Value=Typhoid fever", "ENDITEM", 
		"Name=safetyData.events[4].highlightedByReporter.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].startDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].startDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].endDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].endDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].duration.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].duration.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].outcome.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].medicallyConfirmed.id", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].country.id", "Value=99", "ENDITEM", 
		"Name=safetyData.events[4].hospitalizationStartDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].hospitalizationStartDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].hospitalizationEndDate.value", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].hospitalizationEndDate.format", "Value=", "ENDITEM", 
		"Name=safetyData.events[4].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[0].name.reactionCoded", "Value=Abd. pain", "ENDITEM", 
		"Name=safetyData.tests[0].name.lltCode", "Value=10000039", "ENDITEM", 
		"Name=safetyData.tests[0].name.codedWithSearchString", "Value=abd", "ENDITEM", 
		"Name=safetyData.tests[0].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].name.reportedReaction", "Value=abd", "ENDITEM", 
		"Name=safetyData.tests[0].internalRowId", "Value=16", "ENDITEM", 
		"Name=safetyData.tests[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[0].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].internalRowId", "Value=17", "ENDITEM", 
		"Name=safetyData.tests[0].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].reports[0].internalRowId", "Value=18", "ENDITEM", 
		"Name=safetyData.tests[0].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[0].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[0].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[1].name.reactionCoded", "Value=Abdo. bloating", "ENDITEM", 
		"Name=safetyData.tests[1].name.lltCode", "Value=10000041", "ENDITEM", 
		"Name=safetyData.tests[1].name.codedWithSearchString", "Value=abd", "ENDITEM", 
		"Name=safetyData.tests[1].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].name.reportedReaction", "Value=abd", "ENDITEM", 
		"Name=safetyData.tests[1].internalRowId", "Value=46", "ENDITEM", 
		"Name=safetyData.tests[1].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[1].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].internalRowId", "Value=47", "ENDITEM", 
		"Name=safetyData.tests[1].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].reports[0].internalRowId", "Value=48", "ENDITEM", 
		"Name=safetyData.tests[1].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[1].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[1].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[2].name.reactionCoded", "Value=Politano-Leadbetter procedure", "ENDITEM", 
		"Name=safetyData.tests[2].name.lltCode", "Value=10059365", "ENDITEM", 
		"Name=safetyData.tests[2].name.codedWithSearchString", "Value=adb", "ENDITEM", 
		"Name=safetyData.tests[2].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].name.reportedReaction", "Value=adb", "ENDITEM", 
		"Name=safetyData.tests[2].internalRowId", "Value=49", "ENDITEM", 
		"Name=safetyData.tests[2].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[2].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].internalRowId", "Value=50", "ENDITEM", 
		"Name=safetyData.tests[2].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].reports[0].internalRowId", "Value=51", "ENDITEM", 
		"Name=safetyData.tests[2].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[2].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[2].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[3].name.reactionCoded", "Value=Dengue fever", "ENDITEM", 
		"Name=safetyData.tests[3].name.lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].name.codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].name.reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].internalRowId", "Value=52", "ENDITEM", 
		"Name=safetyData.tests[3].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[3].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].internalRowId", "Value=53", "ENDITEM", 
		"Name=safetyData.tests[3].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].reports[0].internalRowId", "Value=54", "ENDITEM", 
		"Name=safetyData.tests[3].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[3].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[3].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[4].name.reactionCoded", "Value=Dengue hemorrhagic fever", "ENDITEM", 
		"Name=safetyData.tests[4].name.lltCode", "Value=10012313", "ENDITEM", 
		"Name=safetyData.tests[4].name.codedWithSearchString", "Value=den", "ENDITEM", 
		"Name=safetyData.tests[4].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].name.reportedReaction", "Value=den", "ENDITEM", 
		"Name=safetyData.tests[4].internalRowId", "Value=55", "ENDITEM", 
		"Name=safetyData.tests[4].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[4].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].internalRowId", "Value=56", "ENDITEM", 
		"Name=safetyData.tests[4].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].reports[0].internalRowId", "Value=57", "ENDITEM", 
		"Name=safetyData.tests[4].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[4].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[4].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[5].name.reactionCoded", "Value=Diabetes mellitus", "ENDITEM", 
		"Name=safetyData.tests[5].name.lltCode", "Value=10012601", "ENDITEM", 
		"Name=safetyData.tests[5].name.codedWithSearchString", "Value=dia", "ENDITEM", 
		"Name=safetyData.tests[5].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].name.reportedReaction", "Value=dia", "ENDITEM", 
		"Name=safetyData.tests[5].internalRowId", "Value=70", "ENDITEM", 
		"Name=safetyData.tests[5].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[5].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].internalRowId", "Value=71", "ENDITEM", 
		"Name=safetyData.tests[5].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].reports[0].internalRowId", "Value=72", "ENDITEM", 
		"Name=safetyData.tests[5].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[5].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[5].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[6].name.reactionCoded", "Value=Diabetes mellitus aggravated", "ENDITEM", 
		"Name=safetyData.tests[6].name.lltCode", "Value=10012603", "ENDITEM", 
		"Name=safetyData.tests[6].name.codedWithSearchString", "Value=Dia", "ENDITEM", 
		"Name=safetyData.tests[6].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].name.reportedReaction", "Value=Dia", "ENDITEM", 
		"Name=safetyData.tests[6].internalRowId", "Value=73", "ENDITEM", 
		"Name=safetyData.tests[6].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[6].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].internalRowId", "Value=74", "ENDITEM", 
		"Name=safetyData.tests[6].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].reports[0].internalRowId", "Value=75", "ENDITEM", 
		"Name=safetyData.tests[6].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[6].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[6].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[7].name.reactionCoded", "Value=Hypaesthesia", "ENDITEM", 
		"Name=safetyData.tests[7].name.lltCode", "Value=10065987", "ENDITEM", 
		"Name=safetyData.tests[7].name.codedWithSearchString", "Value=hyp", "ENDITEM", 
		"Name=safetyData.tests[7].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].name.reportedReaction", "Value=hyp", "ENDITEM", 
		"Name=safetyData.tests[7].internalRowId", "Value=76", "ENDITEM", 
		"Name=safetyData.tests[7].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[7].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].internalRowId", "Value=77", "ENDITEM", 
		"Name=safetyData.tests[7].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].reports[0].internalRowId", "Value=78", "ENDITEM", 
		"Name=safetyData.tests[7].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[7].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[7].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[8].name.reactionCoded", "Value=Hyper HDL cholesterolaemia", "ENDITEM", 
		"Name=safetyData.tests[8].name.lltCode", "Value=10069944", "ENDITEM", 
		"Name=safetyData.tests[8].name.codedWithSearchString", "Value=hyper", "ENDITEM", 
		"Name=safetyData.tests[8].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].name.reportedReaction", "Value=hyper", "ENDITEM", 
		"Name=safetyData.tests[8].internalRowId", "Value=79", "ENDITEM", 
		"Name=safetyData.tests[8].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[8].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].internalRowId", "Value=80", "ENDITEM", 
		"Name=safetyData.tests[8].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].reports[0].internalRowId", "Value=81", "ENDITEM", 
		"Name=safetyData.tests[8].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[8].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[8].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[9].name.reactionCoded", "Value=Hypoalbuminaemia", "ENDITEM", 
		"Name=safetyData.tests[9].name.lltCode", "Value=10020942", "ENDITEM", 
		"Name=safetyData.tests[9].name.codedWithSearchString", "Value=Hypo", "ENDITEM", 
		"Name=safetyData.tests[9].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].name.reportedReaction", "Value=Hypo", "ENDITEM", 
		"Name=safetyData.tests[9].internalRowId", "Value=82", "ENDITEM", 
		"Name=safetyData.tests[9].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[9].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].internalRowId", "Value=83", "ENDITEM", 
		"Name=safetyData.tests[9].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].reports[0].internalRowId", "Value=84", "ENDITEM", 
		"Name=safetyData.tests[9].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[9].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[9].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[10].name.reactionCoded", "Value=Hypoactivity", "ENDITEM", 
		"Name=safetyData.tests[10].name.lltCode", "Value=10020934", "ENDITEM", 
		"Name=safetyData.tests[10].name.codedWithSearchString", "Value=Hypo", "ENDITEM", 
		"Name=safetyData.tests[10].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].name.reportedReaction", "Value=Hypo", "ENDITEM", 
		"Name=safetyData.tests[10].internalRowId", "Value=85", "ENDITEM", 
		"Name=safetyData.tests[10].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[10].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].internalRowId", "Value=86", "ENDITEM", 
		"Name=safetyData.tests[10].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].reports[0].internalRowId", "Value=87", "ENDITEM", 
		"Name=safetyData.tests[10].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[10].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[10].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[11].name.reactionCoded", "Value=Thoracic cavity drainage", "ENDITEM", 
		"Name=safetyData.tests[11].name.lltCode", "Value=10053975", "ENDITEM", 
		"Name=safetyData.tests[11].name.codedWithSearchString", "Value=tho", "ENDITEM", 
		"Name=safetyData.tests[11].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].name.reportedReaction", "Value=tho", "ENDITEM", 
		"Name=safetyData.tests[11].internalRowId", "Value=88", "ENDITEM", 
		"Name=safetyData.tests[11].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[11].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].internalRowId", "Value=89", "ENDITEM", 
		"Name=safetyData.tests[11].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].reports[0].internalRowId", "Value=90", "ENDITEM", 
		"Name=safetyData.tests[11].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[11].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[11].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[12].name.reactionCoded", "Value=Thompson hip prosthesis", "ENDITEM", 
		"Name=safetyData.tests[12].name.lltCode", "Value=10043460", "ENDITEM", 
		"Name=safetyData.tests[12].name.codedWithSearchString", "Value=tho", "ENDITEM", 
		"Name=safetyData.tests[12].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].name.reportedReaction", "Value=tho", "ENDITEM", 
		"Name=safetyData.tests[12].internalRowId", "Value=91", "ENDITEM", 
		"Name=safetyData.tests[12].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[12].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].internalRowId", "Value=92", "ENDITEM", 
		"Name=safetyData.tests[12].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].reports[0].internalRowId", "Value=93", "ENDITEM", 
		"Name=safetyData.tests[12].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[12].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[12].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[13].name.reactionCoded", "Value=Polio acute", "ENDITEM", 
		"Name=safetyData.tests[13].name.lltCode", "Value=10036009", "ENDITEM", 
		"Name=safetyData.tests[13].name.codedWithSearchString", "Value=poli", "ENDITEM", 
		"Name=safetyData.tests[13].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].name.reportedReaction", "Value=poli", "ENDITEM", 
		"Name=safetyData.tests[13].internalRowId", "Value=94", "ENDITEM", 
		"Name=safetyData.tests[13].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[13].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].internalRowId", "Value=95", "ENDITEM", 
		"Name=safetyData.tests[13].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].reports[0].internalRowId", "Value=96", "ENDITEM", 
		"Name=safetyData.tests[13].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[13].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[13].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[14].name.reactionCoded", "Value=Polio-like paralysis", "ENDITEM", 
		"Name=safetyData.tests[14].name.lltCode", "Value=10036010", "ENDITEM", 
		"Name=safetyData.tests[14].name.codedWithSearchString", "Value=poli", "ENDITEM", 
		"Name=safetyData.tests[14].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].name.reportedReaction", "Value=poli", "ENDITEM", 
		"Name=safetyData.tests[14].internalRowId", "Value=97", "ENDITEM", 
		"Name=safetyData.tests[14].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[14].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].internalRowId", "Value=98", "ENDITEM", 
		"Name=safetyData.tests[14].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].reports[0].internalRowId", "Value=99", "ENDITEM", 
		"Name=safetyData.tests[14].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[14].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[14].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[15].name.reactionCoded", "Value=Head lag abnormal", "ENDITEM", 
		"Name=safetyData.tests[15].name.lltCode", "Value=10057871", "ENDITEM", 
		"Name=safetyData.tests[15].name.codedWithSearchString", "Value=hea", "ENDITEM", 
		"Name=safetyData.tests[15].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].name.reportedReaction", "Value=hea", "ENDITEM", 
		"Name=safetyData.tests[15].internalRowId", "Value=100", "ENDITEM", 
		"Name=safetyData.tests[15].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[15].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].internalRowId", "Value=101", "ENDITEM", 
		"Name=safetyData.tests[15].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].reports[0].internalRowId", "Value=102", "ENDITEM", 
		"Name=safetyData.tests[15].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[15].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[15].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[16].name.reactionCoded", "Value=Head X-ray normal", "ENDITEM", 
		"Name=safetyData.tests[16].name.lltCode", "Value=10019208", "ENDITEM", 
		"Name=safetyData.tests[16].name.codedWithSearchString", "Value=head", "ENDITEM", 
		"Name=safetyData.tests[16].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].name.reportedReaction", "Value=head", "ENDITEM", 
		"Name=safetyData.tests[16].internalRowId", "Value=103", "ENDITEM", 
		"Name=safetyData.tests[16].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[16].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].internalRowId", "Value=104", "ENDITEM", 
		"Name=safetyData.tests[16].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].reports[0].internalRowId", "Value=105", "ENDITEM", 
		"Name=safetyData.tests[16].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[16].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[16].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[17].name.reactionCoded", "Value=Head and eye gaze deviation", "ENDITEM", 
		"Name=safetyData.tests[17].name.lltCode", "Value=10077191", "ENDITEM", 
		"Name=safetyData.tests[17].name.codedWithSearchString", "Value=head", "ENDITEM", 
		"Name=safetyData.tests[17].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].name.reportedReaction", "Value=head", "ENDITEM", 
		"Name=safetyData.tests[17].internalRowId", "Value=106", "ENDITEM", 
		"Name=safetyData.tests[17].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[17].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].internalRowId", "Value=107", "ENDITEM", 
		"Name=safetyData.tests[17].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].reports[0].internalRowId", "Value=108", "ENDITEM", 
		"Name=safetyData.tests[17].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[17].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[17].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[18].name.reactionCoded", "Value=Eye abnormality", "ENDITEM", 
		"Name=safetyData.tests[18].name.lltCode", "Value=10015903", "ENDITEM", 
		"Name=safetyData.tests[18].name.codedWithSearchString", "Value=eye", "ENDITEM", 
		"Name=safetyData.tests[18].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].name.reportedReaction", "Value=eye", "ENDITEM", 
		"Name=safetyData.tests[18].internalRowId", "Value=109", "ENDITEM", 
		"Name=safetyData.tests[18].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[18].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].internalRowId", "Value=110", "ENDITEM", 
		"Name=safetyData.tests[18].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].reports[0].internalRowId", "Value=111", "ENDITEM", 
		"Name=safetyData.tests[18].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[18].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[18].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[19].name.reactionCoded", "Value=Eye ache", "ENDITEM", 
		"Name=safetyData.tests[19].name.lltCode", "Value=10015906", "ENDITEM", 
		"Name=safetyData.tests[19].name.codedWithSearchString", "Value=eye", "ENDITEM", 
		"Name=safetyData.tests[19].name.hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].name.reportedReaction", "Value=eye", "ENDITEM", 
		"Name=safetyData.tests[19].internalRowId", "Value=112", "ENDITEM", 
		"Name=safetyData.tests[19].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.tests[19].normalLowHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].normalLow", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].normalHigh", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].internalRowId", "Value=113", "ENDITEM", 
		"Name=safetyData.tests[19].unit.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].reports[0].date.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].reports[0].internalRowId", "Value=114", "ENDITEM", 
		"Name=safetyData.tests[19].reports[0].result.value", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].reports[0].result.id", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].reports[0].comments", "Value=", "ENDITEM", 
		"Name=_safetyData.tests[19].reports[0].moreInfo", "Value=", "ENDITEM", 
		"Name=safetyData.tests[19].reports[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.summary.caseDescription", "Value=PV Intake cognitive AI technology enables organizations to make their end-to-end safety processes more streamlined with increased human efficiency & productivity at lower cost. It aids better case quality & proactive identification, evaluation &, minimization of risks...........................................\nPV Intake’s AI based solutions are based on patterns observed in large volumes of past data using Machine Learning (ML) & Deep Learning "
		"(DL) & applies it learning on new safety information.", "ENDITEM", 
		"Name=safetyData.summary.reporterComments", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderComments", "Value=", "ENDITEM", 
		"Name=safetyData.summary.customProperty.customSenderComments", "Value=", "ENDITEM", 
		"Name=safetyData.summary.customProperty.additionalNotes", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].reactionCoded", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].lltCode", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].codedWithSearchString", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].hierarchyStorageId", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].reportedReaction", "Value=", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].internalRowId", "Value=19", "ENDITEM", 
		"Name=safetyData.summary.senderDiagnosis[0].deleted", "Value=false", "ENDITEM", 
		"Name=safetyData.attachments[0].receiptDate", "Value=13-Jul-2020", "ENDITEM", 
		"Name=safetyData.attachments[0].internalRowId", "Value=20", "ENDITEM", 
		"Name=safetyData.attachments[0].fileType", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].filePath", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].id", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].fileName", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].isRedactFile", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].redactFileName", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].caseCountry", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].processStatus", "Value=1001", "ENDITEM", 
		"Name=safetyData.attachments[0].caseVersion", "Value=1", "ENDITEM", 
		"Name=_safetyData.attachments[0].isProtected", "Value=", "ENDITEM", 
		"Name=safetyData.attachments[0].deleted", "Value=false", "ENDITEM", 
		"LAST");

	lr_end_transaction("S01_49_Click_Create",2);

	lr_think_time(3);

	lr_start_transaction("S01_50_LogOut");

	web_submit_data("releaseEditLock", 
		"Action={URL_PVI}/caseEntry/releaseEditLock/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/show/86345?templateId=2", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=id", "Value=86345", "ENDITEM", 
		"LAST");

	web_url("logout", 
		"URL={URL_PVI}/logout?logoutCallBackUrl={URL_PVI}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_PVI}/caseEntry/show/86345?templateId=2", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S01_50_LogOut",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\project\\pvi\\scripts\\s01_casecreation\\\\combined_S01_CaseCreation.c" 2

