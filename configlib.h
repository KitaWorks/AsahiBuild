#ifndef __CONFIGLIB_H__
#define __CONFIGLIB_H__

// get_key
// it will get key's value.
extern char *get_key(const char *filename);

// write_key
// it will write a key and value.
// if file not exist, will create it.
extern void write_key(const char *filename, const char *key, const char *value);

// delete_key
// it will delete a key.
extern void delete_key(const char *filename, const char *key);

#endif // __CONFIGLIB_H__