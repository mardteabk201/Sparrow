#include <linkage.h>
#include "shell.h"
#include <printk.h>

extern unsigned long jiffies;

void handle_cmd_elfs(char *primary_parameter, char **secondary_parameters) {
  return;
}

void handle_cmd_elf(char *primary_parameter, char **secondary_parameters) {
  return;
}

void handle_cmd_elfa(char *primary_parameter, char **secondary_parameters) {
  return;
}

void handle_cmd_ls(char *primary_parameter, char **secondary_parameters) {
  return;
}

void handle_cmd_jiffies(char *primary_parameter, char **secondary_parameters) {
  printu("jiffies: %d\n", jiffies);
  return;
}

void handle_cmd_vruntime(char *primary_parameter, char **secondary_parameters) {
  return;
}

void handle_cmd_help(char *primary_parameter, char **secondary_parameters) {
  return;
}

