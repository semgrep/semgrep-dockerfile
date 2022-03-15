#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
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
  anon_sym_BSLASH_LF = 16,
  anon_sym_POUND = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_BSLASH = 19,
  sym_escape_sequence = 20,
  sym_non_newline_whitespace = 21,
  sym_comment = 22,
  sym_semgrep_metavariable = 23,
  sym_semgrep_ellipsis = 24,
  sym_imm_tok_pat_24a1611 = 25,
  sym_imm_tok_pat_3d340f6 = 26,
  sym_imm_tok_pat_589b0f8 = 27,
  sym_imm_tok_pat_bcfc287 = 28,
  sym_imm_tok_pat_d2727a0 = 29,
  sym_imm_tok_pat_f43f746 = 30,
  sym_imm_tok_pat_f6e1de8 = 31,
  sym_pat_030af88 = 32,
  sym_pat_0c7fc22 = 33,
  sym_pat_1167a92 = 34,
  sym_pat_1c663f5 = 35,
  sym_pat_217c202 = 36,
  sym_pat_239fcac = 37,
  sym_pat_2b37705 = 38,
  sym_pat_4128122 = 39,
  sym_pat_433746d = 40,
  sym_pat_441cd81 = 41,
  sym_pat_4a2f38a = 42,
  sym_pat_4b81dfc = 43,
  sym_pat_4de4cb9 = 44,
  sym_pat_4fd4a56 = 45,
  sym_pat_56bd329 = 46,
  sym_pat_5cf3c2c = 47,
  sym_pat_5eaae97 = 48,
  sym_pat_660c06c = 49,
  sym_pat_79b8891 = 50,
  sym_pat_808c5a1 = 51,
  sym_pat_8165e5f = 52,
  sym_pat_845d48b = 53,
  sym_pat_8713919 = 54,
  sym_pat_9374c10 = 55,
  sym_pat_9818882 = 56,
  sym_pat_985c208 = 57,
  sym_pat_9a14b5c = 58,
  sym_pat_9c0a769 = 59,
  sym_pat_a368b76 = 60,
  sym_pat_a6040bb = 61,
  sym_pat_aa82a08 = 62,
  sym_pat_ed84199 = 63,
  sym_pat_f05eb95 = 64,
  sym_pat_f2a2f8f = 65,
  sym_pat_fd0037e = 66,
  sym_source_file = 67,
  sym_instruction = 68,
  sym_from_instruction = 69,
  sym_run_instruction = 70,
  sym_cmd_instruction = 71,
  sym_label_instruction = 72,
  sym_expose_instruction = 73,
  sym_env_instruction = 74,
  sym_add_instruction = 75,
  sym_copy_instruction = 76,
  sym_entrypoint_instruction = 77,
  sym_volume_instruction = 78,
  sym_user_instruction = 79,
  sym_user_name_or_group = 80,
  sym_workdir_instruction = 81,
  sym_arg_instruction = 82,
  sym_onbuild_instruction = 83,
  sym_stopsignal_instruction = 84,
  sym_stopsignal_value = 85,
  sym_healthcheck_instruction = 86,
  sym_shell_instruction = 87,
  sym_maintainer_instruction = 88,
  sym_cross_build_instruction = 89,
  sym_path = 90,
  sym_expansion = 91,
  sym_env_pair = 92,
  sym_spaced_env_pair = 93,
  sym_env_key = 94,
  sym_expose_port = 95,
  sym_label_pair = 96,
  sym_image_spec = 97,
  sym_image_name = 98,
  sym_image_tag = 99,
  sym_image_digest = 100,
  sym_param = 101,
  sym_image_alias = 102,
  sym_string_array = 103,
  sym_shell_command = 104,
  sym_shell_fragment = 105,
  sym_line_continuation = 106,
  sym_required_line_continuation = 107,
  sym_comment_line = 108,
  sym_anon_comment = 109,
  sym_double_quoted_string = 110,
  sym_unquoted_string = 111,
  sym_array_element = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_label_instruction_repeat1 = 114,
  aux_sym_expose_instruction_repeat1 = 115,
  aux_sym_env_instruction_repeat1 = 116,
  aux_sym_volume_instruction_repeat1 = 117,
  aux_sym_user_name_or_group_repeat1 = 118,
  aux_sym_stopsignal_value_repeat1 = 119,
  aux_sym_healthcheck_instruction_repeat1 = 120,
  aux_sym_path_repeat1 = 121,
  aux_sym_image_name_repeat1 = 122,
  aux_sym_image_tag_repeat1 = 123,
  aux_sym_image_digest_repeat1 = 124,
  aux_sym_image_alias_repeat1 = 125,
  aux_sym_string_array_repeat1 = 126,
  aux_sym_shell_command_repeat1 = 127,
  aux_sym_shell_command_repeat2 = 128,
  aux_sym_shell_fragment_repeat1 = 129,
  aux_sym_double_quoted_string_repeat1 = 130,
  aux_sym_unquoted_string_repeat1 = 131,
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
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
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
  [sym_pat_8165e5f] = "pat_8165e5f",
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
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [sym_comment_line] = "comment_line",
  [sym_anon_comment] = "anon_comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_array_element] = "array_element",
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
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
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
  [sym_pat_8165e5f] = sym_pat_8165e5f,
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
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [sym_comment_line] = sym_comment_line,
  [sym_anon_comment] = sym_anon_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_array_element] = sym_array_element,
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
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
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
  [sym_semgrep_metavariable] = {
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
  [sym_pat_8165e5f] = {
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
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
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
  [sym_array_element] = {
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
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(205);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(205);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(237);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(237);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(221);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(253);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 88:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(265);
      END_STATE();
    case 100:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 151:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 161:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 162:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      END_STATE();
    case 163:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      END_STATE();
    case 164:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(253);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-') ADVANCE(215);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(174);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_pat_845d48b);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_pat_fd0037e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 162},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 162},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 162},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 162},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 42},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 162},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 38},
  [74] = {.lex_state = 38},
  [75] = {.lex_state = 162},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 38},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 42},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 40},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 162},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 162},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 162},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 30},
  [148] = {.lex_state = 42},
  [149] = {.lex_state = 30},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 162},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 162},
  [159] = {.lex_state = 47},
  [160] = {.lex_state = 162},
  [161] = {.lex_state = 162},
  [162] = {.lex_state = 23},
  [163] = {.lex_state = 51},
  [164] = {.lex_state = 51},
  [165] = {.lex_state = 51},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 51},
  [172] = {.lex_state = 51},
  [173] = {.lex_state = 162},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 162},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 162},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 32},
  [180] = {.lex_state = 162},
  [181] = {.lex_state = 27},
  [182] = {.lex_state = 51},
  [183] = {.lex_state = 51},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 162},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 162},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 162},
  [200] = {.lex_state = 53},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 42},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 54},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 240},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 240},
  [221] = {.lex_state = 162},
  [222] = {.lex_state = 240},
  [223] = {.lex_state = 54},
  [224] = {.lex_state = 42},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 162},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 54},
  [229] = {.lex_state = 162},
  [230] = {.lex_state = 162},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 162},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 162},
  [235] = {.lex_state = 162},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 162},
  [238] = {.lex_state = 42},
  [239] = {.lex_state = 162},
  [240] = {.lex_state = 42},
  [241] = {.lex_state = 162},
  [242] = {.lex_state = 162},
  [243] = {.lex_state = 162},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 162},
  [246] = {.lex_state = 55},
  [247] = {.lex_state = 162},
  [248] = {.lex_state = 55},
  [249] = {.lex_state = 162},
  [250] = {.lex_state = 55},
  [251] = {.lex_state = 162},
  [252] = {.lex_state = 55},
  [253] = {.lex_state = 55},
  [254] = {.lex_state = 55},
  [255] = {.lex_state = 55},
  [256] = {.lex_state = 55},
  [257] = {.lex_state = 55},
  [258] = {.lex_state = 55},
  [259] = {.lex_state = 55},
  [260] = {.lex_state = 55},
  [261] = {.lex_state = 55},
  [262] = {.lex_state = 53},
  [263] = {.lex_state = 53},
  [264] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
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
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_semgrep_metavariable] = ACTIONS(1),
    [sym_imm_tok_pat_f43f746] = ACTIONS(1),
    [sym_pat_1167a92] = ACTIONS(1),
    [sym_pat_8165e5f] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(211),
    [sym_instruction] = STATE(227),
    [sym_from_instruction] = STATE(225),
    [sym_run_instruction] = STATE(225),
    [sym_cmd_instruction] = STATE(225),
    [sym_label_instruction] = STATE(225),
    [sym_expose_instruction] = STATE(225),
    [sym_env_instruction] = STATE(225),
    [sym_add_instruction] = STATE(225),
    [sym_copy_instruction] = STATE(225),
    [sym_entrypoint_instruction] = STATE(225),
    [sym_volume_instruction] = STATE(225),
    [sym_user_instruction] = STATE(225),
    [sym_workdir_instruction] = STATE(225),
    [sym_arg_instruction] = STATE(225),
    [sym_onbuild_instruction] = STATE(225),
    [sym_stopsignal_instruction] = STATE(225),
    [sym_healthcheck_instruction] = STATE(225),
    [sym_shell_instruction] = STATE(225),
    [sym_maintainer_instruction] = STATE(225),
    [sym_cross_build_instruction] = STATE(225),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_semgrep_metavariable] = ACTIONS(9),
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
      anon_sym_BSLASH_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
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
    STATE(227), 1,
      sym_instruction,
    ACTIONS(54), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(225), 19,
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
  [99] = 27,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      sym_comment,
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
    STATE(3), 1,
      sym_line_continuation,
    STATE(227), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(225), 19,
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
  [200] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
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
    STATE(4), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(225), 19,
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
  [292] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
      sym_line_continuation,
    ACTIONS(49), 23,
      ts_builtin_sym_end,
      sym_comment,
      sym_semgrep_metavariable,
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
  [324] = 8,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      sym_imm_tok_pat_24a1611,
    STATE(30), 1,
      sym_expansion,
    STATE(6), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(126), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [352] = 9,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(139), 1,
      sym_imm_tok_pat_24a1611,
    STATE(6), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(7), 1,
      sym_line_continuation,
    STATE(30), 1,
      sym_expansion,
    ACTIONS(137), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [382] = 9,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_BSLASH,
    ACTIONS(145), 1,
      sym_imm_tok_pat_24a1611,
    STATE(8), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(31), 1,
      sym_expansion,
    ACTIONS(137), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [411] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_line_continuation,
    STATE(11), 1,
      aux_sym_shell_command_repeat1,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(135), 1,
      sym_comment_line,
    STATE(186), 1,
      sym_shell_fragment,
    STATE(215), 1,
      sym_anon_comment,
    ACTIONS(149), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [440] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      sym_pat_f05eb95,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym_semgrep_ellipsis,
    ACTIONS(155), 1,
      sym_pat_4b81dfc,
    STATE(10), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(133), 1,
      sym_shell_fragment,
    STATE(233), 2,
      sym_string_array,
      sym_shell_command,
  [469] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_shell_command_repeat1,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(135), 1,
      sym_comment_line,
    STATE(202), 1,
      sym_shell_fragment,
    STATE(215), 1,
      sym_anon_comment,
    ACTIONS(149), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [498] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      sym_pat_2b37705,
    ACTIONS(165), 1,
      sym_pat_79b8891,
    STATE(40), 1,
      sym_expansion,
    STATE(12), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(157), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [523] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      sym_pat_f05eb95,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym_semgrep_ellipsis,
    ACTIONS(155), 1,
      sym_pat_4b81dfc,
    STATE(13), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(133), 1,
      sym_shell_fragment,
    STATE(201), 2,
      sym_string_array,
      sym_shell_command,
  [552] = 8,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      sym_imm_tok_pat_24a1611,
    STATE(31), 1,
      sym_expansion,
    ACTIONS(126), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
    STATE(14), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [579] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_pat_2b37705,
    ACTIONS(182), 1,
      sym_pat_79b8891,
    STATE(15), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_image_name_repeat1,
    STATE(40), 1,
      sym_expansion,
    ACTIONS(176), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [606] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_pat_2b37705,
    ACTIONS(186), 1,
      sym_pat_79b8891,
    STATE(12), 1,
      aux_sym_image_name_repeat1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(40), 1,
      sym_expansion,
    ACTIONS(184), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [633] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      sym_pat_f05eb95,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym_semgrep_ellipsis,
    ACTIONS(155), 1,
      sym_pat_4b81dfc,
    STATE(17), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(133), 1,
      sym_shell_fragment,
    STATE(188), 2,
      sym_string_array,
      sym_shell_command,
  [662] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(31), 1,
      sym_expansion,
    ACTIONS(143), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(145), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [689] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(194), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(231), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [716] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(20), 1,
      sym_line_continuation,
    STATE(30), 1,
      sym_expansion,
    ACTIONS(135), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(123), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [743] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    STATE(21), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(194), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(209), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [770] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(202), 1,
      anon_sym_DASH_DASH,
    STATE(22), 1,
      sym_line_continuation,
    STATE(75), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(177), 1,
      sym_param,
    STATE(216), 1,
      sym_cmd_instruction,
    ACTIONS(200), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [796] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(206), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(212), 1,
      sym_pat_79b8891,
    STATE(67), 1,
      sym_expansion,
    ACTIONS(204), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [820] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      sym_semgrep_ellipsis,
    ACTIONS(222), 1,
      sym_pat_217c202,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(115), 2,
      sym_expansion,
      sym_expose_port,
  [844] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(25), 1,
      sym_line_continuation,
    ACTIONS(225), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(227), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [862] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(26), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(231), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [880] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      anon_sym_DASH_DASH,
    ACTIONS(237), 1,
      sym_pat_8165e5f,
    STATE(15), 1,
      sym_expansion,
    STATE(27), 1,
      sym_line_continuation,
    STATE(54), 1,
      sym_image_name,
    STATE(79), 1,
      sym_param,
    STATE(168), 1,
      sym_image_spec,
  [908] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_DOLLAR,
    ACTIONS(243), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(245), 1,
      sym_pat_79b8891,
    STATE(23), 1,
      aux_sym_image_tag_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(67), 1,
      sym_expansion,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_AT,
  [934] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      sym_semgrep_ellipsis,
    ACTIONS(253), 1,
      sym_pat_217c202,
    STATE(24), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(29), 1,
      sym_line_continuation,
    STATE(115), 2,
      sym_expansion,
      sym_expose_port,
  [960] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(30), 1,
      sym_line_continuation,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(257), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [978] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(31), 1,
      sym_line_continuation,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(257), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_845d48b,
  [995] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      sym_semgrep_ellipsis,
    ACTIONS(261), 1,
      sym_pat_845d48b,
    STATE(32), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_env_instruction_repeat1,
    STATE(146), 1,
      sym_env_pair,
    STATE(184), 1,
      sym_env_key,
    STATE(196), 1,
      sym_spaced_env_pair,
  [1020] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(225), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(227), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1037] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      sym_escape_sequence,
    ACTIONS(269), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(34), 1,
      sym_line_continuation,
    STATE(52), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(124), 1,
      sym_expansion,
  [1062] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(273), 1,
      sym_semgrep_ellipsis,
    ACTIONS(275), 1,
      sym_pat_845d48b,
    STATE(35), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_env_instruction_repeat1,
    STATE(146), 1,
      sym_env_pair,
    STATE(199), 1,
      sym_env_key,
  [1087] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_array_element,
    STATE(175), 1,
      sym_double_quoted_string,
    ACTIONS(281), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1110] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      sym_pat_0c7fc22,
    STATE(37), 1,
      sym_line_continuation,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(99), 1,
      sym_expansion,
    ACTIONS(283), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1133] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      sym_pat_0c7fc22,
    STATE(38), 1,
      sym_line_continuation,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(99), 1,
      sym_expansion,
    ACTIONS(289), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1156] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(39), 1,
      sym_line_continuation,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1173] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(40), 1,
      sym_line_continuation,
    ACTIONS(291), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(293), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1190] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      sym_escape_sequence,
    ACTIONS(269), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(124), 1,
      sym_expansion,
  [1215] = 6,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(300), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1236] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      sym_escape_sequence,
    ACTIONS(269), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(124), 1,
      sym_expansion,
  [1261] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(194), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1284] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(45), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(231), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_845d48b,
  [1301] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      sym_semgrep_ellipsis,
    STATE(46), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_label_instruction_repeat1,
    STATE(97), 1,
      sym_label_pair,
    ACTIONS(309), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
  [1324] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(318), 1,
      sym_semgrep_ellipsis,
    STATE(97), 1,
      sym_label_pair,
    ACTIONS(315), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
    STATE(47), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [1345] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_DASH_DASH,
    ACTIONS(325), 1,
      sym_pat_1167a92,
    STATE(48), 1,
      sym_line_continuation,
    STATE(83), 1,
      sym_expansion,
    STATE(125), 1,
      sym_param,
    STATE(224), 1,
      sym_path,
  [1370] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(332), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(335), 1,
      sym_pat_79b8891,
    STATE(116), 1,
      sym_expansion,
    STATE(49), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1393] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      sym_semgrep_ellipsis,
    ACTIONS(342), 1,
      sym_pat_845d48b,
    STATE(146), 1,
      sym_env_pair,
    STATE(199), 1,
      sym_env_key,
    STATE(50), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1416] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      sym_pat_660c06c,
    STATE(120), 1,
      sym_expansion,
    ACTIONS(345), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1437] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      sym_escape_sequence,
    ACTIONS(269), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(124), 1,
      sym_expansion,
  [1462] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment_line,
    STATE(215), 1,
      sym_anon_comment,
    ACTIONS(358), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(53), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1483] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      sym_pat_79b8891,
    STATE(54), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_image_tag,
    STATE(169), 1,
      sym_image_digest,
  [1508] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      sym_pat_1167a92,
    STATE(37), 1,
      sym_expansion,
    STATE(55), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_path,
    STATE(191), 1,
      sym_string_array,
  [1533] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      sym_escape_sequence,
    ACTIONS(380), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(124), 1,
      sym_expansion,
    STATE(56), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1556] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      sym_semgrep_ellipsis,
    ACTIONS(387), 1,
      sym_pat_217c202,
    STATE(29), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(115), 2,
      sym_expansion,
      sym_expose_port,
  [1579] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      sym_escape_sequence,
    ACTIONS(269), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(124), 1,
      sym_expansion,
  [1604] = 5,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(393), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [1623] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    ACTIONS(401), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(403), 1,
      sym_pat_79b8891,
    STATE(49), 1,
      aux_sym_image_digest_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(116), 1,
      sym_expansion,
  [1648] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_DASH_DASH,
    ACTIONS(325), 1,
      sym_pat_1167a92,
    STATE(61), 1,
      sym_line_continuation,
    STATE(83), 1,
      sym_expansion,
    STATE(119), 1,
      sym_param,
    STATE(210), 1,
      sym_path,
  [1673] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(62), 1,
      sym_line_continuation,
    ACTIONS(225), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(227), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_845d48b,
  [1690] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      sym_pat_660c06c,
    STATE(51), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(120), 1,
      sym_expansion,
    ACTIONS(405), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1713] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      sym_pat_0c7fc22,
    STATE(99), 1,
      sym_expansion,
    ACTIONS(411), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(64), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1734] = 8,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      sym_escape_sequence,
    ACTIONS(269), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(65), 1,
      sym_line_continuation,
    STATE(124), 1,
      sym_expansion,
  [1759] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      sym_non_newline_whitespace,
    ACTIONS(425), 1,
      sym_pat_0c7fc22,
    STATE(66), 1,
      sym_line_continuation,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(143), 1,
      sym_expansion,
  [1781] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(67), 1,
      sym_line_continuation,
    ACTIONS(427), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(429), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1797] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      sym_pat_9a14b5c,
    STATE(68), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_image_alias_repeat1,
    STATE(141), 1,
      sym_expansion,
  [1819] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_line_continuation,
    STATE(160), 1,
      sym_array_element,
    STATE(175), 1,
      sym_double_quoted_string,
    ACTIONS(281), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1839] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1855] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(225), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(227), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1871] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_DOLLAR,
    ACTIONS(439), 1,
      sym_pat_9a14b5c,
    STATE(68), 1,
      aux_sym_image_alias_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym_expansion,
    STATE(212), 1,
      sym_image_alias,
  [1893] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      sym_pat_660c06c,
    STATE(63), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(73), 1,
      sym_line_continuation,
    STATE(120), 1,
      sym_expansion,
    STATE(207), 1,
      sym_user_name_or_group,
  [1915] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      sym_pat_441cd81,
    STATE(74), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(144), 1,
      sym_expansion,
    STATE(193), 1,
      sym_stopsignal_value,
  [1937] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(202), 1,
      anon_sym_DASH_DASH,
    STATE(75), 1,
      sym_line_continuation,
    STATE(117), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(177), 1,
      sym_param,
    STATE(236), 1,
      sym_cmd_instruction,
  [1959] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(449), 1,
      anon_sym_DOLLAR,
    ACTIONS(452), 1,
      sym_pat_0c7fc22,
    STATE(131), 1,
      sym_expansion,
    STATE(76), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1979] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(309), 1,
      sym_pat_4128122,
    ACTIONS(311), 1,
      sym_semgrep_ellipsis,
    ACTIONS(455), 1,
      sym_semgrep_metavariable,
    STATE(46), 1,
      aux_sym_label_instruction_repeat1,
    STATE(77), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_label_pair,
  [2001] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_DOLLAR,
    ACTIONS(439), 1,
      sym_pat_9a14b5c,
    STATE(68), 1,
      aux_sym_image_alias_repeat1,
    STATE(78), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym_expansion,
    STATE(197), 1,
      sym_image_alias,
  [2023] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      sym_pat_8165e5f,
    STATE(15), 1,
      sym_expansion,
    STATE(54), 1,
      sym_image_name,
    STATE(79), 1,
      sym_line_continuation,
    STATE(162), 1,
      sym_image_spec,
  [2045] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(459), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      sym_pat_9a14b5c,
    STATE(141), 1,
      sym_expansion,
    STATE(80), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2065] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      sym_pat_660c06c,
    STATE(63), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(81), 1,
      sym_line_continuation,
    STATE(120), 1,
      sym_expansion,
    STATE(174), 1,
      sym_user_name_or_group,
  [2087] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      sym_pat_441cd81,
    STATE(82), 1,
      sym_line_continuation,
    STATE(85), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(144), 1,
      sym_expansion,
  [2109] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      sym_pat_0c7fc22,
    ACTIONS(469), 1,
      sym_non_newline_whitespace,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(83), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym_expansion,
  [2131] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [2147] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      anon_sym_DOLLAR,
    ACTIONS(476), 1,
      sym_pat_441cd81,
    STATE(144), 1,
      sym_expansion,
    STATE(85), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [2167] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      sym_non_newline_whitespace,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(482), 1,
      sym_pat_0c7fc22,
    STATE(143), 1,
      sym_expansion,
    STATE(86), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2187] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(225), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(227), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [2203] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_0c7fc22,
    STATE(88), 1,
      sym_line_continuation,
    STATE(89), 1,
      aux_sym_path_repeat1,
    STATE(131), 1,
      sym_expansion,
  [2225] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_0c7fc22,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(131), 1,
      sym_expansion,
  [2247] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2262] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(225), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(227), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2277] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(491), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2292] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(495), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2307] = 5,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(501), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2324] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(231), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2337] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      anon_sym_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(505), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2352] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(507), 1,
      anon_sym_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(509), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2367] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2382] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(511), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2395] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      sym_pat_1167a92,
    STATE(37), 1,
      sym_expansion,
    STATE(100), 1,
      sym_line_continuation,
    STATE(181), 1,
      sym_path,
  [2414] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(225), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(227), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2429] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(227), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2442] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(393), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2457] = 4,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(517), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(104), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2472] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_1167a92,
    STATE(88), 1,
      sym_expansion,
    STATE(105), 1,
      sym_line_continuation,
    STATE(189), 1,
      sym_path,
  [2491] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(243), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(524), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym_image_tag_repeat1,
    STATE(67), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
  [2510] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(526), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      aux_sym_image_digest_repeat1,
    STATE(107), 1,
      sym_line_continuation,
    STATE(116), 1,
      sym_expansion,
  [2529] = 6,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      anon_sym_AT,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_pat_79b8891,
    STATE(108), 1,
      sym_line_continuation,
    STATE(166), 1,
      sym_image_digest,
  [2548] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_1167a92,
    STATE(88), 1,
      sym_expansion,
    STATE(109), 1,
      sym_line_continuation,
    STATE(187), 1,
      sym_path,
  [2567] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2582] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(534), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2597] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_1167a92,
    STATE(88), 1,
      sym_expansion,
    STATE(112), 1,
      sym_line_continuation,
    STATE(208), 1,
      sym_path,
  [2616] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(225), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2631] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_1167a92,
    STATE(88), 1,
      sym_expansion,
    STATE(114), 1,
      sym_line_continuation,
    STATE(206), 1,
      sym_path,
  [2650] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(538), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2665] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(540), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(542), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2680] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      sym_pat_239fcac,
    STATE(177), 1,
      sym_param,
    STATE(117), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2697] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2712] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      sym_pat_1167a92,
    STATE(83), 1,
      sym_expansion,
    STATE(119), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym_path,
  [2731] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(549), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(551), 2,
      anon_sym_DOLLAR,
      sym_pat_660c06c,
  [2746] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(225), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(227), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2761] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_1167a92,
    STATE(88), 1,
      sym_expansion,
    STATE(122), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym_path,
  [2780] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(555), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2795] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(559), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(557), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2810] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      sym_pat_1167a92,
    STATE(83), 1,
      sym_expansion,
    STATE(125), 1,
      sym_line_continuation,
    STATE(238), 1,
      sym_path,
  [2829] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2844] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2858] = 5,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      anon_sym_BSLASH_LF,
    STATE(9), 1,
      sym_required_line_continuation,
    STATE(128), 1,
      sym_line_continuation,
    STATE(138), 1,
      aux_sym_shell_command_repeat2,
  [2874] = 5,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      sym_non_newline_whitespace,
    STATE(129), 1,
      sym_line_continuation,
    STATE(142), 1,
      aux_sym_volume_instruction_repeat1,
  [2890] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_line_continuation,
    STATE(151), 1,
      aux_sym_string_array_repeat1,
  [2906] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(511), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2920] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      sym_non_newline_whitespace,
    STATE(132), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2934] = 5,
    ACTIONS(563), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym_required_line_continuation,
    STATE(128), 1,
      aux_sym_shell_command_repeat2,
    STATE(133), 1,
      sym_line_continuation,
  [2950] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(491), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [2964] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(582), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2976] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(225), 1,
      anon_sym_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(227), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2990] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3004] = 4,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      anon_sym_BSLASH_LF,
    STATE(9), 1,
      sym_required_line_continuation,
    STATE(138), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3018] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(495), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3032] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_string_array_repeat1,
    STATE(140), 1,
      sym_line_continuation,
  [3048] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(593), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3062] = 5,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      sym_non_newline_whitespace,
    ACTIONS(595), 1,
      anon_sym_LF,
    STATE(132), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(142), 1,
      sym_line_continuation,
  [3078] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      sym_non_newline_whitespace,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(511), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3092] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(597), 1,
      anon_sym_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(599), 2,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
  [3106] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      anon_sym_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(603), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3120] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      anon_sym_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(607), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3134] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(609), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3146] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      sym_non_newline_whitespace,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3160] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(611), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3172] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(225), 1,
      sym_non_newline_whitespace,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(227), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
    STATE(151), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3200] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(225), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(227), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3214] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(618), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(620), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3228] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      sym_variable,
    STATE(154), 1,
      sym_line_continuation,
  [3241] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_line_continuation,
  [3254] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      sym_variable,
    STATE(156), 1,
      sym_line_continuation,
  [3267] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      sym_variable,
    STATE(157), 1,
      sym_line_continuation,
  [3280] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(489), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3291] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(638), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [3302] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(616), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3313] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(640), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3324] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      sym_pat_79b8891,
    STATE(162), 1,
      sym_line_continuation,
  [3337] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      sym_variable,
    STATE(163), 1,
      sym_line_continuation,
  [3350] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      sym_variable,
    STATE(164), 1,
      sym_line_continuation,
  [3363] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
  [3376] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_LF,
    ACTIONS(660), 1,
      sym_pat_79b8891,
    STATE(166), 1,
      sym_line_continuation,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_DOLLAR,
    ACTIONS(662), 1,
      sym_pat_8165e5f,
    STATE(167), 1,
      sym_line_continuation,
  [3402] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      sym_pat_79b8891,
    STATE(168), 1,
      sym_line_continuation,
  [3415] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      sym_pat_79b8891,
    STATE(169), 1,
      sym_line_continuation,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(674), 1,
      sym_variable,
    STATE(170), 1,
      sym_line_continuation,
  [3441] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      sym_variable,
    STATE(171), 1,
      sym_line_continuation,
  [3454] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      sym_variable,
    STATE(172), 1,
      sym_line_continuation,
  [3467] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3478] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_line_continuation,
  [3491] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3502] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    ACTIONS(692), 1,
      sym_variable,
    STATE(176), 1,
      sym_line_continuation,
  [3515] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(694), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3526] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_DOLLAR,
    ACTIONS(662), 1,
      sym_pat_1167a92,
    STATE(178), 1,
      sym_line_continuation,
  [3539] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(696), 2,
      sym_semgrep_metavariable,
      sym_pat_4de4cb9,
  [3550] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(180), 1,
      sym_line_continuation,
    STATE(205), 1,
      sym_string_array,
  [3563] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(575), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [3574] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    ACTIONS(700), 1,
      sym_variable,
    STATE(182), 1,
      sym_line_continuation,
  [3587] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(704), 1,
      sym_variable,
    STATE(183), 1,
      sym_line_continuation,
  [3600] = 4,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(708), 1,
      sym_imm_tok_pat_3d340f6,
    STATE(184), 1,
      sym_line_continuation,
  [3613] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      sym_variable,
    STATE(185), 1,
      sym_line_continuation,
  [3626] = 3,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(714), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
  [3636] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_line_continuation,
  [3646] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
  [3656] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
  [3666] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
  [3676] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_line_continuation,
  [3686] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_line_continuation,
  [3696] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_line_continuation,
  [3706] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym_line_continuation,
  [3716] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
  [3726] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(271), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
  [3736] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
  [3746] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
  [3756] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_line_continuation,
  [3766] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      sym_imm_tok_pat_f43f746,
    STATE(200), 1,
      sym_line_continuation,
  [3776] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_line_continuation,
  [3786] = 3,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      anon_sym_BSLASH_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3796] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3806] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_line_continuation,
  [3816] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
  [3826] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_line_continuation,
  [3836] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
  [3846] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_line_continuation,
  [3856] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_line_continuation,
  [3866] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      sym_non_newline_whitespace,
    STATE(210), 1,
      sym_line_continuation,
  [3876] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym_line_continuation,
  [3886] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [3896] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(213), 1,
      sym_line_continuation,
  [3906] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_line_continuation,
  [3916] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_line_continuation,
  [3926] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_line_continuation,
  [3936] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      sym_pat_4fd4a56,
    STATE(217), 1,
      sym_line_continuation,
  [3946] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LF,
    STATE(218), 1,
      sym_line_continuation,
  [3956] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_line_continuation,
  [3966] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      sym_pat_4fd4a56,
    STATE(220), 1,
      sym_line_continuation,
  [3976] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_line_continuation,
  [3986] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      sym_pat_4fd4a56,
    STATE(222), 1,
      sym_line_continuation,
  [3996] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(223), 1,
      sym_line_continuation,
  [4006] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      sym_non_newline_whitespace,
    STATE(224), 1,
      sym_line_continuation,
  [4016] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
  [4026] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_line_continuation,
  [4036] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
  [4046] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(228), 1,
      sym_line_continuation,
  [4056] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_line_continuation,
  [4066] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_line_continuation,
  [4076] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      anon_sym_LF,
    STATE(231), 1,
      sym_line_continuation,
  [4086] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [4096] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4106] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [4116] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_line_continuation,
  [4126] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
  [4136] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_line_continuation,
  [4146] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(812), 1,
      sym_non_newline_whitespace,
    STATE(238), 1,
      sym_line_continuation,
  [4156] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_line_continuation,
  [4166] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      sym_non_newline_whitespace,
    STATE(240), 1,
      sym_line_continuation,
  [4176] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_line_continuation,
  [4186] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym_line_continuation,
  [4196] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_line_continuation,
  [4206] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LF,
    STATE(244), 1,
      sym_line_continuation,
  [4216] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_line_continuation,
  [4226] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      sym_pat_8713919,
    STATE(246), 1,
      sym_line_continuation,
  [4236] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_line_continuation,
  [4246] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      sym_pat_8713919,
    STATE(248), 1,
      sym_line_continuation,
  [4256] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_line_continuation,
  [4266] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      sym_pat_8713919,
    STATE(250), 1,
      sym_line_continuation,
  [4276] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_line_continuation,
  [4286] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      sym_pat_8713919,
    STATE(252), 1,
      sym_line_continuation,
  [4296] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      sym_pat_8713919,
    STATE(253), 1,
      sym_line_continuation,
  [4306] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym_pat_8713919,
    STATE(254), 1,
      sym_line_continuation,
  [4316] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      sym_pat_8713919,
    STATE(255), 1,
      sym_line_continuation,
  [4326] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(848), 1,
      sym_pat_8713919,
    STATE(256), 1,
      sym_line_continuation,
  [4336] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      sym_pat_8713919,
    STATE(257), 1,
      sym_line_continuation,
  [4346] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      sym_pat_8713919,
    STATE(258), 1,
      sym_line_continuation,
  [4356] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      sym_pat_8713919,
    STATE(259), 1,
      sym_line_continuation,
  [4366] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      sym_pat_8713919,
    STATE(260), 1,
      sym_line_continuation,
  [4376] = 3,
    ACTIONS(121), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      sym_pat_8713919,
    STATE(261), 1,
      sym_line_continuation,
  [4386] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(860), 1,
      sym_imm_tok_pat_f43f746,
    STATE(262), 1,
      sym_line_continuation,
  [4396] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      sym_imm_tok_pat_f43f746,
    STATE(263), 1,
      sym_line_continuation,
  [4406] = 1,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 352,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 411,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 469,
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 579,
  [SMALL_STATE(16)] = 606,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 662,
  [SMALL_STATE(19)] = 689,
  [SMALL_STATE(20)] = 716,
  [SMALL_STATE(21)] = 743,
  [SMALL_STATE(22)] = 770,
  [SMALL_STATE(23)] = 796,
  [SMALL_STATE(24)] = 820,
  [SMALL_STATE(25)] = 844,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 880,
  [SMALL_STATE(28)] = 908,
  [SMALL_STATE(29)] = 934,
  [SMALL_STATE(30)] = 960,
  [SMALL_STATE(31)] = 978,
  [SMALL_STATE(32)] = 995,
  [SMALL_STATE(33)] = 1020,
  [SMALL_STATE(34)] = 1037,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1087,
  [SMALL_STATE(37)] = 1110,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1156,
  [SMALL_STATE(40)] = 1173,
  [SMALL_STATE(41)] = 1190,
  [SMALL_STATE(42)] = 1215,
  [SMALL_STATE(43)] = 1236,
  [SMALL_STATE(44)] = 1261,
  [SMALL_STATE(45)] = 1284,
  [SMALL_STATE(46)] = 1301,
  [SMALL_STATE(47)] = 1324,
  [SMALL_STATE(48)] = 1345,
  [SMALL_STATE(49)] = 1370,
  [SMALL_STATE(50)] = 1393,
  [SMALL_STATE(51)] = 1416,
  [SMALL_STATE(52)] = 1437,
  [SMALL_STATE(53)] = 1462,
  [SMALL_STATE(54)] = 1483,
  [SMALL_STATE(55)] = 1508,
  [SMALL_STATE(56)] = 1533,
  [SMALL_STATE(57)] = 1556,
  [SMALL_STATE(58)] = 1579,
  [SMALL_STATE(59)] = 1604,
  [SMALL_STATE(60)] = 1623,
  [SMALL_STATE(61)] = 1648,
  [SMALL_STATE(62)] = 1673,
  [SMALL_STATE(63)] = 1690,
  [SMALL_STATE(64)] = 1713,
  [SMALL_STATE(65)] = 1734,
  [SMALL_STATE(66)] = 1759,
  [SMALL_STATE(67)] = 1781,
  [SMALL_STATE(68)] = 1797,
  [SMALL_STATE(69)] = 1819,
  [SMALL_STATE(70)] = 1839,
  [SMALL_STATE(71)] = 1855,
  [SMALL_STATE(72)] = 1871,
  [SMALL_STATE(73)] = 1893,
  [SMALL_STATE(74)] = 1915,
  [SMALL_STATE(75)] = 1937,
  [SMALL_STATE(76)] = 1959,
  [SMALL_STATE(77)] = 1979,
  [SMALL_STATE(78)] = 2001,
  [SMALL_STATE(79)] = 2023,
  [SMALL_STATE(80)] = 2045,
  [SMALL_STATE(81)] = 2065,
  [SMALL_STATE(82)] = 2087,
  [SMALL_STATE(83)] = 2109,
  [SMALL_STATE(84)] = 2131,
  [SMALL_STATE(85)] = 2147,
  [SMALL_STATE(86)] = 2167,
  [SMALL_STATE(87)] = 2187,
  [SMALL_STATE(88)] = 2203,
  [SMALL_STATE(89)] = 2225,
  [SMALL_STATE(90)] = 2247,
  [SMALL_STATE(91)] = 2262,
  [SMALL_STATE(92)] = 2277,
  [SMALL_STATE(93)] = 2292,
  [SMALL_STATE(94)] = 2307,
  [SMALL_STATE(95)] = 2324,
  [SMALL_STATE(96)] = 2337,
  [SMALL_STATE(97)] = 2352,
  [SMALL_STATE(98)] = 2367,
  [SMALL_STATE(99)] = 2382,
  [SMALL_STATE(100)] = 2395,
  [SMALL_STATE(101)] = 2414,
  [SMALL_STATE(102)] = 2429,
  [SMALL_STATE(103)] = 2442,
  [SMALL_STATE(104)] = 2457,
  [SMALL_STATE(105)] = 2472,
  [SMALL_STATE(106)] = 2491,
  [SMALL_STATE(107)] = 2510,
  [SMALL_STATE(108)] = 2529,
  [SMALL_STATE(109)] = 2548,
  [SMALL_STATE(110)] = 2567,
  [SMALL_STATE(111)] = 2582,
  [SMALL_STATE(112)] = 2597,
  [SMALL_STATE(113)] = 2616,
  [SMALL_STATE(114)] = 2631,
  [SMALL_STATE(115)] = 2650,
  [SMALL_STATE(116)] = 2665,
  [SMALL_STATE(117)] = 2680,
  [SMALL_STATE(118)] = 2697,
  [SMALL_STATE(119)] = 2712,
  [SMALL_STATE(120)] = 2731,
  [SMALL_STATE(121)] = 2746,
  [SMALL_STATE(122)] = 2761,
  [SMALL_STATE(123)] = 2780,
  [SMALL_STATE(124)] = 2795,
  [SMALL_STATE(125)] = 2810,
  [SMALL_STATE(126)] = 2829,
  [SMALL_STATE(127)] = 2844,
  [SMALL_STATE(128)] = 2858,
  [SMALL_STATE(129)] = 2874,
  [SMALL_STATE(130)] = 2890,
  [SMALL_STATE(131)] = 2906,
  [SMALL_STATE(132)] = 2920,
  [SMALL_STATE(133)] = 2934,
  [SMALL_STATE(134)] = 2950,
  [SMALL_STATE(135)] = 2964,
  [SMALL_STATE(136)] = 2976,
  [SMALL_STATE(137)] = 2990,
  [SMALL_STATE(138)] = 3004,
  [SMALL_STATE(139)] = 3018,
  [SMALL_STATE(140)] = 3032,
  [SMALL_STATE(141)] = 3048,
  [SMALL_STATE(142)] = 3062,
  [SMALL_STATE(143)] = 3078,
  [SMALL_STATE(144)] = 3092,
  [SMALL_STATE(145)] = 3106,
  [SMALL_STATE(146)] = 3120,
  [SMALL_STATE(147)] = 3134,
  [SMALL_STATE(148)] = 3146,
  [SMALL_STATE(149)] = 3160,
  [SMALL_STATE(150)] = 3172,
  [SMALL_STATE(151)] = 3186,
  [SMALL_STATE(152)] = 3200,
  [SMALL_STATE(153)] = 3214,
  [SMALL_STATE(154)] = 3228,
  [SMALL_STATE(155)] = 3241,
  [SMALL_STATE(156)] = 3254,
  [SMALL_STATE(157)] = 3267,
  [SMALL_STATE(158)] = 3280,
  [SMALL_STATE(159)] = 3291,
  [SMALL_STATE(160)] = 3302,
  [SMALL_STATE(161)] = 3313,
  [SMALL_STATE(162)] = 3324,
  [SMALL_STATE(163)] = 3337,
  [SMALL_STATE(164)] = 3350,
  [SMALL_STATE(165)] = 3363,
  [SMALL_STATE(166)] = 3376,
  [SMALL_STATE(167)] = 3389,
  [SMALL_STATE(168)] = 3402,
  [SMALL_STATE(169)] = 3415,
  [SMALL_STATE(170)] = 3428,
  [SMALL_STATE(171)] = 3441,
  [SMALL_STATE(172)] = 3454,
  [SMALL_STATE(173)] = 3467,
  [SMALL_STATE(174)] = 3478,
  [SMALL_STATE(175)] = 3491,
  [SMALL_STATE(176)] = 3502,
  [SMALL_STATE(177)] = 3515,
  [SMALL_STATE(178)] = 3526,
  [SMALL_STATE(179)] = 3539,
  [SMALL_STATE(180)] = 3550,
  [SMALL_STATE(181)] = 3563,
  [SMALL_STATE(182)] = 3574,
  [SMALL_STATE(183)] = 3587,
  [SMALL_STATE(184)] = 3600,
  [SMALL_STATE(185)] = 3613,
  [SMALL_STATE(186)] = 3626,
  [SMALL_STATE(187)] = 3636,
  [SMALL_STATE(188)] = 3646,
  [SMALL_STATE(189)] = 3656,
  [SMALL_STATE(190)] = 3666,
  [SMALL_STATE(191)] = 3676,
  [SMALL_STATE(192)] = 3686,
  [SMALL_STATE(193)] = 3696,
  [SMALL_STATE(194)] = 3706,
  [SMALL_STATE(195)] = 3716,
  [SMALL_STATE(196)] = 3726,
  [SMALL_STATE(197)] = 3736,
  [SMALL_STATE(198)] = 3746,
  [SMALL_STATE(199)] = 3756,
  [SMALL_STATE(200)] = 3766,
  [SMALL_STATE(201)] = 3776,
  [SMALL_STATE(202)] = 3786,
  [SMALL_STATE(203)] = 3796,
  [SMALL_STATE(204)] = 3806,
  [SMALL_STATE(205)] = 3816,
  [SMALL_STATE(206)] = 3826,
  [SMALL_STATE(207)] = 3836,
  [SMALL_STATE(208)] = 3846,
  [SMALL_STATE(209)] = 3856,
  [SMALL_STATE(210)] = 3866,
  [SMALL_STATE(211)] = 3876,
  [SMALL_STATE(212)] = 3886,
  [SMALL_STATE(213)] = 3896,
  [SMALL_STATE(214)] = 3906,
  [SMALL_STATE(215)] = 3916,
  [SMALL_STATE(216)] = 3926,
  [SMALL_STATE(217)] = 3936,
  [SMALL_STATE(218)] = 3946,
  [SMALL_STATE(219)] = 3956,
  [SMALL_STATE(220)] = 3966,
  [SMALL_STATE(221)] = 3976,
  [SMALL_STATE(222)] = 3986,
  [SMALL_STATE(223)] = 3996,
  [SMALL_STATE(224)] = 4006,
  [SMALL_STATE(225)] = 4016,
  [SMALL_STATE(226)] = 4026,
  [SMALL_STATE(227)] = 4036,
  [SMALL_STATE(228)] = 4046,
  [SMALL_STATE(229)] = 4056,
  [SMALL_STATE(230)] = 4066,
  [SMALL_STATE(231)] = 4076,
  [SMALL_STATE(232)] = 4086,
  [SMALL_STATE(233)] = 4096,
  [SMALL_STATE(234)] = 4106,
  [SMALL_STATE(235)] = 4116,
  [SMALL_STATE(236)] = 4126,
  [SMALL_STATE(237)] = 4136,
  [SMALL_STATE(238)] = 4146,
  [SMALL_STATE(239)] = 4156,
  [SMALL_STATE(240)] = 4166,
  [SMALL_STATE(241)] = 4176,
  [SMALL_STATE(242)] = 4186,
  [SMALL_STATE(243)] = 4196,
  [SMALL_STATE(244)] = 4206,
  [SMALL_STATE(245)] = 4216,
  [SMALL_STATE(246)] = 4226,
  [SMALL_STATE(247)] = 4236,
  [SMALL_STATE(248)] = 4246,
  [SMALL_STATE(249)] = 4256,
  [SMALL_STATE(250)] = 4266,
  [SMALL_STATE(251)] = 4276,
  [SMALL_STATE(252)] = 4286,
  [SMALL_STATE(253)] = 4296,
  [SMALL_STATE(254)] = 4306,
  [SMALL_STATE(255)] = 4316,
  [SMALL_STATE(256)] = 4326,
  [SMALL_STATE(257)] = 4336,
  [SMALL_STATE(258)] = 4346,
  [SMALL_STATE(259)] = 4356,
  [SMALL_STATE(260)] = 4366,
  [SMALL_STATE(261)] = 4376,
  [SMALL_STATE(262)] = 4386,
  [SMALL_STATE(263)] = 4396,
  [SMALL_STATE(264)] = 4406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(156),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(154),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(40),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(31),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(182),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(67),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(172),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(103),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(59),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(164),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(98),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(194),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(96),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(185),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(116),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(153),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(192),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(157),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(120),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(217),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(163),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(183),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(99),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(170),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(131),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(176),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(141),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(157),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(144),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(171),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(143),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(104),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(263),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(100),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(147),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(69),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [758] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
