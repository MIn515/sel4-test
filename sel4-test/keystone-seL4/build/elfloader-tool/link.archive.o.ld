SECTIONS { ._archive_cpio : ALIGN(4) { _archive_start = . ; *(.*) ; _archive_start_end = . ; } }
