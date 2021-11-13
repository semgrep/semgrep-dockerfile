#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 232
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  sym_semgrep_ellipsis = 23,
  sym_imm_tok_pat_24a1611 = 24,
  sym_imm_tok_pat_3d340f6 = 25,
  sym_imm_tok_pat_589b0f8 = 26,
  sym_imm_tok_pat_bcfc287 = 27,
  sym_imm_tok_pat_d2727a0 = 28,
  sym_imm_tok_pat_f43f746 = 29,
  sym_imm_tok_pat_f6e1de8 = 30,
  sym_pat_030af88 = 31,
  sym_pat_0c7fc22 = 32,
  sym_pat_1167a92 = 33,
  sym_pat_1c663f5 = 34,
  sym_pat_217c202 = 35,
  sym_pat_239fcac = 36,
  sym_pat_2b37705 = 37,
  sym_pat_4128122 = 38,
  sym_pat_433746d = 39,
  sym_pat_441cd81 = 40,
  sym_pat_4a2f38a = 41,
  sym_pat_4b81dfc = 42,
  sym_pat_4de4cb9 = 43,
  sym_pat_4fd4a56 = 44,
  sym_pat_56bd329 = 45,
  sym_pat_5cf3c2c = 46,
  sym_pat_5eaae97 = 47,
  sym_pat_660c06c = 48,
  sym_pat_79b8891 = 49,
  sym_pat_808c5a1 = 50,
  sym_pat_845d48b = 51,
  sym_pat_8713919 = 52,
  sym_pat_9374c10 = 53,
  sym_pat_9818882 = 54,
  sym_pat_985c208 = 55,
  sym_pat_9a14b5c = 56,
  sym_pat_9c0a769 = 57,
  sym_pat_a368b76 = 58,
  sym_pat_a6040bb = 59,
  sym_pat_aa82a08 = 60,
  sym_pat_ed84199 = 61,
  sym_pat_f05eb95 = 62,
  sym_pat_f2a2f8f = 63,
  sym_pat_fd0037e = 64,
  sym_source_file = 65,
  sym_instruction = 66,
  sym_from_instruction = 67,
  sym_run_instruction = 68,
  sym_cmd_instruction = 69,
  sym_label_instruction = 70,
  sym_expose_instruction = 71,
  sym_env_instruction = 72,
  sym_add_instruction = 73,
  sym_copy_instruction = 74,
  sym_entrypoint_instruction = 75,
  sym_volume_instruction = 76,
  sym_user_instruction = 77,
  sym_user_name_or_group = 78,
  sym_workdir_instruction = 79,
  sym_arg_instruction = 80,
  sym_onbuild_instruction = 81,
  sym_stopsignal_instruction = 82,
  sym_stopsignal_value = 83,
  sym_healthcheck_instruction = 84,
  sym_shell_instruction = 85,
  sym_maintainer_instruction = 86,
  sym_cross_build_instruction = 87,
  sym_path = 88,
  sym_expansion = 89,
  sym_env_pair = 90,
  sym_spaced_env_pair = 91,
  sym_env_key = 92,
  sym_expose_port = 93,
  sym_label_pair = 94,
  sym_image_spec = 95,
  sym_image_name = 96,
  sym_image_tag = 97,
  sym_image_digest = 98,
  sym_param = 99,
  sym_image_alias = 100,
  sym_string_array = 101,
  sym_shell_command = 102,
  sym_shell_fragment = 103,
  sym_comment_line = 104,
  sym_anon_comment = 105,
  sym_double_quoted_string = 106,
  sym_unquoted_string = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_label_instruction_repeat1 = 109,
  aux_sym_expose_instruction_repeat1 = 110,
  aux_sym_env_instruction_repeat1 = 111,
  aux_sym_volume_instruction_repeat1 = 112,
  aux_sym_user_name_or_group_repeat1 = 113,
  aux_sym_stopsignal_value_repeat1 = 114,
  aux_sym_healthcheck_instruction_repeat1 = 115,
  aux_sym_path_repeat1 = 116,
  aux_sym_image_name_repeat1 = 117,
  aux_sym_image_tag_repeat1 = 118,
  aux_sym_image_digest_repeat1 = 119,
  aux_sym_image_alias_repeat1 = 120,
  aux_sym_string_array_repeat1 = 121,
  aux_sym_shell_command_repeat1 = 122,
  aux_sym_shell_command_repeat2 = 123,
  aux_sym_shell_fragment_repeat1 = 124,
  aux_sym_double_quoted_string_repeat1 = 125,
  aux_sym_unquoted_string_repeat1 = 126,
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
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(194);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(194);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(210);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
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
          lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
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
          lookahead == 'g') ADVANCE(240);
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
          lookahead == 'k') ADVANCE(249);
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
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
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
          lookahead == 'm') ADVANCE(230);
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
          lookahead == 'n') ADVANCE(248);
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
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
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
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
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
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
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
          lookahead == 'y') ADVANCE(242);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
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
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '}') ADVANCE(170);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '}') ADVANCE(170);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
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
          lookahead == ' ') ADVANCE(188);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(180);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_845d48b);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 249:
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
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 160},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 160},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 160},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 160},
  [110] = {.lex_state = 160},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 160},
  [115] = {.lex_state = 160},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 43},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 47},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 47},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 160},
  [127] = {.lex_state = 47},
  [128] = {.lex_state = 160},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 47},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 47},
  [135] = {.lex_state = 47},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 160},
  [139] = {.lex_state = 47},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 47},
  [142] = {.lex_state = 160},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 47},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 47},
  [151] = {.lex_state = 47},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 160},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 226},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 160},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 53},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 160},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 160},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 54},
  [183] = {.lex_state = 160},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 39},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 39},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 160},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 53},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 160},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 53},
  [199] = {.lex_state = 160},
  [200] = {.lex_state = 160},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 160},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 160},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 160},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 160},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 160},
  [211] = {.lex_state = 226},
  [212] = {.lex_state = 160},
  [213] = {.lex_state = 226},
  [214] = {.lex_state = 160},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 160},
  [217] = {.lex_state = 54},
  [218] = {.lex_state = 160},
  [219] = {.lex_state = 54},
  [220] = {.lex_state = 160},
  [221] = {.lex_state = 54},
  [222] = {.lex_state = 54},
  [223] = {.lex_state = 54},
  [224] = {.lex_state = 54},
  [225] = {.lex_state = 54},
  [226] = {.lex_state = 54},
  [227] = {.lex_state = 54},
  [228] = {.lex_state = 54},
  [229] = {.lex_state = 54},
  [230] = {.lex_state = 51},
  [231] = {.lex_state = 51},
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
    [sym_imm_tok_pat_f43f746] = ACTIONS(1),
    [sym_pat_1167a92] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(207),
    [sym_instruction] = STATE(174),
    [sym_from_instruction] = STATE(215),
    [sym_run_instruction] = STATE(215),
    [sym_cmd_instruction] = STATE(215),
    [sym_label_instruction] = STATE(215),
    [sym_expose_instruction] = STATE(215),
    [sym_env_instruction] = STATE(215),
    [sym_add_instruction] = STATE(215),
    [sym_copy_instruction] = STATE(215),
    [sym_entrypoint_instruction] = STATE(215),
    [sym_volume_instruction] = STATE(215),
    [sym_user_instruction] = STATE(215),
    [sym_workdir_instruction] = STATE(215),
    [sym_arg_instruction] = STATE(215),
    [sym_onbuild_instruction] = STATE(215),
    [sym_stopsignal_instruction] = STATE(215),
    [sym_healthcheck_instruction] = STATE(215),
    [sym_shell_instruction] = STATE(215),
    [sym_maintainer_instruction] = STATE(215),
    [sym_cross_build_instruction] = STATE(215),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_semgrep_ellipsis] = ACTIONS(9),
    [sym_pat_030af88] = ACTIONS(11),
    [sym_pat_1c663f5] = ACTIONS(13),
    [sym_pat_239fcac] = ACTIONS(15),
    [sym_pat_433746d] = ACTIONS(17),
    [sym_pat_4a2f38a] = ACTIONS(19),
    [sym_pat_56bd329] = ACTIONS(21),
    [sym_pat_5cf3c2c] = ACTIONS(23),
    [sym_pat_5eaae97] = ACTIONS(25),
    [sym_pat_808c5a1] = ACTIONS(27),
    [sym_pat_9374c10] = ACTIONS(29),
    [sym_pat_9818882] = ACTIONS(31),
    [sym_pat_985c208] = ACTIONS(33),
    [sym_pat_9c0a769] = ACTIONS(35),
    [sym_pat_a368b76] = ACTIONS(37),
    [sym_pat_a6040bb] = ACTIONS(39),
    [sym_pat_aa82a08] = ACTIONS(41),
    [sym_pat_ed84199] = ACTIONS(43),
    [sym_pat_f2a2f8f] = ACTIONS(45),
    [sym_pat_fd0037e] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym_semgrep_ellipsis,
    ACTIONS(57), 1,
      sym_pat_030af88,
    ACTIONS(60), 1,
      sym_pat_1c663f5,
    ACTIONS(63), 1,
      sym_pat_239fcac,
    ACTIONS(66), 1,
      sym_pat_433746d,
    ACTIONS(69), 1,
      sym_pat_4a2f38a,
    ACTIONS(72), 1,
      sym_pat_56bd329,
    ACTIONS(75), 1,
      sym_pat_5cf3c2c,
    ACTIONS(78), 1,
      sym_pat_5eaae97,
    ACTIONS(81), 1,
      sym_pat_808c5a1,
    ACTIONS(84), 1,
      sym_pat_9374c10,
    ACTIONS(87), 1,
      sym_pat_9818882,
    ACTIONS(90), 1,
      sym_pat_985c208,
    ACTIONS(93), 1,
      sym_pat_9c0a769,
    ACTIONS(96), 1,
      sym_pat_a368b76,
    ACTIONS(99), 1,
      sym_pat_a6040bb,
    ACTIONS(102), 1,
      sym_pat_aa82a08,
    ACTIONS(105), 1,
      sym_pat_ed84199,
    ACTIONS(108), 1,
      sym_pat_f2a2f8f,
    ACTIONS(111), 1,
      sym_pat_fd0037e,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(174), 1,
      sym_instruction,
    STATE(215), 19,
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
  [97] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_semgrep_ellipsis,
    ACTIONS(11), 1,
      sym_pat_030af88,
    ACTIONS(13), 1,
      sym_pat_1c663f5,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(17), 1,
      sym_pat_433746d,
    ACTIONS(19), 1,
      sym_pat_4a2f38a,
    ACTIONS(21), 1,
      sym_pat_56bd329,
    ACTIONS(23), 1,
      sym_pat_5cf3c2c,
    ACTIONS(25), 1,
      sym_pat_5eaae97,
    ACTIONS(27), 1,
      sym_pat_808c5a1,
    ACTIONS(29), 1,
      sym_pat_9374c10,
    ACTIONS(31), 1,
      sym_pat_9818882,
    ACTIONS(33), 1,
      sym_pat_985c208,
    ACTIONS(35), 1,
      sym_pat_9c0a769,
    ACTIONS(37), 1,
      sym_pat_a368b76,
    ACTIONS(39), 1,
      sym_pat_a6040bb,
    ACTIONS(41), 1,
      sym_pat_aa82a08,
    ACTIONS(43), 1,
      sym_pat_ed84199,
    ACTIONS(45), 1,
      sym_pat_f2a2f8f,
    ACTIONS(47), 1,
      sym_pat_fd0037e,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(174), 1,
      sym_instruction,
    STATE(215), 19,
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
  [194] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      sym_semgrep_ellipsis,
    ACTIONS(11), 1,
      sym_pat_030af88,
    ACTIONS(13), 1,
      sym_pat_1c663f5,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(17), 1,
      sym_pat_433746d,
    ACTIONS(19), 1,
      sym_pat_4a2f38a,
    ACTIONS(21), 1,
      sym_pat_56bd329,
    ACTIONS(23), 1,
      sym_pat_5cf3c2c,
    ACTIONS(25), 1,
      sym_pat_5eaae97,
    ACTIONS(27), 1,
      sym_pat_808c5a1,
    ACTIONS(29), 1,
      sym_pat_9374c10,
    ACTIONS(31), 1,
      sym_pat_9818882,
    ACTIONS(33), 1,
      sym_pat_985c208,
    ACTIONS(35), 1,
      sym_pat_9c0a769,
    ACTIONS(37), 1,
      sym_pat_a368b76,
    ACTIONS(39), 1,
      sym_pat_a6040bb,
    ACTIONS(41), 1,
      sym_pat_aa82a08,
    ACTIONS(43), 1,
      sym_pat_ed84199,
    ACTIONS(45), 1,
      sym_pat_f2a2f8f,
    ACTIONS(47), 1,
      sym_pat_fd0037e,
    STATE(187), 1,
      sym_instruction,
    STATE(215), 19,
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
  [282] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      sym_comment,
      sym_semgrep_ellipsis,
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
  [310] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_POUND,
    STATE(83), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(160), 1,
      sym_shell_fragment,
    STATE(163), 1,
      sym_anon_comment,
    ACTIONS(118), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(31), 2,
      sym_comment_line,
      aux_sym_shell_command_repeat1,
  [334] = 6,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(126), 1,
      sym_pat_2b37705,
    ACTIONS(128), 1,
      sym_pat_79b8891,
    STATE(12), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(120), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [356] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(176), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [378] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(155), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [400] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_POUND,
    STATE(83), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_anon_comment,
    STATE(170), 1,
      sym_shell_fragment,
    ACTIONS(118), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(6), 2,
      sym_comment_line,
      aux_sym_shell_command_repeat1,
  [424] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(21), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(120), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [446] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      sym_pat_2b37705,
    ACTIONS(150), 1,
      sym_pat_79b8891,
    STATE(12), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [468] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(172), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [490] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      sym_pat_2b37705,
    STATE(46), 1,
      sym_image_name,
    STATE(47), 1,
      sym_param,
    STATE(148), 1,
      sym_image_spec,
    STATE(7), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [516] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(118), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(190), 2,
      sym_string_array,
      sym_shell_command,
  [537] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(166), 1,
      sym_pat_845d48b,
    ACTIONS(164), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(17), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [558] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(176), 1,
      sym_pat_845d48b,
    ACTIONS(173), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(17), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [579] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      sym_pat_4128122,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [600] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(118), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(201), 2,
      sym_string_array,
      sym_shell_command,
  [621] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    ACTIONS(188), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(190), 1,
      sym_pat_79b8891,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(23), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [642] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      sym_pat_4128122,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(194), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [663] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(118), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(185), 2,
      sym_string_array,
      sym_shell_command,
  [684] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(204), 1,
      sym_pat_79b8891,
    ACTIONS(196), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(23), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [705] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      sym_pat_0c7fc22,
    ACTIONS(206), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(45), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [723] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      sym_pat_217c202,
    STATE(30), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [741] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(220), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [755] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_escape_sequence,
    ACTIONS(228), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(32), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [775] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym_pat_660c06c,
    ACTIONS(230), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(28), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [793] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(240), 1,
      anon_sym_DOLLAR,
    ACTIONS(242), 1,
      sym_pat_660c06c,
    ACTIONS(238), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(28), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [811] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      sym_pat_217c202,
    STATE(30), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [829] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_anon_comment,
    ACTIONS(255), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(31), 2,
      sym_comment_line,
      aux_sym_shell_command_repeat1,
  [847] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym_escape_sequence,
    ACTIONS(265), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(32), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [867] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(272), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(274), 1,
      sym_pat_79b8891,
    STATE(34), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [887] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(284), 1,
      sym_pat_79b8891,
    STATE(34), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [907] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(286), 1,
      anon_sym_NONE,
    ACTIONS(288), 1,
      anon_sym_DASH_DASH,
    STATE(184), 1,
      sym_cmd_instruction,
    STATE(69), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [927] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_escape_sequence,
    ACTIONS(294), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(27), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [947] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      sym_pat_0c7fc22,
    ACTIONS(296), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(37), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [965] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(226), 1,
      sym_escape_sequence,
    ACTIONS(228), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [985] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(306), 1,
      anon_sym_DOLLAR,
    ACTIONS(308), 1,
      anon_sym_DASH_DASH,
    ACTIONS(310), 1,
      sym_pat_1167a92,
    STATE(75), 1,
      sym_expansion,
    STATE(91), 1,
      sym_param,
    STATE(186), 1,
      sym_path,
  [1007] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      sym_escape_sequence,
    ACTIONS(316), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(38), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1027] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    ACTIONS(320), 1,
      sym_pat_1167a92,
    STATE(24), 1,
      sym_expansion,
    STATE(116), 1,
      sym_path,
    STATE(203), 1,
      sym_string_array,
  [1049] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(306), 1,
      anon_sym_DOLLAR,
    ACTIONS(308), 1,
      anon_sym_DASH_DASH,
    ACTIONS(310), 1,
      sym_pat_1167a92,
    STATE(75), 1,
      sym_expansion,
    STATE(92), 1,
      sym_param,
    STATE(188), 1,
      sym_path,
  [1071] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(226), 1,
      sym_escape_sequence,
    ACTIONS(228), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1091] = 6,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      sym_escape_sequence,
    ACTIONS(328), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(43), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1111] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(332), 1,
      sym_pat_0c7fc22,
    ACTIONS(330), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(37), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1129] = 7,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      anon_sym_COLON,
    ACTIONS(338), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      sym_pat_79b8891,
    STATE(88), 1,
      sym_image_tag,
    STATE(125), 1,
      sym_image_digest,
  [1151] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(156), 1,
      sym_pat_2b37705,
    STATE(46), 1,
      sym_image_name,
    STATE(123), 1,
      sym_image_spec,
    STATE(7), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [1171] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(344), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1185] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      sym_pat_9a14b5c,
    STATE(77), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1202] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(220), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1215] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      sym_pat_0c7fc22,
    STATE(51), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1232] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      sym_pat_845d48b,
    STATE(183), 1,
      sym_env_key,
    STATE(71), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1249] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(366), 1,
      sym_pat_660c06c,
    STATE(161), 1,
      sym_user_name_or_group,
    STATE(29), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [1266] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(372), 1,
      sym_pat_0c7fc22,
    STATE(51), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1283] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(240), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(376), 1,
      sym_pat_441cd81,
    STATE(74), 2,
      sym_expansion,
      aux_sym_stopsignal_value_repeat1,
  [1300] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(378), 1,
      sym_pat_845d48b,
    STATE(154), 1,
      sym_env_key,
    STATE(205), 1,
      sym_spaced_env_pair,
    STATE(52), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1317] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      sym_pat_0c7fc22,
    STATE(54), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1334] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(218), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1347] = 4,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(386), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
    ACTIONS(388), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1362] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(220), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1375] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(366), 1,
      sym_pat_660c06c,
    STATE(143), 1,
      sym_user_name_or_group,
    STATE(29), 2,
      sym_expansion,
      aux_sym_user_name_or_group_repeat1,
  [1392] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(392), 1,
      sym_pat_9a14b5c,
    STATE(166), 1,
      sym_image_alias,
    STATE(49), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1409] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      sym_non_newline_whitespace,
    ACTIONS(394), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      sym_pat_0c7fc22,
    STATE(63), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1426] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(400), 1,
      anon_sym_DOLLAR,
    ACTIONS(402), 1,
      sym_pat_217c202,
    STATE(25), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1441] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(344), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1454] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(392), 1,
      sym_pat_9a14b5c,
    STATE(159), 1,
      sym_image_alias,
    STATE(49), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1471] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      sym_non_newline_whitespace,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_pat_0c7fc22,
    STATE(63), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1488] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(344), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1501] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(288), 1,
      anon_sym_DASH_DASH,
    STATE(177), 1,
      sym_cmd_instruction,
    STATE(94), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1518] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(218), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1531] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      sym_pat_845d48b,
    STATE(183), 1,
      sym_env_key,
    STATE(71), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1548] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(342), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1561] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(342), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1574] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      sym_pat_441cd81,
    STATE(74), 2,
      sym_expansion,
      aux_sym_stopsignal_value_repeat1,
  [1591] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      sym_non_newline_whitespace,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(421), 1,
      sym_pat_0c7fc22,
    STATE(67), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1608] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      sym_pat_441cd81,
    STATE(195), 1,
      sym_stopsignal_value,
    STATE(55), 2,
      sym_expansion,
      aux_sym_stopsignal_value_repeat1,
  [1625] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_pat_9a14b5c,
    STATE(77), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1642] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(344), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [1652] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    ACTIONS(320), 1,
      sym_pat_1167a92,
    STATE(24), 1,
      sym_expansion,
    STATE(136), 1,
      sym_path,
  [1668] = 4,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(437), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [1682] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(220), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [1692] = 4,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      sym_pat_4128122,
    STATE(82), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1706] = 4,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(447), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(449), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [1720] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(344), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1732] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(220), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1744] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      sym_imm_tok_pat_bcfc287,
    STATE(20), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [1758] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      anon_sym_DOLLAR,
    ACTIONS(457), 1,
      sym_imm_tok_pat_d2727a0,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1772] = 5,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(338), 1,
      anon_sym_AT,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      sym_pat_79b8891,
    STATE(122), 1,
      sym_image_digest,
  [1788] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      sym_pat_1167a92,
    STATE(57), 1,
      sym_expansion,
    STATE(168), 1,
      sym_path,
  [1804] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      sym_pat_1167a92,
    STATE(57), 1,
      sym_expansion,
    STATE(167), 1,
      sym_path,
  [1820] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(306), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      sym_pat_1167a92,
    STATE(75), 1,
      sym_expansion,
    STATE(178), 1,
      sym_path,
  [1836] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(306), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      sym_pat_1167a92,
    STATE(75), 1,
      sym_expansion,
    STATE(179), 1,
      sym_path,
  [1852] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      sym_pat_1167a92,
    STATE(57), 1,
      sym_expansion,
    STATE(156), 1,
      sym_path,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(467), 1,
      anon_sym_DASH_DASH,
    ACTIONS(470), 1,
      sym_pat_239fcac,
    STATE(94), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1882] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      sym_pat_1167a92,
    STATE(57), 1,
      sym_expansion,
    STATE(157), 1,
      sym_path,
  [1898] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [1910] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [1922] = 4,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(472), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      sym_pat_4128122,
    STATE(82), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1936] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      sym_pat_1167a92,
    STATE(57), 1,
      sym_expansion,
    STATE(162), 1,
      sym_path,
  [1952] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [1963] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(478), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [1974] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [1985] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(480), 1,
      sym_pat_4128122,
    STATE(98), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [2007] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2018] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      sym_non_newline_whitespace,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2029] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2040] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2051] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_string_array_repeat1,
  [2064] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_string_array_repeat1,
  [2077] = 4,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(490), 1,
      sym_non_newline_whitespace,
    STATE(113), 1,
      aux_sym_volume_instruction_repeat1,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2099] = 4,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(496), 1,
      sym_non_newline_whitespace,
    STATE(113), 1,
      aux_sym_volume_instruction_repeat1,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_string_array_repeat1,
  [2125] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_double_quoted_string,
  [2138] = 4,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(490), 1,
      sym_non_newline_whitespace,
    ACTIONS(508), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_volume_instruction_repeat1,
  [2151] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      sym_non_newline_whitespace,
    ACTIONS(344), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2162] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    ACTIONS(512), 1,
      sym_variable,
  [2172] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(514), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [2180] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(516), 1,
      anon_sym_LF,
    ACTIONS(518), 1,
      sym_pat_4128122,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      sym_variable,
  [2200] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_pat_79b8891,
  [2210] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_pat_79b8891,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(534), 1,
      sym_variable,
  [2230] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 1,
      sym_pat_79b8891,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 1,
      sym_variable,
  [2258] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2266] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      sym_line_continuation,
    STATE(133), 1,
      aux_sym_shell_command_repeat2,
  [2276] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      sym_variable,
  [2286] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(189), 1,
      sym_string_array,
  [2296] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_DOLLAR,
    ACTIONS(556), 1,
      sym_pat_2b37705,
  [2306] = 3,
    ACTIONS(548), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_LF,
    STATE(137), 1,
      aux_sym_shell_command_repeat2,
  [2316] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_variable,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
  [2336] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(494), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2344] = 3,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(570), 1,
      sym_line_continuation,
    STATE(137), 1,
      aux_sym_shell_command_repeat2,
  [2354] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_double_quoted_string,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      sym_variable,
  [2374] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      sym_pat_845d48b,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 1,
      sym_variable,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2402] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [2412] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      sym_pat_845d48b,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_DOLLAR,
    ACTIONS(556), 1,
      sym_pat_1167a92,
  [2432] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      anon_sym_EQ,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
  [2452] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      sym_pat_79b8891,
  [2462] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      sym_pat_4128122,
  [2472] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      sym_variable,
  [2482] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      sym_variable,
  [2492] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      sym_pat_4128122,
  [2502] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [2510] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_EQ,
    ACTIONS(613), 1,
      sym_imm_tok_pat_3d340f6,
  [2520] = 3,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      sym_pat_845d48b,
  [2530] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      anon_sym_LF,
  [2537] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      anon_sym_LF,
  [2544] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(623), 1,
      anon_sym_LF,
  [2551] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(625), 1,
      anon_sym_LF,
  [2558] = 2,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      sym_line_continuation,
  [2565] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(631), 1,
      anon_sym_LF,
  [2572] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      anon_sym_LF,
  [2579] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_LF,
  [2586] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_LF,
  [2593] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym_pat_4fd4a56,
  [2600] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      anon_sym_LF,
  [2607] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      anon_sym_LF,
  [2614] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_LF,
  [2621] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      anon_sym_EQ,
  [2628] = 2,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      sym_line_continuation,
  [2635] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      sym_imm_tok_pat_f6e1de8,
  [2642] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      anon_sym_LF,
  [2649] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_LF,
  [2656] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      anon_sym_LF,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
  [2670] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      anon_sym_LF,
  [2677] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      anon_sym_LF,
  [2684] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      sym_non_newline_whitespace,
  [2691] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      sym_non_newline_whitespace,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_EQ,
  [2705] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      anon_sym_LF,
  [2712] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      sym_pat_8713919,
  [2719] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_EQ,
  [2726] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      anon_sym_LF,
  [2733] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(675), 1,
      anon_sym_LF,
  [2740] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      sym_non_newline_whitespace,
  [2747] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_LF,
  [2754] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      sym_non_newline_whitespace,
  [2761] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_LF,
  [2768] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_LF,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [2782] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      sym_imm_tok_pat_f43f746,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      sym_imm_tok_pat_f6e1de8,
  [2796] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_LF,
  [2803] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      anon_sym_LF,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
  [2817] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_LF,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_imm_tok_pat_f6e1de8,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_EQ,
  [2838] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
  [2845] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      anon_sym_LF,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [2859] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_LF,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
  [2873] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(360), 1,
      anon_sym_LF,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
  [2887] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
  [2894] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      sym_pat_4de4cb9,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [2915] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      sym_pat_4fd4a56,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
  [2929] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      sym_pat_4fd4a56,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
  [2943] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      anon_sym_LF,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
  [2957] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      sym_pat_8713919,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      anon_sym_EQ,
  [2971] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      sym_pat_8713919,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      anon_sym_EQ,
  [2985] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      sym_pat_8713919,
  [2992] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(747), 1,
      sym_pat_8713919,
  [2999] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      sym_pat_8713919,
  [3006] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(751), 1,
      sym_pat_8713919,
  [3013] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      sym_pat_8713919,
  [3020] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(755), 1,
      sym_pat_8713919,
  [3027] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      sym_pat_8713919,
  [3034] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(759), 1,
      sym_pat_8713919,
  [3041] = 2,
    ACTIONS(124), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      sym_pat_8713919,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(763), 1,
      sym_imm_tok_pat_f43f746,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      sym_imm_tok_pat_f43f746,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 334,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 378,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 446,
  [SMALL_STATE(13)] = 468,
  [SMALL_STATE(14)] = 490,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 537,
  [SMALL_STATE(17)] = 558,
  [SMALL_STATE(18)] = 579,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 621,
  [SMALL_STATE(21)] = 642,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 684,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 723,
  [SMALL_STATE(26)] = 741,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 775,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 811,
  [SMALL_STATE(31)] = 829,
  [SMALL_STATE(32)] = 847,
  [SMALL_STATE(33)] = 867,
  [SMALL_STATE(34)] = 887,
  [SMALL_STATE(35)] = 907,
  [SMALL_STATE(36)] = 927,
  [SMALL_STATE(37)] = 947,
  [SMALL_STATE(38)] = 965,
  [SMALL_STATE(39)] = 985,
  [SMALL_STATE(40)] = 1007,
  [SMALL_STATE(41)] = 1027,
  [SMALL_STATE(42)] = 1049,
  [SMALL_STATE(43)] = 1071,
  [SMALL_STATE(44)] = 1091,
  [SMALL_STATE(45)] = 1111,
  [SMALL_STATE(46)] = 1129,
  [SMALL_STATE(47)] = 1151,
  [SMALL_STATE(48)] = 1171,
  [SMALL_STATE(49)] = 1185,
  [SMALL_STATE(50)] = 1202,
  [SMALL_STATE(51)] = 1215,
  [SMALL_STATE(52)] = 1232,
  [SMALL_STATE(53)] = 1249,
  [SMALL_STATE(54)] = 1266,
  [SMALL_STATE(55)] = 1283,
  [SMALL_STATE(56)] = 1300,
  [SMALL_STATE(57)] = 1317,
  [SMALL_STATE(58)] = 1334,
  [SMALL_STATE(59)] = 1347,
  [SMALL_STATE(60)] = 1362,
  [SMALL_STATE(61)] = 1375,
  [SMALL_STATE(62)] = 1392,
  [SMALL_STATE(63)] = 1409,
  [SMALL_STATE(64)] = 1426,
  [SMALL_STATE(65)] = 1441,
  [SMALL_STATE(66)] = 1454,
  [SMALL_STATE(67)] = 1471,
  [SMALL_STATE(68)] = 1488,
  [SMALL_STATE(69)] = 1501,
  [SMALL_STATE(70)] = 1518,
  [SMALL_STATE(71)] = 1531,
  [SMALL_STATE(72)] = 1548,
  [SMALL_STATE(73)] = 1561,
  [SMALL_STATE(74)] = 1574,
  [SMALL_STATE(75)] = 1591,
  [SMALL_STATE(76)] = 1608,
  [SMALL_STATE(77)] = 1625,
  [SMALL_STATE(78)] = 1642,
  [SMALL_STATE(79)] = 1652,
  [SMALL_STATE(80)] = 1668,
  [SMALL_STATE(81)] = 1682,
  [SMALL_STATE(82)] = 1692,
  [SMALL_STATE(83)] = 1706,
  [SMALL_STATE(84)] = 1720,
  [SMALL_STATE(85)] = 1732,
  [SMALL_STATE(86)] = 1744,
  [SMALL_STATE(87)] = 1758,
  [SMALL_STATE(88)] = 1772,
  [SMALL_STATE(89)] = 1788,
  [SMALL_STATE(90)] = 1804,
  [SMALL_STATE(91)] = 1820,
  [SMALL_STATE(92)] = 1836,
  [SMALL_STATE(93)] = 1852,
  [SMALL_STATE(94)] = 1868,
  [SMALL_STATE(95)] = 1882,
  [SMALL_STATE(96)] = 1898,
  [SMALL_STATE(97)] = 1910,
  [SMALL_STATE(98)] = 1922,
  [SMALL_STATE(99)] = 1936,
  [SMALL_STATE(100)] = 1952,
  [SMALL_STATE(101)] = 1963,
  [SMALL_STATE(102)] = 1974,
  [SMALL_STATE(103)] = 1985,
  [SMALL_STATE(104)] = 1996,
  [SMALL_STATE(105)] = 2007,
  [SMALL_STATE(106)] = 2018,
  [SMALL_STATE(107)] = 2029,
  [SMALL_STATE(108)] = 2040,
  [SMALL_STATE(109)] = 2051,
  [SMALL_STATE(110)] = 2064,
  [SMALL_STATE(111)] = 2077,
  [SMALL_STATE(112)] = 2090,
  [SMALL_STATE(113)] = 2099,
  [SMALL_STATE(114)] = 2112,
  [SMALL_STATE(115)] = 2125,
  [SMALL_STATE(116)] = 2138,
  [SMALL_STATE(117)] = 2151,
  [SMALL_STATE(118)] = 2162,
  [SMALL_STATE(119)] = 2172,
  [SMALL_STATE(120)] = 2180,
  [SMALL_STATE(121)] = 2190,
  [SMALL_STATE(122)] = 2200,
  [SMALL_STATE(123)] = 2210,
  [SMALL_STATE(124)] = 2220,
  [SMALL_STATE(125)] = 2230,
  [SMALL_STATE(126)] = 2240,
  [SMALL_STATE(127)] = 2248,
  [SMALL_STATE(128)] = 2258,
  [SMALL_STATE(129)] = 2266,
  [SMALL_STATE(130)] = 2276,
  [SMALL_STATE(131)] = 2286,
  [SMALL_STATE(132)] = 2296,
  [SMALL_STATE(133)] = 2306,
  [SMALL_STATE(134)] = 2316,
  [SMALL_STATE(135)] = 2326,
  [SMALL_STATE(136)] = 2336,
  [SMALL_STATE(137)] = 2344,
  [SMALL_STATE(138)] = 2354,
  [SMALL_STATE(139)] = 2364,
  [SMALL_STATE(140)] = 2374,
  [SMALL_STATE(141)] = 2384,
  [SMALL_STATE(142)] = 2394,
  [SMALL_STATE(143)] = 2402,
  [SMALL_STATE(144)] = 2412,
  [SMALL_STATE(145)] = 2422,
  [SMALL_STATE(146)] = 2432,
  [SMALL_STATE(147)] = 2442,
  [SMALL_STATE(148)] = 2452,
  [SMALL_STATE(149)] = 2462,
  [SMALL_STATE(150)] = 2472,
  [SMALL_STATE(151)] = 2482,
  [SMALL_STATE(152)] = 2492,
  [SMALL_STATE(153)] = 2502,
  [SMALL_STATE(154)] = 2510,
  [SMALL_STATE(155)] = 2520,
  [SMALL_STATE(156)] = 2530,
  [SMALL_STATE(157)] = 2537,
  [SMALL_STATE(158)] = 2544,
  [SMALL_STATE(159)] = 2551,
  [SMALL_STATE(160)] = 2558,
  [SMALL_STATE(161)] = 2565,
  [SMALL_STATE(162)] = 2572,
  [SMALL_STATE(163)] = 2579,
  [SMALL_STATE(164)] = 2586,
  [SMALL_STATE(165)] = 2593,
  [SMALL_STATE(166)] = 2600,
  [SMALL_STATE(167)] = 2607,
  [SMALL_STATE(168)] = 2614,
  [SMALL_STATE(169)] = 2621,
  [SMALL_STATE(170)] = 2628,
  [SMALL_STATE(171)] = 2635,
  [SMALL_STATE(172)] = 2642,
  [SMALL_STATE(173)] = 2649,
  [SMALL_STATE(174)] = 2656,
  [SMALL_STATE(175)] = 2663,
  [SMALL_STATE(176)] = 2670,
  [SMALL_STATE(177)] = 2677,
  [SMALL_STATE(178)] = 2684,
  [SMALL_STATE(179)] = 2691,
  [SMALL_STATE(180)] = 2698,
  [SMALL_STATE(181)] = 2705,
  [SMALL_STATE(182)] = 2712,
  [SMALL_STATE(183)] = 2719,
  [SMALL_STATE(184)] = 2726,
  [SMALL_STATE(185)] = 2733,
  [SMALL_STATE(186)] = 2740,
  [SMALL_STATE(187)] = 2747,
  [SMALL_STATE(188)] = 2754,
  [SMALL_STATE(189)] = 2761,
  [SMALL_STATE(190)] = 2768,
  [SMALL_STATE(191)] = 2775,
  [SMALL_STATE(192)] = 2782,
  [SMALL_STATE(193)] = 2789,
  [SMALL_STATE(194)] = 2796,
  [SMALL_STATE(195)] = 2803,
  [SMALL_STATE(196)] = 2810,
  [SMALL_STATE(197)] = 2817,
  [SMALL_STATE(198)] = 2824,
  [SMALL_STATE(199)] = 2831,
  [SMALL_STATE(200)] = 2838,
  [SMALL_STATE(201)] = 2845,
  [SMALL_STATE(202)] = 2852,
  [SMALL_STATE(203)] = 2859,
  [SMALL_STATE(204)] = 2866,
  [SMALL_STATE(205)] = 2873,
  [SMALL_STATE(206)] = 2880,
  [SMALL_STATE(207)] = 2887,
  [SMALL_STATE(208)] = 2894,
  [SMALL_STATE(209)] = 2901,
  [SMALL_STATE(210)] = 2908,
  [SMALL_STATE(211)] = 2915,
  [SMALL_STATE(212)] = 2922,
  [SMALL_STATE(213)] = 2929,
  [SMALL_STATE(214)] = 2936,
  [SMALL_STATE(215)] = 2943,
  [SMALL_STATE(216)] = 2950,
  [SMALL_STATE(217)] = 2957,
  [SMALL_STATE(218)] = 2964,
  [SMALL_STATE(219)] = 2971,
  [SMALL_STATE(220)] = 2978,
  [SMALL_STATE(221)] = 2985,
  [SMALL_STATE(222)] = 2992,
  [SMALL_STATE(223)] = 2999,
  [SMALL_STATE(224)] = 3006,
  [SMALL_STATE(225)] = 3013,
  [SMALL_STATE(226)] = 3020,
  [SMALL_STATE(227)] = 3027,
  [SMALL_STATE(228)] = 3034,
  [SMALL_STATE(229)] = 3041,
  [SMALL_STATE(230)] = 3048,
  [SMALL_STATE(231)] = 3055,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(150),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(12),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(130),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(134),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(18),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(151),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(23),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(147),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(127),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(59),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(165),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(32),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(32),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(135),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(34),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(121),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(37),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(141),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(51),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(118),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(63),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(169),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(147),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(74),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(139),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(77),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(80),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(199),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(231),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(79),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(138),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(10),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [717] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
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
