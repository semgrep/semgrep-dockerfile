#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_NONE = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_variable = 8,
  anon_sym_SLASHtcp = 9,
  anon_sym_SLASHudp = 10,
  anon_sym_AT = 11,
  anon_sym_DASH_DASH = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  sym_line_continuation = 16,
  anon_sym_POUND = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_BSLASH = 19,
  sym_escape_sequence = 20,
  sym_non_newline_whitespace = 21,
  sym_comment = 22,
  anon_sym_DOLLAR_LBRACE_LBRACE = 23,
  anon_sym_RBRACE_RBRACE = 24,
  sym_semgrep_metavariable_name = 25,
  sym_semgrep_ellipsis = 26,
  sym_imm_tok_pat_24a1611 = 27,
  sym_imm_tok_pat_3d340f6 = 28,
  sym_imm_tok_pat_589b0f8 = 29,
  sym_imm_tok_pat_bcfc287 = 30,
  sym_imm_tok_pat_d2727a0 = 31,
  sym_imm_tok_pat_f43f746 = 32,
  sym_imm_tok_pat_f6e1de8 = 33,
  sym_pat_030af88 = 34,
  sym_pat_0c7fc22 = 35,
  sym_pat_1167a92 = 36,
  sym_pat_1c663f5 = 37,
  sym_pat_217c202 = 38,
  sym_pat_239fcac = 39,
  sym_pat_2b37705 = 40,
  sym_pat_4128122 = 41,
  sym_pat_433746d = 42,
  sym_pat_441cd81 = 43,
  sym_pat_4a2f38a = 44,
  sym_pat_4b81dfc = 45,
  sym_pat_4de4cb9 = 46,
  sym_pat_4fd4a56 = 47,
  sym_pat_56bd329 = 48,
  sym_pat_5cf3c2c = 49,
  sym_pat_5eaae97 = 50,
  sym_pat_660c06c = 51,
  sym_pat_79b8891 = 52,
  sym_pat_808c5a1 = 53,
  sym_pat_845d48b = 54,
  sym_pat_8713919 = 55,
  sym_pat_9374c10 = 56,
  sym_pat_9818882 = 57,
  sym_pat_985c208 = 58,
  sym_pat_9a14b5c = 59,
  sym_pat_9c0a769 = 60,
  sym_pat_a368b76 = 61,
  sym_pat_a6040bb = 62,
  sym_pat_aa82a08 = 63,
  sym_pat_ed84199 = 64,
  sym_pat_f05eb95 = 65,
  sym_pat_f2a2f8f = 66,
  sym_pat_fd0037e = 67,
  sym_source_file = 68,
  sym_instruction = 69,
  sym_from_instruction = 70,
  sym_run_instruction = 71,
  sym_cmd_instruction = 72,
  sym_label_instruction = 73,
  sym_expose_instruction = 74,
  sym_env_instruction = 75,
  sym_add_instruction = 76,
  sym_copy_instruction = 77,
  sym_entrypoint_instruction = 78,
  sym_volume_instruction = 79,
  sym_user_instruction = 80,
  sym_user_name_or_group = 81,
  sym_workdir_instruction = 82,
  sym_arg_instruction = 83,
  sym_onbuild_instruction = 84,
  sym_stopsignal_instruction = 85,
  sym_stopsignal_value = 86,
  sym_healthcheck_instruction = 87,
  sym_shell_instruction = 88,
  sym_maintainer_instruction = 89,
  sym_cross_build_instruction = 90,
  sym_path = 91,
  sym_expansion = 92,
  sym_env_pair = 93,
  sym_spaced_env_pair = 94,
  sym_env_key = 95,
  sym_expose_port = 96,
  sym_label_pair = 97,
  sym_image_spec = 98,
  sym_image_name = 99,
  sym_image_tag = 100,
  sym_image_digest = 101,
  sym_param = 102,
  sym_image_alias = 103,
  sym_string_array = 104,
  sym_shell_command = 105,
  sym_shell_fragment = 106,
  sym_comment_line = 107,
  sym_anon_comment = 108,
  sym_double_quoted_string = 109,
  sym_unquoted_string = 110,
  sym_semgrep_double_curly_metavariable = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_label_instruction_repeat1 = 113,
  aux_sym_expose_instruction_repeat1 = 114,
  aux_sym_env_instruction_repeat1 = 115,
  aux_sym_volume_instruction_repeat1 = 116,
  aux_sym_user_name_or_group_repeat1 = 117,
  aux_sym_stopsignal_value_repeat1 = 118,
  aux_sym_healthcheck_instruction_repeat1 = 119,
  aux_sym_path_repeat1 = 120,
  aux_sym_image_name_repeat1 = 121,
  aux_sym_image_tag_repeat1 = 122,
  aux_sym_image_digest_repeat1 = 123,
  aux_sym_image_alias_repeat1 = 124,
  aux_sym_string_array_repeat1 = 125,
  aux_sym_shell_command_repeat1 = 126,
  aux_sym_shell_command_repeat2 = 127,
  aux_sym_shell_fragment_repeat1 = 128,
  aux_sym_double_quoted_string_repeat1 = 129,
  aux_sym_unquoted_string_repeat1 = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_NONE] = "NONE",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_semgrep_metavariable_name] = "semgrep_metavariable_name",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_imm_tok_pat_24a1611] = "imm_tok_pat_24a1611",
  [sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [sym_pat_030af88] = "pat_030af88",
  [sym_pat_0c7fc22] = "pat_0c7fc22",
  [sym_pat_1167a92] = "pat_1167a92",
  [sym_pat_1c663f5] = "pat_1c663f5",
  [sym_pat_217c202] = "pat_217c202",
  [sym_pat_239fcac] = "pat_239fcac",
  [sym_pat_2b37705] = "pat_2b37705",
  [sym_pat_4128122] = "pat_4128122",
  [sym_pat_433746d] = "pat_433746d",
  [sym_pat_441cd81] = "pat_441cd81",
  [sym_pat_4a2f38a] = "pat_4a2f38a",
  [sym_pat_4b81dfc] = "pat_4b81dfc",
  [sym_pat_4de4cb9] = "pat_4de4cb9",
  [sym_pat_4fd4a56] = "pat_4fd4a56",
  [sym_pat_56bd329] = "pat_56bd329",
  [sym_pat_5cf3c2c] = "pat_5cf3c2c",
  [sym_pat_5eaae97] = "pat_5eaae97",
  [sym_pat_660c06c] = "pat_660c06c",
  [sym_pat_79b8891] = "pat_79b8891",
  [sym_pat_808c5a1] = "pat_808c5a1",
  [sym_pat_845d48b] = "pat_845d48b",
  [sym_pat_8713919] = "pat_8713919",
  [sym_pat_9374c10] = "pat_9374c10",
  [sym_pat_9818882] = "pat_9818882",
  [sym_pat_985c208] = "pat_985c208",
  [sym_pat_9a14b5c] = "pat_9a14b5c",
  [sym_pat_9c0a769] = "pat_9c0a769",
  [sym_pat_a368b76] = "pat_a368b76",
  [sym_pat_a6040bb] = "pat_a6040bb",
  [sym_pat_aa82a08] = "pat_aa82a08",
  [sym_pat_ed84199] = "pat_ed84199",
  [sym_pat_f05eb95] = "pat_f05eb95",
  [sym_pat_f2a2f8f] = "pat_f2a2f8f",
  [sym_pat_fd0037e] = "pat_fd0037e",
  [sym_source_file] = "source_file",
  [sym_instruction] = "instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_user_name_or_group] = "user_name_or_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_stopsignal_value] = "stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym_spaced_env_pair] = "spaced_env_pair",
  [sym_env_key] = "env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_comment_line] = "comment_line",
  [sym_anon_comment] = "anon_comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_semgrep_double_curly_metavariable] = "semgrep_double_curly_metavariable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_user_name_or_group_repeat1] = "user_name_or_group_repeat1",
  [aux_sym_stopsignal_value_repeat1] = "stopsignal_value_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_NONE] = anon_sym_NONE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_semgrep_metavariable_name] = sym_semgrep_metavariable_name,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_imm_tok_pat_24a1611] = sym_imm_tok_pat_24a1611,
  [sym_imm_tok_pat_3d340f6] = sym_imm_tok_pat_3d340f6,
  [sym_imm_tok_pat_589b0f8] = sym_imm_tok_pat_589b0f8,
  [sym_imm_tok_pat_bcfc287] = sym_imm_tok_pat_bcfc287,
  [sym_imm_tok_pat_d2727a0] = sym_imm_tok_pat_d2727a0,
  [sym_imm_tok_pat_f43f746] = sym_imm_tok_pat_f43f746,
  [sym_imm_tok_pat_f6e1de8] = sym_imm_tok_pat_f6e1de8,
  [sym_pat_030af88] = sym_pat_030af88,
  [sym_pat_0c7fc22] = sym_pat_0c7fc22,
  [sym_pat_1167a92] = sym_pat_1167a92,
  [sym_pat_1c663f5] = sym_pat_1c663f5,
  [sym_pat_217c202] = sym_pat_217c202,
  [sym_pat_239fcac] = sym_pat_239fcac,
  [sym_pat_2b37705] = sym_pat_2b37705,
  [sym_pat_4128122] = sym_pat_4128122,
  [sym_pat_433746d] = sym_pat_433746d,
  [sym_pat_441cd81] = sym_pat_441cd81,
  [sym_pat_4a2f38a] = sym_pat_4a2f38a,
  [sym_pat_4b81dfc] = sym_pat_4b81dfc,
  [sym_pat_4de4cb9] = sym_pat_4de4cb9,
  [sym_pat_4fd4a56] = sym_pat_4fd4a56,
  [sym_pat_56bd329] = sym_pat_56bd329,
  [sym_pat_5cf3c2c] = sym_pat_5cf3c2c,
  [sym_pat_5eaae97] = sym_pat_5eaae97,
  [sym_pat_660c06c] = sym_pat_660c06c,
  [sym_pat_79b8891] = sym_pat_79b8891,
  [sym_pat_808c5a1] = sym_pat_808c5a1,
  [sym_pat_845d48b] = sym_pat_845d48b,
  [sym_pat_8713919] = sym_pat_8713919,
  [sym_pat_9374c10] = sym_pat_9374c10,
  [sym_pat_9818882] = sym_pat_9818882,
  [sym_pat_985c208] = sym_pat_985c208,
  [sym_pat_9a14b5c] = sym_pat_9a14b5c,
  [sym_pat_9c0a769] = sym_pat_9c0a769,
  [sym_pat_a368b76] = sym_pat_a368b76,
  [sym_pat_a6040bb] = sym_pat_a6040bb,
  [sym_pat_aa82a08] = sym_pat_aa82a08,
  [sym_pat_ed84199] = sym_pat_ed84199,
  [sym_pat_f05eb95] = sym_pat_f05eb95,
  [sym_pat_f2a2f8f] = sym_pat_f2a2f8f,
  [sym_pat_fd0037e] = sym_pat_fd0037e,
  [sym_source_file] = sym_source_file,
  [sym_instruction] = sym_instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_user_name_or_group] = sym_user_name_or_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_stopsignal_value] = sym_stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym_spaced_env_pair] = sym_spaced_env_pair,
  [sym_env_key] = sym_env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_comment_line] = sym_comment_line,
  [sym_anon_comment] = sym_anon_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_semgrep_double_curly_metavariable] = sym_semgrep_double_curly_metavariable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_user_name_or_group_repeat1] = aux_sym_user_name_or_group_repeat1,
  [aux_sym_stopsignal_value_repeat1] = aux_sym_stopsignal_value_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_non_newline_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_semgrep_metavariable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_24a1611] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_030af88] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_1c663f5] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_239fcac] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_433746d] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4b81dfc] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_56bd329] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_5cf3c2c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_5eaae97] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_660c06c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_79b8891] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_808c5a1] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_845d48b] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9374c10] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9818882] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_985c208] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9c0a769] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_a368b76] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_a6040bb] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_aa82a08] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_ed84199] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_f05eb95] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_f2a2f8f] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_fd0037e] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_anon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_double_curly_metavariable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_user, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_key, 0},
    {field_value, 2},
  [11] =
    {field_as, 3},
  [12] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [15] =
    {field_default, 3},
    {field_name, 1},
  [17] =
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(231);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(214);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(204);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(245);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(257);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(245);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_semgrep_metavariable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(172);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_845d48b);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_pat_fd0037e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 160},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 160},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 160},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 30},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 38},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 47},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 160},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 160},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 160},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 160},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 160},
  [121] = {.lex_state = 45},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 45},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 45},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 45},
  [139] = {.lex_state = 160},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 160},
  [142] = {.lex_state = 160},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 160},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 25},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 52},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 39},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 160},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 160},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 39},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 160},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 160},
  [194] = {.lex_state = 33},
  [195] = {.lex_state = 234},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 160},
  [198] = {.lex_state = 234},
  [199] = {.lex_state = 33},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 52},
  [203] = {.lex_state = 33},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 33},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 33},
  [208] = {.lex_state = 234},
  [209] = {.lex_state = 33},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 33},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 33},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 33},
  [220] = {.lex_state = 53},
  [221] = {.lex_state = 160},
  [222] = {.lex_state = 53},
  [223] = {.lex_state = 160},
  [224] = {.lex_state = 53},
  [225] = {.lex_state = 53},
  [226] = {.lex_state = 53},
  [227] = {.lex_state = 53},
  [228] = {.lex_state = 53},
  [229] = {.lex_state = 53},
  [230] = {.lex_state = 53},
  [231] = {.lex_state = 53},
  [232] = {.lex_state = 53},
  [233] = {.lex_state = 49},
  [234] = {.lex_state = 49},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_semgrep_metavariable_name] = ACTIONS(1),
    [sym_imm_tok_pat_f43f746] = ACTIONS(1),
    [sym_pat_1167a92] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(190),
    [sym_instruction] = STATE(218),
    [sym_from_instruction] = STATE(189),
    [sym_run_instruction] = STATE(189),
    [sym_cmd_instruction] = STATE(189),
    [sym_label_instruction] = STATE(189),
    [sym_expose_instruction] = STATE(189),
    [sym_env_instruction] = STATE(189),
    [sym_add_instruction] = STATE(189),
    [sym_copy_instruction] = STATE(189),
    [sym_entrypoint_instruction] = STATE(189),
    [sym_volume_instruction] = STATE(189),
    [sym_user_instruction] = STATE(189),
    [sym_workdir_instruction] = STATE(189),
    [sym_arg_instruction] = STATE(189),
    [sym_onbuild_instruction] = STATE(189),
    [sym_stopsignal_instruction] = STATE(189),
    [sym_healthcheck_instruction] = STATE(189),
    [sym_shell_instruction] = STATE(189),
    [sym_maintainer_instruction] = STATE(189),
    [sym_cross_build_instruction] = STATE(189),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_pat_030af88] = ACTIONS(9),
    [sym_pat_1c663f5] = ACTIONS(11),
    [sym_pat_239fcac] = ACTIONS(13),
    [sym_pat_433746d] = ACTIONS(15),
    [sym_pat_4a2f38a] = ACTIONS(17),
    [sym_pat_56bd329] = ACTIONS(19),
    [sym_pat_5cf3c2c] = ACTIONS(21),
    [sym_pat_5eaae97] = ACTIONS(23),
    [sym_pat_808c5a1] = ACTIONS(25),
    [sym_pat_9374c10] = ACTIONS(27),
    [sym_pat_9818882] = ACTIONS(29),
    [sym_pat_985c208] = ACTIONS(31),
    [sym_pat_9c0a769] = ACTIONS(33),
    [sym_pat_a368b76] = ACTIONS(35),
    [sym_pat_a6040bb] = ACTIONS(37),
    [sym_pat_aa82a08] = ACTIONS(39),
    [sym_pat_ed84199] = ACTIONS(41),
    [sym_pat_f2a2f8f] = ACTIONS(43),
    [sym_pat_fd0037e] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_pat_030af88,
    ACTIONS(55), 1,
      sym_pat_1c663f5,
    ACTIONS(58), 1,
      sym_pat_239fcac,
    ACTIONS(61), 1,
      sym_pat_433746d,
    ACTIONS(64), 1,
      sym_pat_4a2f38a,
    ACTIONS(67), 1,
      sym_pat_56bd329,
    ACTIONS(70), 1,
      sym_pat_5cf3c2c,
    ACTIONS(73), 1,
      sym_pat_5eaae97,
    ACTIONS(76), 1,
      sym_pat_808c5a1,
    ACTIONS(79), 1,
      sym_pat_9374c10,
    ACTIONS(82), 1,
      sym_pat_9818882,
    ACTIONS(85), 1,
      sym_pat_985c208,
    ACTIONS(88), 1,
      sym_pat_9c0a769,
    ACTIONS(91), 1,
      sym_pat_a368b76,
    ACTIONS(94), 1,
      sym_pat_a6040bb,
    ACTIONS(97), 1,
      sym_pat_aa82a08,
    ACTIONS(100), 1,
      sym_pat_ed84199,
    ACTIONS(103), 1,
      sym_pat_f2a2f8f,
    ACTIONS(106), 1,
      sym_pat_fd0037e,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym_instruction,
    STATE(189), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [94] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_pat_030af88,
    ACTIONS(11), 1,
      sym_pat_1c663f5,
    ACTIONS(13), 1,
      sym_pat_239fcac,
    ACTIONS(15), 1,
      sym_pat_433746d,
    ACTIONS(17), 1,
      sym_pat_4a2f38a,
    ACTIONS(19), 1,
      sym_pat_56bd329,
    ACTIONS(21), 1,
      sym_pat_5cf3c2c,
    ACTIONS(23), 1,
      sym_pat_5eaae97,
    ACTIONS(25), 1,
      sym_pat_808c5a1,
    ACTIONS(27), 1,
      sym_pat_9374c10,
    ACTIONS(29), 1,
      sym_pat_9818882,
    ACTIONS(31), 1,
      sym_pat_985c208,
    ACTIONS(33), 1,
      sym_pat_9c0a769,
    ACTIONS(35), 1,
      sym_pat_a368b76,
    ACTIONS(37), 1,
      sym_pat_a6040bb,
    ACTIONS(39), 1,
      sym_pat_aa82a08,
    ACTIONS(41), 1,
      sym_pat_ed84199,
    ACTIONS(43), 1,
      sym_pat_f2a2f8f,
    ACTIONS(45), 1,
      sym_pat_fd0037e,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym_instruction,
    STATE(189), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [188] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      sym_pat_030af88,
    ACTIONS(11), 1,
      sym_pat_1c663f5,
    ACTIONS(13), 1,
      sym_pat_239fcac,
    ACTIONS(15), 1,
      sym_pat_433746d,
    ACTIONS(17), 1,
      sym_pat_4a2f38a,
    ACTIONS(19), 1,
      sym_pat_56bd329,
    ACTIONS(21), 1,
      sym_pat_5cf3c2c,
    ACTIONS(23), 1,
      sym_pat_5eaae97,
    ACTIONS(25), 1,
      sym_pat_808c5a1,
    ACTIONS(27), 1,
      sym_pat_9374c10,
    ACTIONS(29), 1,
      sym_pat_9818882,
    ACTIONS(31), 1,
      sym_pat_985c208,
    ACTIONS(33), 1,
      sym_pat_9c0a769,
    ACTIONS(35), 1,
      sym_pat_a368b76,
    ACTIONS(37), 1,
      sym_pat_a6040bb,
    ACTIONS(39), 1,
      sym_pat_aa82a08,
    ACTIONS(41), 1,
      sym_pat_ed84199,
    ACTIONS(43), 1,
      sym_pat_f2a2f8f,
    ACTIONS(45), 1,
      sym_pat_fd0037e,
    STATE(173), 1,
      sym_instruction,
    STATE(189), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [273] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 21,
      ts_builtin_sym_end,
      sym_comment,
      sym_pat_030af88,
      sym_pat_1c663f5,
      sym_pat_239fcac,
      sym_pat_433746d,
      sym_pat_4a2f38a,
      sym_pat_56bd329,
      sym_pat_5cf3c2c,
      sym_pat_5eaae97,
      sym_pat_808c5a1,
      sym_pat_9374c10,
      sym_pat_9818882,
      sym_pat_985c208,
      sym_pat_9c0a769,
      sym_pat_a368b76,
      sym_pat_a6040bb,
      sym_pat_aa82a08,
      sym_pat_ed84199,
      sym_pat_f2a2f8f,
      sym_pat_fd0037e,
  [300] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(117), 1,
      sym_pat_f05eb95,
    STATE(176), 1,
      sym_shell_fragment,
    STATE(204), 1,
      sym_anon_comment,
    ACTIONS(115), 2,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
    STATE(15), 2,
      sym_comment_line,
      aux_sym_shell_command_repeat1,
    STATE(25), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
  [331] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(117), 1,
      sym_pat_f05eb95,
    STATE(204), 1,
      sym_anon_comment,
    STATE(206), 1,
      sym_shell_fragment,
    ACTIONS(115), 2,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
    STATE(6), 2,
      sym_comment_line,
      aux_sym_shell_command_repeat1,
    STATE(25), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
  [362] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(117), 1,
      sym_pat_f05eb95,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_shell_fragment,
    ACTIONS(115), 2,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
    STATE(25), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
    STATE(160), 2,
      sym_string_array,
      sym_shell_command,
  [390] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(117), 1,
      sym_pat_f05eb95,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_shell_fragment,
    ACTIONS(115), 2,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
    STATE(25), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
    STATE(177), 2,
      sym_string_array,
      sym_shell_command,
  [418] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(117), 1,
      sym_pat_f05eb95,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_shell_fragment,
    ACTIONS(115), 2,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
    STATE(25), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
    STATE(171), 2,
      sym_string_array,
      sym_shell_command,
  [446] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(26), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(124), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [468] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_DASH_DASH,
    ACTIONS(131), 1,
      sym_pat_2b37705,
    STATE(48), 1,
      sym_image_name,
    STATE(49), 1,
      sym_param,
    STATE(155), 1,
      sym_image_spec,
    STATE(16), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [494] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(216), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [516] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(146), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [538] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      sym_pat_f05eb95,
    STATE(204), 1,
      sym_anon_comment,
    STATE(15), 2,
      sym_comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(142), 3,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
  [560] = 6,
    ACTIONS(148), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(152), 1,
      sym_pat_2b37705,
    ACTIONS(154), 1,
      sym_pat_79b8891,
    STATE(17), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(146), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [582] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      sym_pat_2b37705,
    ACTIONS(164), 1,
      sym_pat_79b8891,
    STATE(17), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(156), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [604] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(192), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [626] = 5,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(19), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(173), 3,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [645] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(182), 1,
      sym_pat_79b8891,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(24), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [666] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym_pat_845d48b,
    ACTIONS(189), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(21), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [687] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(200), 1,
      sym_pat_845d48b,
    ACTIONS(198), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(21), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [708] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      sym_pat_4128122,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [729] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(216), 1,
      sym_pat_79b8891,
    ACTIONS(208), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(24), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [750] = 5,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 1,
      sym_line_continuation,
    STATE(19), 2,
      sym_semgrep_double_curly_metavariable,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(222), 3,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [769] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      sym_pat_4128122,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(226), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [790] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      sym_pat_0c7fc22,
    ACTIONS(228), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(34), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [808] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym_escape_sequence,
    ACTIONS(240), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(46), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [828] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(244), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      sym_pat_660c06c,
    ACTIONS(242), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(29), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [846] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_pat_1167a92,
    STATE(37), 1,
      sym_expansion,
    STATE(110), 1,
      sym_path,
    STATE(180), 1,
      sym_string_array,
  [868] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(259), 1,
      sym_pat_217c202,
    STATE(31), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [886] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      sym_escape_sequence,
    ACTIONS(240), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [906] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(268), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(28), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [926] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      sym_pat_0c7fc22,
    ACTIONS(270), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(34), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [944] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      sym_escape_sequence,
    ACTIONS(240), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [964] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_escape_sequence,
    ACTIONS(284), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(35), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [984] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(288), 1,
      sym_pat_0c7fc22,
    ACTIONS(286), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(27), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1002] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(296), 1,
      sym_pat_79b8891,
    STATE(47), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1022] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(300), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1036] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(306), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(32), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1056] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      anon_sym_DASH_DASH,
    ACTIONS(312), 1,
      sym_pat_1167a92,
    STATE(59), 1,
      sym_expansion,
    STATE(85), 1,
      sym_param,
    STATE(196), 1,
      sym_path,
  [1078] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(316), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1092] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      sym_pat_239fcac,
    ACTIONS(318), 1,
      anon_sym_NONE,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH,
    STATE(181), 1,
      sym_cmd_instruction,
    STATE(51), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1112] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(324), 1,
      anon_sym_DOLLAR,
    ACTIONS(326), 1,
      sym_pat_660c06c,
    ACTIONS(322), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(29), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [1130] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR,
    ACTIONS(332), 1,
      sym_pat_217c202,
    STATE(31), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1148] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    ACTIONS(342), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(46), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1168] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(353), 1,
      sym_pat_79b8891,
    STATE(47), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1188] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 1,
      anon_sym_COLON,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      sym_pat_79b8891,
    STATE(90), 1,
      sym_image_tag,
    STATE(122), 1,
      sym_image_digest,
  [1210] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      sym_pat_2b37705,
    STATE(48), 1,
      sym_image_name,
    STATE(133), 1,
      sym_image_spec,
    STATE(16), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [1230] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      anon_sym_DASH_DASH,
    ACTIONS(312), 1,
      sym_pat_1167a92,
    STATE(59), 1,
      sym_expansion,
    STATE(100), 1,
      sym_param,
    STATE(174), 1,
      sym_path,
  [1252] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      sym_pat_239fcac,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH,
    STATE(184), 1,
      sym_cmd_instruction,
    STATE(82), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1269] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1282] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(300), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1295] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(324), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 1,
      sym_pat_441cd81,
    STATE(77), 2,
      sym_expansion,
      aux_sym_stopsignal_value_repeat1,
  [1312] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      sym_non_newline_whitespace,
    ACTIONS(372), 1,
      sym_pat_0c7fc22,
    STATE(55), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1329] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      sym_non_newline_whitespace,
    ACTIONS(379), 1,
      sym_pat_0c7fc22,
    STATE(55), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1346] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(316), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1359] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(383), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
    ACTIONS(385), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1374] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    ACTIONS(387), 1,
      sym_non_newline_whitespace,
    ACTIONS(389), 1,
      sym_pat_0c7fc22,
    STATE(56), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1391] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(316), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1404] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    ACTIONS(396), 1,
      sym_pat_9a14b5c,
    STATE(61), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 2,
      anon_sym_POUND,
      sym_pat_f05eb95,
    ACTIONS(401), 3,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
  [1434] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      sym_pat_660c06c,
    STATE(187), 1,
      sym_user_name_or_group,
    STATE(44), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [1451] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      sym_pat_845d48b,
    STATE(135), 1,
      sym_env_key,
    STATE(185), 1,
      sym_spaced_env_pair,
    STATE(69), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1468] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(300), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1481] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      sym_pat_441cd81,
    STATE(166), 1,
      sym_stopsignal_value,
    STATE(54), 2,
      sym_expansion,
      aux_sym_stopsignal_value_repeat1,
  [1498] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      sym_pat_660c06c,
    STATE(151), 1,
      sym_user_name_or_group,
    STATE(44), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [1515] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(314), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1528] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      sym_pat_845d48b,
    STATE(182), 1,
      sym_env_key,
    STATE(70), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1545] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(417), 1,
      sym_pat_845d48b,
    STATE(182), 1,
      sym_env_key,
    STATE(70), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1562] = 2,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(422), 5,
      sym_line_continuation,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_semgrep_ellipsis,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [1573] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    ACTIONS(426), 1,
      sym_pat_9a14b5c,
    STATE(200), 1,
      sym_image_alias,
    STATE(80), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1590] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1603] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_pat_0c7fc22,
    STATE(78), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1620] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    ACTIONS(426), 1,
      sym_pat_9a14b5c,
    STATE(170), 1,
      sym_image_alias,
    STATE(80), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1637] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(432), 1,
      sym_pat_0c7fc22,
    STATE(74), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1654] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    ACTIONS(439), 1,
      sym_pat_441cd81,
    STATE(77), 2,
      sym_expansion,
      aux_sym_stopsignal_value_repeat1,
  [1671] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      sym_pat_0c7fc22,
    STATE(78), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1688] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      anon_sym_DOLLAR,
    ACTIONS(450), 1,
      sym_pat_217c202,
    STATE(45), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1703] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    ACTIONS(456), 1,
      sym_pat_9a14b5c,
    STATE(61), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1720] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(314), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1733] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH,
    ACTIONS(461), 1,
      sym_pat_239fcac,
    STATE(82), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1747] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [1759] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 1,
      sym_pat_4128122,
    STATE(84), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1773] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      sym_pat_1167a92,
    STATE(59), 1,
      sym_expansion,
    STATE(212), 1,
      sym_path,
  [1789] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_pat_1167a92,
    STATE(37), 1,
      sym_expansion,
    STATE(119), 1,
      sym_path,
  [1805] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      sym_pat_1167a92,
    STATE(76), 1,
      sym_expansion,
    STATE(169), 1,
      sym_path,
  [1821] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(472), 1,
      anon_sym_DOLLAR,
    ACTIONS(474), 1,
      sym_imm_tok_pat_bcfc287,
    STATE(20), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [1835] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      sym_imm_tok_pat_d2727a0,
    STATE(38), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1849] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(482), 1,
      sym_pat_79b8891,
    STATE(129), 1,
      sym_image_digest,
  [1865] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [1875] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(316), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1887] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      sym_pat_1167a92,
    STATE(76), 1,
      sym_expansion,
    STATE(165), 1,
      sym_path,
  [1903] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(300), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1915] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [1927] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 1,
      sym_pat_4128122,
    STATE(84), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1941] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      sym_pat_1167a92,
    STATE(76), 1,
      sym_expansion,
    STATE(188), 1,
      sym_path,
  [1957] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      sym_pat_1167a92,
    STATE(76), 1,
      sym_expansion,
    STATE(172), 1,
      sym_path,
  [1973] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(300), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [1983] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      sym_pat_1167a92,
    STATE(59), 1,
      sym_expansion,
    STATE(161), 1,
      sym_path,
  [1999] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      sym_pat_1167a92,
    STATE(76), 1,
      sym_expansion,
    STATE(186), 1,
      sym_path,
  [2015] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      sym_pat_4128122,
    STATE(96), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [2037] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2048] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 1,
      sym_non_newline_whitespace,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2059] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      sym_non_newline_whitespace,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2070] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_string_array_repeat1,
  [2083] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2094] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2105] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      sym_non_newline_whitespace,
    STATE(118), 1,
      aux_sym_volume_instruction_repeat1,
  [2118] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_double_quoted_string,
  [2131] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2142] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_string_array_repeat1,
  [2155] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2166] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_string_array_repeat1,
  [2179] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      sym_non_newline_whitespace,
    STATE(116), 1,
      aux_sym_volume_instruction_repeat1,
  [2192] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2203] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      sym_non_newline_whitespace,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(116), 1,
      aux_sym_volume_instruction_repeat1,
  [2216] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(513), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_double_quoted_string,
  [2234] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      sym_variable,
  [2244] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_pat_79b8891,
  [2254] = 3,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_continuation,
    STATE(123), 1,
      aux_sym_shell_command_repeat2,
  [2264] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      sym_pat_4128122,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 1,
      sym_variable,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_string_array,
  [2294] = 3,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      sym_line_continuation,
    STATE(123), 1,
      aux_sym_shell_command_repeat2,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 1,
      sym_variable,
  [2314] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      sym_pat_79b8891,
  [2324] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      sym_variable,
  [2334] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_variable,
  [2352] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      sym_pat_79b8891,
  [2362] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [2372] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(573), 1,
      sym_imm_tok_pat_3d340f6,
  [2382] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
    ACTIONS(577), 1,
      sym_variable,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      sym_variable,
  [2402] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      sym_variable,
  [2412] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2420] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      sym_variable,
  [2430] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(593), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(601), 1,
      sym_variable,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      sym_variable,
  [2476] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(609), 1,
      sym_pat_845d48b,
  [2486] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_DOLLAR,
    ACTIONS(613), 1,
      sym_pat_2b37705,
  [2504] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      sym_pat_4128122,
  [2514] = 3,
    ACTIONS(543), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_LF,
    STATE(127), 1,
      aux_sym_shell_command_repeat2,
  [2524] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [2534] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      sym_pat_4128122,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_DOLLAR,
    ACTIONS(613), 1,
      sym_pat_1167a92,
  [2554] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      sym_pat_845d48b,
  [2564] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_pat_79b8891,
  [2574] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      sym_pat_845d48b,
  [2584] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LF,
  [2591] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(631), 1,
      sym_imm_tok_pat_f6e1de8,
  [2598] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      anon_sym_LF,
  [2605] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_LF,
  [2612] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      sym_non_newline_whitespace,
  [2619] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym_imm_tok_pat_f43f746,
  [2626] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      anon_sym_LF,
  [2633] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(557), 1,
      anon_sym_EQ,
  [2640] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      anon_sym_LF,
  [2647] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_LF,
  [2654] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(647), 1,
      anon_sym_LF,
  [2661] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [2668] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      anon_sym_LF,
  [2675] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_LF,
  [2682] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      anon_sym_LF,
  [2689] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_LF,
  [2696] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      anon_sym_LF,
  [2703] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      sym_non_newline_whitespace,
  [2710] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      sym_semgrep_metavariable_name,
  [2717] = 2,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 1,
      sym_line_continuation,
  [2724] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      anon_sym_LF,
  [2731] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_LF,
  [2738] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      anon_sym_LF,
  [2745] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(675), 1,
      anon_sym_LF,
  [2752] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      anon_sym_LF,
  [2759] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(571), 1,
      anon_sym_EQ,
  [2766] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      sym_pat_8713919,
  [2773] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_LF,
  [2780] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(411), 1,
      anon_sym_LF,
  [2787] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_LF,
  [2794] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_LF,
  [2801] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_LF,
  [2808] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      anon_sym_LF,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      ts_builtin_sym_end,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      sym_pat_4de4cb9,
  [2829] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      anon_sym_LF,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_RBRACE_RBRACE,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
  [2850] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_pat_4fd4a56,
  [2857] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      sym_non_newline_whitespace,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      anon_sym_EQ,
  [2871] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      sym_pat_4fd4a56,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [2885] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_LF,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      sym_imm_tok_pat_f6e1de8,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      sym_imm_tok_pat_f6e1de8,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
  [2913] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_LF,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [2927] = 2,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      sym_line_continuation,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
  [2941] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      sym_pat_4fd4a56,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
  [2955] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_LF,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
  [2969] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      sym_non_newline_whitespace,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
  [2997] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      anon_sym_LF,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
  [3011] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(747), 1,
      anon_sym_LF,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
  [3025] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(751), 1,
      sym_pat_8713919,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_EQ,
  [3039] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(755), 1,
      sym_pat_8713919,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_EQ,
  [3053] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(759), 1,
      sym_pat_8713919,
  [3060] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      sym_pat_8713919,
  [3067] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(763), 1,
      sym_pat_8713919,
  [3074] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      sym_pat_8713919,
  [3081] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(767), 1,
      sym_pat_8713919,
  [3088] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      sym_pat_8713919,
  [3095] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      sym_pat_8713919,
  [3102] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      sym_pat_8713919,
  [3109] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(775), 1,
      sym_pat_8713919,
  [3116] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      sym_imm_tok_pat_f43f746,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(779), 1,
      sym_imm_tok_pat_f43f746,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 331,
  [SMALL_STATE(8)] = 362,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 446,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 538,
  [SMALL_STATE(16)] = 560,
  [SMALL_STATE(17)] = 582,
  [SMALL_STATE(18)] = 604,
  [SMALL_STATE(19)] = 626,
  [SMALL_STATE(20)] = 645,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 687,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 729,
  [SMALL_STATE(25)] = 750,
  [SMALL_STATE(26)] = 769,
  [SMALL_STATE(27)] = 790,
  [SMALL_STATE(28)] = 808,
  [SMALL_STATE(29)] = 828,
  [SMALL_STATE(30)] = 846,
  [SMALL_STATE(31)] = 868,
  [SMALL_STATE(32)] = 886,
  [SMALL_STATE(33)] = 906,
  [SMALL_STATE(34)] = 926,
  [SMALL_STATE(35)] = 944,
  [SMALL_STATE(36)] = 964,
  [SMALL_STATE(37)] = 984,
  [SMALL_STATE(38)] = 1002,
  [SMALL_STATE(39)] = 1022,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1056,
  [SMALL_STATE(42)] = 1078,
  [SMALL_STATE(43)] = 1092,
  [SMALL_STATE(44)] = 1112,
  [SMALL_STATE(45)] = 1130,
  [SMALL_STATE(46)] = 1148,
  [SMALL_STATE(47)] = 1168,
  [SMALL_STATE(48)] = 1188,
  [SMALL_STATE(49)] = 1210,
  [SMALL_STATE(50)] = 1230,
  [SMALL_STATE(51)] = 1252,
  [SMALL_STATE(52)] = 1269,
  [SMALL_STATE(53)] = 1282,
  [SMALL_STATE(54)] = 1295,
  [SMALL_STATE(55)] = 1312,
  [SMALL_STATE(56)] = 1329,
  [SMALL_STATE(57)] = 1346,
  [SMALL_STATE(58)] = 1359,
  [SMALL_STATE(59)] = 1374,
  [SMALL_STATE(60)] = 1391,
  [SMALL_STATE(61)] = 1404,
  [SMALL_STATE(62)] = 1421,
  [SMALL_STATE(63)] = 1434,
  [SMALL_STATE(64)] = 1451,
  [SMALL_STATE(65)] = 1468,
  [SMALL_STATE(66)] = 1481,
  [SMALL_STATE(67)] = 1498,
  [SMALL_STATE(68)] = 1515,
  [SMALL_STATE(69)] = 1528,
  [SMALL_STATE(70)] = 1545,
  [SMALL_STATE(71)] = 1562,
  [SMALL_STATE(72)] = 1573,
  [SMALL_STATE(73)] = 1590,
  [SMALL_STATE(74)] = 1603,
  [SMALL_STATE(75)] = 1620,
  [SMALL_STATE(76)] = 1637,
  [SMALL_STATE(77)] = 1654,
  [SMALL_STATE(78)] = 1671,
  [SMALL_STATE(79)] = 1688,
  [SMALL_STATE(80)] = 1703,
  [SMALL_STATE(81)] = 1720,
  [SMALL_STATE(82)] = 1733,
  [SMALL_STATE(83)] = 1747,
  [SMALL_STATE(84)] = 1759,
  [SMALL_STATE(85)] = 1773,
  [SMALL_STATE(86)] = 1789,
  [SMALL_STATE(87)] = 1805,
  [SMALL_STATE(88)] = 1821,
  [SMALL_STATE(89)] = 1835,
  [SMALL_STATE(90)] = 1849,
  [SMALL_STATE(91)] = 1865,
  [SMALL_STATE(92)] = 1875,
  [SMALL_STATE(93)] = 1887,
  [SMALL_STATE(94)] = 1903,
  [SMALL_STATE(95)] = 1915,
  [SMALL_STATE(96)] = 1927,
  [SMALL_STATE(97)] = 1941,
  [SMALL_STATE(98)] = 1957,
  [SMALL_STATE(99)] = 1973,
  [SMALL_STATE(100)] = 1983,
  [SMALL_STATE(101)] = 1999,
  [SMALL_STATE(102)] = 2015,
  [SMALL_STATE(103)] = 2026,
  [SMALL_STATE(104)] = 2037,
  [SMALL_STATE(105)] = 2048,
  [SMALL_STATE(106)] = 2059,
  [SMALL_STATE(107)] = 2070,
  [SMALL_STATE(108)] = 2083,
  [SMALL_STATE(109)] = 2094,
  [SMALL_STATE(110)] = 2105,
  [SMALL_STATE(111)] = 2118,
  [SMALL_STATE(112)] = 2131,
  [SMALL_STATE(113)] = 2142,
  [SMALL_STATE(114)] = 2155,
  [SMALL_STATE(115)] = 2166,
  [SMALL_STATE(116)] = 2179,
  [SMALL_STATE(117)] = 2192,
  [SMALL_STATE(118)] = 2203,
  [SMALL_STATE(119)] = 2216,
  [SMALL_STATE(120)] = 2224,
  [SMALL_STATE(121)] = 2234,
  [SMALL_STATE(122)] = 2244,
  [SMALL_STATE(123)] = 2254,
  [SMALL_STATE(124)] = 2264,
  [SMALL_STATE(125)] = 2274,
  [SMALL_STATE(126)] = 2284,
  [SMALL_STATE(127)] = 2294,
  [SMALL_STATE(128)] = 2304,
  [SMALL_STATE(129)] = 2314,
  [SMALL_STATE(130)] = 2324,
  [SMALL_STATE(131)] = 2334,
  [SMALL_STATE(132)] = 2342,
  [SMALL_STATE(133)] = 2352,
  [SMALL_STATE(134)] = 2362,
  [SMALL_STATE(135)] = 2372,
  [SMALL_STATE(136)] = 2382,
  [SMALL_STATE(137)] = 2392,
  [SMALL_STATE(138)] = 2402,
  [SMALL_STATE(139)] = 2412,
  [SMALL_STATE(140)] = 2420,
  [SMALL_STATE(141)] = 2430,
  [SMALL_STATE(142)] = 2438,
  [SMALL_STATE(143)] = 2446,
  [SMALL_STATE(144)] = 2456,
  [SMALL_STATE(145)] = 2466,
  [SMALL_STATE(146)] = 2476,
  [SMALL_STATE(147)] = 2486,
  [SMALL_STATE(148)] = 2494,
  [SMALL_STATE(149)] = 2504,
  [SMALL_STATE(150)] = 2514,
  [SMALL_STATE(151)] = 2524,
  [SMALL_STATE(152)] = 2534,
  [SMALL_STATE(153)] = 2544,
  [SMALL_STATE(154)] = 2554,
  [SMALL_STATE(155)] = 2564,
  [SMALL_STATE(156)] = 2574,
  [SMALL_STATE(157)] = 2584,
  [SMALL_STATE(158)] = 2591,
  [SMALL_STATE(159)] = 2598,
  [SMALL_STATE(160)] = 2605,
  [SMALL_STATE(161)] = 2612,
  [SMALL_STATE(162)] = 2619,
  [SMALL_STATE(163)] = 2626,
  [SMALL_STATE(164)] = 2633,
  [SMALL_STATE(165)] = 2640,
  [SMALL_STATE(166)] = 2647,
  [SMALL_STATE(167)] = 2654,
  [SMALL_STATE(168)] = 2661,
  [SMALL_STATE(169)] = 2668,
  [SMALL_STATE(170)] = 2675,
  [SMALL_STATE(171)] = 2682,
  [SMALL_STATE(172)] = 2689,
  [SMALL_STATE(173)] = 2696,
  [SMALL_STATE(174)] = 2703,
  [SMALL_STATE(175)] = 2710,
  [SMALL_STATE(176)] = 2717,
  [SMALL_STATE(177)] = 2724,
  [SMALL_STATE(178)] = 2731,
  [SMALL_STATE(179)] = 2738,
  [SMALL_STATE(180)] = 2745,
  [SMALL_STATE(181)] = 2752,
  [SMALL_STATE(182)] = 2759,
  [SMALL_STATE(183)] = 2766,
  [SMALL_STATE(184)] = 2773,
  [SMALL_STATE(185)] = 2780,
  [SMALL_STATE(186)] = 2787,
  [SMALL_STATE(187)] = 2794,
  [SMALL_STATE(188)] = 2801,
  [SMALL_STATE(189)] = 2808,
  [SMALL_STATE(190)] = 2815,
  [SMALL_STATE(191)] = 2822,
  [SMALL_STATE(192)] = 2829,
  [SMALL_STATE(193)] = 2836,
  [SMALL_STATE(194)] = 2843,
  [SMALL_STATE(195)] = 2850,
  [SMALL_STATE(196)] = 2857,
  [SMALL_STATE(197)] = 2864,
  [SMALL_STATE(198)] = 2871,
  [SMALL_STATE(199)] = 2878,
  [SMALL_STATE(200)] = 2885,
  [SMALL_STATE(201)] = 2892,
  [SMALL_STATE(202)] = 2899,
  [SMALL_STATE(203)] = 2906,
  [SMALL_STATE(204)] = 2913,
  [SMALL_STATE(205)] = 2920,
  [SMALL_STATE(206)] = 2927,
  [SMALL_STATE(207)] = 2934,
  [SMALL_STATE(208)] = 2941,
  [SMALL_STATE(209)] = 2948,
  [SMALL_STATE(210)] = 2955,
  [SMALL_STATE(211)] = 2962,
  [SMALL_STATE(212)] = 2969,
  [SMALL_STATE(213)] = 2976,
  [SMALL_STATE(214)] = 2983,
  [SMALL_STATE(215)] = 2990,
  [SMALL_STATE(216)] = 2997,
  [SMALL_STATE(217)] = 3004,
  [SMALL_STATE(218)] = 3011,
  [SMALL_STATE(219)] = 3018,
  [SMALL_STATE(220)] = 3025,
  [SMALL_STATE(221)] = 3032,
  [SMALL_STATE(222)] = 3039,
  [SMALL_STATE(223)] = 3046,
  [SMALL_STATE(224)] = 3053,
  [SMALL_STATE(225)] = 3060,
  [SMALL_STATE(226)] = 3067,
  [SMALL_STATE(227)] = 3074,
  [SMALL_STATE(228)] = 3081,
  [SMALL_STATE(229)] = 3088,
  [SMALL_STATE(230)] = 3095,
  [SMALL_STATE(231)] = 3102,
  [SMALL_STATE(232)] = 3109,
  [SMALL_STATE(233)] = 3116,
  [SMALL_STATE(234)] = 3123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(208),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(125),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(17),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(175),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(137),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(143),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(23),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(145),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(24),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(128),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(121),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(58),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(136),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(34),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(46),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(46),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(130),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(47),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(138),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(55),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(144),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(61),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_line, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(164),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semgrep_double_curly_metavariable, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semgrep_double_curly_metavariable, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(128),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(77),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(132),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(78),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(234),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(168),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(120),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(86),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(7),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [691] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
