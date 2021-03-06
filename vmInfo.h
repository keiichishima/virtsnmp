/*_
 * Copyright 2013 Scyphus Solutions Co. Ltd.  All rights reserved.
 *
 * Authors:
 *      Hirochika Asai  <asai@scyphus.co.jp>
 */

/* $Id$ */

#ifndef VM_INFO_H
#define VM_INFO_H

/* Function declarations */
void init_vmInfo(void);
Netsnmp_Node_Handler handle_vmNumber;
Netsnmp_Node_Handler handle_vmTableLastChange;

#endif /* VM_INFO_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */
