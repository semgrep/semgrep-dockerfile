#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 318
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
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
  anon_sym_DOLLAR2 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_variable = 9,
  anon_sym_SLASHtcp = 10,
  anon_sym_SLASHudp = 11,
  anon_sym_AT = 12,
  anon_sym_DASH_DASH = 13,
  anon_sym_LBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_BSLASH_LF = 17,
  anon_sym_POUND = 18,
  anon_sym_DQUOTE = 19,
  anon_sym_BSLASH = 20,
  sym_escape_sequence = 21,
  sym_non_newline_whitespace = 22,
  sym_comment = 23,
  sym_semgrep_metavariable = 24,
  sym_semgrep_ellipsis = 25,
  sym_imm_tok_pat_0c7fc22 = 26,
  sym_imm_tok_pat_24a1611 = 27,
  sym_imm_tok_pat_2b37705 = 28,
  sym_imm_tok_pat_3d340f6 = 29,
  sym_imm_tok_pat_441cd81 = 30,
  sym_imm_tok_pat_589b0f8 = 31,
  sym_imm_tok_pat_8713919 = 32,
  sym_imm_tok_pat_9a14b5c = 33,
  sym_imm_tok_pat_b295287 = 34,
  sym_imm_tok_pat_bcfc287 = 35,
  sym_imm_tok_pat_d2727a0 = 36,
  sym_imm_tok_pat_f43f746 = 37,
  sym_imm_tok_pat_f6e1de8 = 38,
  sym_pat_030af88 = 39,
  sym_pat_1167a92 = 40,
  sym_pat_18946a5 = 41,
  sym_pat_1c663f5 = 42,
  sym_pat_217c202 = 43,
  sym_pat_239fcac = 44,
  sym_pat_4128122 = 45,
  sym_pat_433746d = 46,
  sym_pat_441cd81 = 47,
  sym_pat_4a2f38a = 48,
  sym_pat_4b81dfc = 49,
  sym_pat_4de4cb9 = 50,
  sym_pat_4fd4a56 = 51,
  sym_pat_56bd329 = 52,
  sym_pat_5cf3c2c = 53,
  sym_pat_5eaae97 = 54,
  sym_pat_79b8891 = 55,
  sym_pat_808c5a1 = 56,
  sym_pat_8165e5f = 57,
  sym_pat_9374c10 = 58,
  sym_pat_9818882 = 59,
  sym_pat_985c208 = 60,
  sym_pat_9a14b5c = 61,
  sym_pat_9c0a769 = 62,
  sym_pat_a368b76 = 63,
  sym_pat_a6040bb = 64,
  sym_pat_aa82a08 = 65,
  sym_pat_b295287 = 66,
  sym_pat_ed84199 = 67,
  sym_pat_f05eb95 = 68,
  sym_pat_f2a2f8f = 69,
  sym_pat_fd0037e = 70,
  sym_source_file = 71,
  sym_instruction = 72,
  sym_from_instruction = 73,
  sym_run_instruction = 74,
  sym_cmd_instruction = 75,
  sym_label_instruction = 76,
  sym_expose_instruction = 77,
  sym_env_instruction = 78,
  sym_add_instruction = 79,
  sym_copy_instruction = 80,
  sym_entrypoint_instruction = 81,
  sym_volume_instruction = 82,
  sym_user_instruction = 83,
  sym_user_name_or_group = 84,
  sym_immediate_user_name_or_group = 85,
  sym_immediate_user_name_or_group_fragment = 86,
  sym_workdir_instruction = 87,
  sym_arg_instruction = 88,
  sym_onbuild_instruction = 89,
  sym_stopsignal_instruction = 90,
  sym_stopsignal_value = 91,
  sym_healthcheck_instruction = 92,
  sym_shell_instruction = 93,
  sym_maintainer_instruction = 94,
  sym_cross_build_instruction = 95,
  sym_path = 96,
  sym_expansion = 97,
  sym_immediate_expansion = 98,
  sym_imm_expansion = 99,
  sym_expansion_body = 100,
  sym_env_pair = 101,
  sym_spaced_env_pair = 102,
  sym_env_key = 103,
  sym_expose_port = 104,
  sym_label_pair = 105,
  sym_image_spec = 106,
  sym_image_name = 107,
  sym_image_tag = 108,
  sym_image_digest = 109,
  sym_param = 110,
  sym_image_alias = 111,
  sym_string_array = 112,
  sym_shell_command = 113,
  sym_shell_fragment = 114,
  sym_line_continuation = 115,
  sym_required_line_continuation = 116,
  sym_comment_line = 117,
  sym_anon_comment = 118,
  sym_double_quoted_string = 119,
  sym_unquoted_string = 120,
  sym_array_element = 121,
  aux_sym_source_file_repeat1 = 122,
  aux_sym_label_instruction_repeat1 = 123,
  aux_sym_expose_instruction_repeat1 = 124,
  aux_sym_env_instruction_repeat1 = 125,
  aux_sym_add_instruction_repeat1 = 126,
  aux_sym_volume_instruction_repeat1 = 127,
  aux_sym_user_name_or_group_repeat1 = 128,
  aux_sym_stopsignal_value_repeat1 = 129,
  aux_sym_healthcheck_instruction_repeat1 = 130,
  aux_sym_path_repeat1 = 131,
  aux_sym_image_name_repeat1 = 132,
  aux_sym_image_tag_repeat1 = 133,
  aux_sym_image_digest_repeat1 = 134,
  aux_sym_image_alias_repeat1 = 135,
  aux_sym_string_array_repeat1 = 136,
  aux_sym_shell_command_repeat1 = 137,
  aux_sym_shell_command_repeat2 = 138,
  aux_sym_shell_fragment_repeat1 = 139,
  aux_sym_double_quoted_string_repeat1 = 140,
  aux_sym_unquoted_string_repeat1 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_NONE] = "NONE",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
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
  [sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [sym_imm_tok_pat_24a1611] = "imm_tok_pat_24a1611",
  [sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [sym_imm_tok_pat_b295287] = "imm_tok_pat_b295287",
  [sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [sym_pat_030af88] = "pat_030af88",
  [sym_pat_1167a92] = "pat_1167a92",
  [sym_pat_18946a5] = "pat_18946a5",
  [sym_pat_1c663f5] = "pat_1c663f5",
  [sym_pat_217c202] = "pat_217c202",
  [sym_pat_239fcac] = "pat_239fcac",
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
  [sym_pat_79b8891] = "pat_79b8891",
  [sym_pat_808c5a1] = "pat_808c5a1",
  [sym_pat_8165e5f] = "pat_8165e5f",
  [sym_pat_9374c10] = "pat_9374c10",
  [sym_pat_9818882] = "pat_9818882",
  [sym_pat_985c208] = "pat_985c208",
  [sym_pat_9a14b5c] = "pat_9a14b5c",
  [sym_pat_9c0a769] = "pat_9c0a769",
  [sym_pat_a368b76] = "pat_a368b76",
  [sym_pat_a6040bb] = "pat_a6040bb",
  [sym_pat_aa82a08] = "pat_aa82a08",
  [sym_pat_b295287] = "pat_b295287",
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
  [sym_immediate_user_name_or_group] = "immediate_user_name_or_group",
  [sym_immediate_user_name_or_group_fragment] = "immediate_user_name_or_group_fragment",
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
  [sym_immediate_expansion] = "immediate_expansion",
  [sym_imm_expansion] = "imm_expansion",
  [sym_expansion_body] = "expansion_body",
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
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
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
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
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
  [sym_imm_tok_pat_0c7fc22] = sym_imm_tok_pat_0c7fc22,
  [sym_imm_tok_pat_24a1611] = sym_imm_tok_pat_24a1611,
  [sym_imm_tok_pat_2b37705] = sym_imm_tok_pat_2b37705,
  [sym_imm_tok_pat_3d340f6] = sym_imm_tok_pat_3d340f6,
  [sym_imm_tok_pat_441cd81] = sym_imm_tok_pat_441cd81,
  [sym_imm_tok_pat_589b0f8] = sym_imm_tok_pat_589b0f8,
  [sym_imm_tok_pat_8713919] = sym_imm_tok_pat_8713919,
  [sym_imm_tok_pat_9a14b5c] = sym_imm_tok_pat_9a14b5c,
  [sym_imm_tok_pat_b295287] = sym_imm_tok_pat_b295287,
  [sym_imm_tok_pat_bcfc287] = sym_imm_tok_pat_bcfc287,
  [sym_imm_tok_pat_d2727a0] = sym_imm_tok_pat_d2727a0,
  [sym_imm_tok_pat_f43f746] = sym_imm_tok_pat_f43f746,
  [sym_imm_tok_pat_f6e1de8] = sym_imm_tok_pat_f6e1de8,
  [sym_pat_030af88] = sym_pat_030af88,
  [sym_pat_1167a92] = sym_pat_1167a92,
  [sym_pat_18946a5] = sym_pat_18946a5,
  [sym_pat_1c663f5] = sym_pat_1c663f5,
  [sym_pat_217c202] = sym_pat_217c202,
  [sym_pat_239fcac] = sym_pat_239fcac,
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
  [sym_pat_79b8891] = sym_pat_79b8891,
  [sym_pat_808c5a1] = sym_pat_808c5a1,
  [sym_pat_8165e5f] = sym_pat_8165e5f,
  [sym_pat_9374c10] = sym_pat_9374c10,
  [sym_pat_9818882] = sym_pat_9818882,
  [sym_pat_985c208] = sym_pat_985c208,
  [sym_pat_9a14b5c] = sym_pat_9a14b5c,
  [sym_pat_9c0a769] = sym_pat_9c0a769,
  [sym_pat_a368b76] = sym_pat_a368b76,
  [sym_pat_a6040bb] = sym_pat_a6040bb,
  [sym_pat_aa82a08] = sym_pat_aa82a08,
  [sym_pat_b295287] = sym_pat_b295287,
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
  [sym_immediate_user_name_or_group] = sym_immediate_user_name_or_group,
  [sym_immediate_user_name_or_group_fragment] = sym_immediate_user_name_or_group_fragment,
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
  [sym_immediate_expansion] = sym_immediate_expansion,
  [sym_imm_expansion] = sym_imm_expansion,
  [sym_expansion_body] = sym_expansion_body,
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
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
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
  [anon_sym_DOLLAR2] = {
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
  [sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_24a1611] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_b295287] = {
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
  [sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_18946a5] = {
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
  [sym_pat_b295287] = {
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
  [sym_immediate_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group_fragment] = {
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
  [sym_immediate_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_body] = {
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
  [aux_sym_add_instruction_repeat1] = {
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
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ',') ADVANCE(181);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(245);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(245);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(255);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(231);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(195);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
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
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(177);
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
          lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
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
          lookahead == 'g') ADVANCE(259);
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
          lookahead == 'k') ADVANCE(270);
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
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
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
          lookahead == 'm') ADVANCE(252);
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
          lookahead == 'n') ADVANCE(269);
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
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
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
          lookahead == 's') ADVANCE(253);
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
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(230);
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
          lookahead == 'y') ADVANCE(261);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ',') ADVANCE(181);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(181);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '}') ADVANCE(173);
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
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(181);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(182);
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
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_imm_tok_pat_2b37705);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_imm_tok_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_imm_tok_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_imm_tok_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_imm_tok_pat_8713919);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_imm_tok_pat_8713919);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_imm_tok_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_imm_tok_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_imm_tok_pat_b295287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_imm_tok_pat_b295287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(183);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_18946a5);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      if (lookahead == '\n') ADVANCE(183);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_pat_b295287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_pat_b295287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_pat_fd0037e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 161},
  [2] = {.lex_state = 161},
  [3] = {.lex_state = 161},
  [4] = {.lex_state = 161},
  [5] = {.lex_state = 161},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 161},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 161},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 161},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 161},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 161},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 38},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 16},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 50},
  [158] = {.lex_state = 50},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 50},
  [161] = {.lex_state = 50},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 50},
  [165] = {.lex_state = 50},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 50},
  [168] = {.lex_state = 50},
  [169] = {.lex_state = 50},
  [170] = {.lex_state = 50},
  [171] = {.lex_state = 50},
  [172] = {.lex_state = 50},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 50},
  [176] = {.lex_state = 161},
  [177] = {.lex_state = 50},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 28},
  [181] = {.lex_state = 50},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 50},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 161},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 161},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 50},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 50},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 32},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 32},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 28},
  [215] = {.lex_state = 32},
  [216] = {.lex_state = 32},
  [217] = {.lex_state = 50},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 161},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 33},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 42},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 161},
  [232] = {.lex_state = 161},
  [233] = {.lex_state = 161},
  [234] = {.lex_state = 33},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 161},
  [237] = {.lex_state = 161},
  [238] = {.lex_state = 46},
  [239] = {.lex_state = 161},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 161},
  [245] = {.lex_state = 161},
  [246] = {.lex_state = 161},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 248},
  [252] = {.lex_state = 32},
  [253] = {.lex_state = 248},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 161},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 161},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 161},
  [266] = {.lex_state = 248},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 53},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 161},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 161},
  [280] = {.lex_state = 161},
  [281] = {.lex_state = 38},
  [282] = {.lex_state = 54},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 161},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 161},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 161},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 161},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 161},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 161},
  [298] = {.lex_state = 161},
  [299] = {.lex_state = 161},
  [300] = {.lex_state = 161},
  [301] = {.lex_state = 54},
  [302] = {.lex_state = 161},
  [303] = {.lex_state = 54},
  [304] = {.lex_state = 161},
  [305] = {.lex_state = 54},
  [306] = {.lex_state = 54},
  [307] = {.lex_state = 54},
  [308] = {.lex_state = 54},
  [309] = {.lex_state = 54},
  [310] = {.lex_state = 54},
  [311] = {.lex_state = 54},
  [312] = {.lex_state = 54},
  [313] = {.lex_state = 54},
  [314] = {.lex_state = 54},
  [315] = {.lex_state = 54},
  [316] = {.lex_state = 38},
  [317] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
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
    [sym_imm_tok_pat_441cd81] = ACTIONS(1),
    [sym_pat_1167a92] = ACTIONS(1),
    [sym_pat_8165e5f] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(268),
    [sym_instruction] = STATE(275),
    [sym_from_instruction] = STATE(273),
    [sym_run_instruction] = STATE(273),
    [sym_cmd_instruction] = STATE(273),
    [sym_label_instruction] = STATE(273),
    [sym_expose_instruction] = STATE(273),
    [sym_env_instruction] = STATE(273),
    [sym_add_instruction] = STATE(273),
    [sym_copy_instruction] = STATE(273),
    [sym_entrypoint_instruction] = STATE(273),
    [sym_volume_instruction] = STATE(273),
    [sym_user_instruction] = STATE(273),
    [sym_workdir_instruction] = STATE(273),
    [sym_arg_instruction] = STATE(273),
    [sym_onbuild_instruction] = STATE(273),
    [sym_stopsignal_instruction] = STATE(273),
    [sym_healthcheck_instruction] = STATE(273),
    [sym_shell_instruction] = STATE(273),
    [sym_maintainer_instruction] = STATE(273),
    [sym_cross_build_instruction] = STATE(273),
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
    STATE(275), 1,
      sym_instruction,
    ACTIONS(54), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(273), 19,
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
    STATE(275), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(273), 19,
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
    STATE(249), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(273), 19,
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
  [324] = 12,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      sym_imm_tok_pat_24a1611,
    STATE(6), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(77), 1,
      sym_imm_expansion,
    STATE(85), 1,
      sym_immediate_expansion,
    ACTIONS(126), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
    STATE(208), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [363] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      sym_semgrep_ellipsis,
    ACTIONS(136), 1,
      sym_pat_4b81dfc,
    ACTIONS(138), 1,
      sym_pat_f05eb95,
    STATE(7), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(155), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    STATE(180), 1,
      sym_comment_line,
    STATE(267), 1,
      sym_anon_comment,
    STATE(255), 2,
      sym_string_array,
      sym_shell_command,
  [404] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      sym_semgrep_ellipsis,
    ACTIONS(136), 1,
      sym_pat_4b81dfc,
    ACTIONS(138), 1,
      sym_pat_f05eb95,
    STATE(8), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(155), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    STATE(180), 1,
      sym_comment_line,
    STATE(267), 1,
      sym_anon_comment,
    STATE(256), 2,
      sym_string_array,
      sym_shell_command,
  [445] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      sym_semgrep_ellipsis,
    ACTIONS(136), 1,
      sym_pat_4b81dfc,
    ACTIONS(138), 1,
      sym_pat_f05eb95,
    STATE(9), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(155), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    STATE(180), 1,
      sym_comment_line,
    STATE(267), 1,
      sym_anon_comment,
    STATE(248), 2,
      sym_string_array,
      sym_shell_command,
  [486] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_DOLLAR2,
    ACTIONS(145), 1,
      anon_sym_BSLASH,
    ACTIONS(150), 1,
      sym_imm_tok_pat_24a1611,
    STATE(29), 1,
      sym_imm_expansion,
    STATE(32), 1,
      sym_immediate_expansion,
    STATE(10), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(148), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [517] = 10,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      sym_imm_tok_pat_24a1611,
    STATE(10), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(11), 1,
      sym_line_continuation,
    STATE(29), 1,
      sym_imm_expansion,
    STATE(32), 1,
      sym_immediate_expansion,
    ACTIONS(159), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [550] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_DOLLAR2,
    ACTIONS(166), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      sym_imm_tok_pat_24a1611,
    STATE(77), 1,
      sym_imm_expansion,
    STATE(85), 1,
      sym_immediate_expansion,
    ACTIONS(148), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
    STATE(12), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [580] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_DOLLAR2,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(142), 1,
      sym_immediate_expansion,
    ACTIONS(176), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(284), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [610] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(178), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(29), 1,
      sym_imm_expansion,
    STATE(32), 1,
      sym_immediate_expansion,
    ACTIONS(157), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(152), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [640] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_DOLLAR2,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(142), 1,
      sym_immediate_expansion,
    ACTIONS(176), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(290), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [670] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(184), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      sym_imm_tok_pat_2b37705,
    ACTIONS(188), 1,
      sym_pat_79b8891,
    STATE(16), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_image_name_repeat1,
    STATE(56), 1,
      sym_immediate_expansion,
    STATE(84), 1,
      sym_imm_expansion,
    ACTIONS(182), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [700] = 10,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(124), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      sym_imm_tok_pat_24a1611,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(17), 1,
      sym_line_continuation,
    STATE(77), 1,
      sym_imm_expansion,
    STATE(85), 1,
      sym_immediate_expansion,
    ACTIONS(159), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [732] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_DOLLAR2,
    ACTIONS(195), 1,
      sym_imm_tok_pat_2b37705,
    ACTIONS(198), 1,
      sym_pat_79b8891,
    STATE(56), 1,
      sym_immediate_expansion,
    STATE(84), 1,
      sym_imm_expansion,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [760] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(184), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      sym_imm_tok_pat_2b37705,
    ACTIONS(202), 1,
      sym_pat_79b8891,
    STATE(16), 1,
      aux_sym_image_name_repeat1,
    STATE(19), 1,
      sym_line_continuation,
    STATE(56), 1,
      sym_immediate_expansion,
    STATE(84), 1,
      sym_imm_expansion,
    ACTIONS(200), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [790] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_shell_command_repeat1,
    STATE(155), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(180), 1,
      sym_comment_line,
    STATE(219), 1,
      sym_shell_fragment,
    STATE(267), 1,
      sym_anon_comment,
    ACTIONS(138), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [819] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(206), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(212), 1,
      sym_pat_79b8891,
    STATE(96), 1,
      sym_immediate_expansion,
    STATE(99), 1,
      sym_imm_expansion,
    ACTIONS(204), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(21), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [846] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      sym_imm_tok_pat_b295287,
    STATE(22), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(113), 1,
      sym_imm_expansion,
    STATE(127), 1,
      sym_immediate_expansion,
    STATE(128), 1,
      sym_immediate_user_name_or_group_fragment,
    ACTIONS(214), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [875] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      sym_imm_tok_pat_b295287,
    STATE(23), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(113), 1,
      sym_imm_expansion,
    STATE(127), 1,
      sym_immediate_expansion,
    STATE(128), 1,
      sym_immediate_user_name_or_group_fragment,
    ACTIONS(220), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [904] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_shell_command_repeat1,
    STATE(155), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(180), 1,
      sym_comment_line,
    STATE(267), 1,
      sym_anon_comment,
    STATE(269), 1,
      sym_shell_fragment,
    ACTIONS(138), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [933] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_shell_command_repeat1,
    STATE(155), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(180), 1,
      sym_comment_line,
    STATE(267), 1,
      sym_anon_comment,
    STATE(272), 1,
      sym_shell_fragment,
    ACTIONS(138), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [962] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(224), 1,
      anon_sym_DOLLAR2,
    ACTIONS(226), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(228), 1,
      sym_pat_79b8891,
    STATE(21), 1,
      aux_sym_image_tag_repeat1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(96), 1,
      sym_immediate_expansion,
    STATE(99), 1,
      sym_imm_expansion,
    ACTIONS(222), 2,
      anon_sym_LF,
      anon_sym_AT,
  [991] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(232), 1,
      anon_sym_DOLLAR2,
    ACTIONS(235), 1,
      sym_imm_tok_pat_b295287,
    STATE(113), 1,
      sym_imm_expansion,
    STATE(127), 1,
      sym_immediate_expansion,
    STATE(128), 1,
      sym_immediate_user_name_or_group_fragment,
    ACTIONS(230), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1018] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(238), 1,
      anon_sym_DOLLAR2,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_escape_sequence,
    ACTIONS(246), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
    STATE(28), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1044] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(29), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(251), 5,
      anon_sym_DOLLAR2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1062] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(255), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(220), 1,
      sym_param,
    STATE(247), 1,
      sym_cmd_instruction,
    ACTIONS(253), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [1088] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_DOLLAR2,
    ACTIONS(262), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(265), 1,
      sym_pat_79b8891,
    STATE(146), 1,
      sym_imm_expansion,
    STATE(151), 1,
      sym_immediate_expansion,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1114] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(32), 1,
      sym_line_continuation,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(269), 5,
      anon_sym_DOLLAR2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1132] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      sym_imm_tok_pat_b295287,
    ACTIONS(271), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(33), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym_imm_expansion,
    STATE(127), 1,
      sym_immediate_expansion,
    STATE(128), 1,
      sym_immediate_user_name_or_group_fragment,
  [1160] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 1,
      anon_sym_DOLLAR2,
    ACTIONS(277), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(279), 1,
      sym_pat_79b8891,
    STATE(31), 1,
      aux_sym_image_digest_repeat1,
    STATE(34), 1,
      sym_line_continuation,
    STATE(146), 1,
      sym_imm_expansion,
    STATE(151), 1,
      sym_immediate_expansion,
  [1188] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(35), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
  [1216] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(291), 1,
      anon_sym_DOLLAR2,
    ACTIONS(293), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(36), 1,
      sym_line_continuation,
    STATE(43), 1,
      aux_sym_path_repeat1,
    STATE(118), 1,
      sym_imm_expansion,
    STATE(120), 1,
      sym_immediate_expansion,
    ACTIONS(289), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1242] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR2,
    ACTIONS(300), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(118), 1,
      sym_imm_expansion,
    STATE(120), 1,
      sym_immediate_expansion,
    ACTIONS(295), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1266] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(285), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
  [1294] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_DASH_DASH,
    ACTIONS(309), 1,
      sym_pat_8165e5f,
    STATE(19), 1,
      sym_expansion,
    STATE(39), 1,
      sym_line_continuation,
    STATE(71), 1,
      sym_image_name,
    STATE(103), 1,
      sym_param,
    STATE(241), 1,
      sym_image_spec,
  [1322] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(311), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH,
    ACTIONS(315), 1,
      sym_pat_1167a92,
    STATE(40), 1,
      sym_line_continuation,
    STATE(69), 1,
      sym_expansion,
    STATE(89), 1,
      sym_param,
    STATE(97), 1,
      aux_sym_add_instruction_repeat1,
    STATE(252), 1,
      sym_path,
  [1350] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(311), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH,
    ACTIONS(315), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_line_continuation,
    STATE(69), 1,
      sym_expansion,
    STATE(92), 1,
      aux_sym_add_instruction_repeat1,
    STATE(95), 1,
      sym_param,
    STATE(252), 1,
      sym_path,
  [1378] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(42), 1,
      sym_line_continuation,
    ACTIONS(317), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(319), 5,
      anon_sym_DOLLAR2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1396] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(291), 1,
      anon_sym_DOLLAR2,
    ACTIONS(293), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(37), 1,
      aux_sym_path_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym_imm_expansion,
    STATE(120), 1,
      sym_immediate_expansion,
    ACTIONS(321), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1422] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(285), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
  [1450] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(142), 1,
      sym_immediate_expansion,
    ACTIONS(176), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1476] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      sym_imm_tok_pat_b295287,
    STATE(33), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym_imm_expansion,
    STATE(127), 1,
      sym_immediate_expansion,
    STATE(128), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(287), 1,
      sym_immediate_user_name_or_group,
  [1504] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(285), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(47), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
  [1532] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(332), 1,
      sym_semgrep_ellipsis,
    ACTIONS(335), 1,
      sym_pat_217c202,
    STATE(48), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(143), 2,
      sym_expansion,
      sym_expose_port,
  [1556] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_DOLLAR,
    ACTIONS(342), 1,
      sym_semgrep_ellipsis,
    ACTIONS(344), 1,
      sym_pat_217c202,
    STATE(48), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(143), 2,
      sym_expansion,
      sym_expose_port,
  [1582] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(50), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(348), 5,
      anon_sym_DOLLAR2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1600] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(285), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(51), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
  [1628] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(285), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(52), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_imm_expansion,
    STATE(139), 1,
      sym_immediate_expansion,
  [1656] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(53), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(356), 5,
      anon_sym_DOLLAR2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1674] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      anon_sym_DOLLAR2,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(142), 1,
      sym_immediate_expansion,
    ACTIONS(361), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(54), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1698] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(319), 3,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [1715] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(366), 2,
      sym_imm_tok_pat_2b37705,
      sym_pat_79b8891,
    ACTIONS(364), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1732] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(368), 1,
      sym_semgrep_ellipsis,
    ACTIONS(370), 1,
      sym_pat_18946a5,
    STATE(57), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_env_instruction_repeat1,
    STATE(173), 1,
      sym_env_pair,
    STATE(229), 1,
      sym_env_key,
    STATE(283), 1,
      sym_spaced_env_pair,
  [1757] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(58), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_path,
    STATE(286), 1,
      sym_string_array,
  [1782] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_line_continuation,
    STATE(197), 1,
      sym_array_element,
    STATE(239), 1,
      sym_double_quoted_string,
    ACTIONS(380), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1805] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_DOLLAR2,
    ACTIONS(386), 1,
      sym_imm_tok_pat_9a14b5c,
    STATE(60), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_image_alias_repeat1,
    STATE(179), 1,
      sym_immediate_expansion,
    STATE(185), 1,
      sym_imm_expansion,
  [1830] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(393), 1,
      sym_imm_tok_pat_441cd81,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(218), 1,
      sym_immediate_expansion,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [1853] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 1,
      sym_semgrep_ellipsis,
    ACTIONS(400), 1,
      sym_pat_18946a5,
    STATE(62), 1,
      sym_line_continuation,
    STATE(88), 1,
      aux_sym_env_instruction_repeat1,
    STATE(173), 1,
      sym_env_pair,
    STATE(246), 1,
      sym_env_key,
  [1878] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      anon_sym_DOLLAR2,
    ACTIONS(386), 1,
      sym_imm_tok_pat_9a14b5c,
    ACTIONS(402), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_image_alias_repeat1,
    STATE(179), 1,
      sym_immediate_expansion,
    STATE(185), 1,
      sym_imm_expansion,
  [1903] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      sym_semgrep_ellipsis,
    STATE(64), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_label_instruction_repeat1,
    STATE(149), 1,
      sym_label_pair,
    ACTIONS(406), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
  [1926] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      sym_semgrep_ellipsis,
    STATE(149), 1,
      sym_label_pair,
    ACTIONS(412), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
    STATE(65), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [1947] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_DOLLAR2,
    ACTIONS(422), 1,
      sym_imm_tok_pat_441cd81,
    STATE(66), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(218), 1,
      sym_immediate_expansion,
  [1972] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      anon_sym_DOLLAR2,
    ACTIONS(422), 1,
      sym_imm_tok_pat_441cd81,
    ACTIONS(424), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(67), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(218), 1,
      sym_immediate_expansion,
  [1997] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      anon_sym_DOLLAR2,
    ACTIONS(431), 1,
      sym_imm_tok_pat_9a14b5c,
    STATE(179), 1,
      sym_immediate_expansion,
    STATE(185), 1,
      sym_imm_expansion,
    STATE(68), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2020] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      anon_sym_DOLLAR2,
    ACTIONS(436), 1,
      sym_non_newline_whitespace,
    ACTIONS(438), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(69), 1,
      sym_line_continuation,
    STATE(75), 1,
      aux_sym_path_repeat1,
    STATE(190), 1,
      sym_immediate_expansion,
    STATE(216), 1,
      sym_imm_expansion,
  [2045] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      sym_imm_tok_pat_2b37705,
      sym_pat_79b8891,
    ACTIONS(354), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2062] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_AT,
    ACTIONS(446), 1,
      sym_pat_79b8891,
    STATE(71), 1,
      sym_line_continuation,
    STATE(119), 1,
      sym_image_tag,
    STATE(222), 1,
      sym_image_digest,
  [2087] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(319), 2,
      sym_imm_tok_pat_2b37705,
      sym_pat_79b8891,
    ACTIONS(317), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2104] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_DOLLAR,
    ACTIONS(450), 1,
      sym_semgrep_ellipsis,
    ACTIONS(452), 1,
      sym_pat_217c202,
    STATE(49), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(73), 1,
      sym_line_continuation,
    STATE(143), 2,
      sym_expansion,
      sym_expose_port,
  [2127] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      anon_sym_DOLLAR2,
    ACTIONS(459), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(204), 1,
      sym_imm_expansion,
    STATE(206), 1,
      sym_immediate_expansion,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2150] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      anon_sym_DOLLAR2,
    ACTIONS(438), 1,
      sym_imm_tok_pat_0c7fc22,
    ACTIONS(462), 1,
      sym_non_newline_whitespace,
    STATE(75), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_path_repeat1,
    STATE(190), 1,
      sym_immediate_expansion,
    STATE(216), 1,
      sym_imm_expansion,
  [2175] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(468), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(466), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2194] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(251), 3,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [2211] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(454), 1,
      sym_non_newline_whitespace,
    ACTIONS(470), 1,
      anon_sym_DOLLAR2,
    ACTIONS(473), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(190), 1,
      sym_immediate_expansion,
    STATE(216), 1,
      sym_imm_expansion,
    STATE(78), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2234] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      anon_sym_DOLLAR2,
    ACTIONS(478), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(79), 1,
      sym_line_continuation,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(204), 1,
      sym_imm_expansion,
    STATE(206), 1,
      sym_immediate_expansion,
  [2259] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment_line,
    STATE(267), 1,
      sym_anon_comment,
    ACTIONS(483), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(80), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [2280] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(348), 3,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [2297] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(348), 2,
      sym_imm_tok_pat_2b37705,
      sym_pat_79b8891,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2314] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(487), 2,
      sym_imm_tok_pat_2b37705,
      sym_pat_79b8891,
    ACTIONS(485), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2331] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      sym_imm_tok_pat_2b37705,
      sym_pat_79b8891,
    ACTIONS(249), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2348] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(267), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(269), 3,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [2365] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      anon_sym_DOLLAR2,
    ACTIONS(478), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(86), 1,
      sym_line_continuation,
    STATE(204), 1,
      sym_imm_expansion,
    STATE(206), 1,
      sym_immediate_expansion,
  [2390] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(354), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(356), 3,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [2407] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      sym_semgrep_ellipsis,
    ACTIONS(494), 1,
      sym_pat_18946a5,
    STATE(173), 1,
      sym_env_pair,
    STATE(246), 1,
      sym_env_key,
    STATE(88), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2430] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(311), 1,
      anon_sym_DOLLAR,
    ACTIONS(315), 1,
      sym_pat_1167a92,
    STATE(69), 1,
      sym_expansion,
    STATE(89), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_add_instruction_repeat1,
    STATE(252), 1,
      sym_path,
  [2452] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(255), 1,
      anon_sym_DASH_DASH,
    STATE(90), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(220), 1,
      sym_param,
    STATE(292), 1,
      sym_cmd_instruction,
  [2474] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(91), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_add_instruction_repeat1,
    STATE(230), 1,
      sym_path,
  [2496] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(92), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_add_instruction_repeat1,
    STATE(226), 1,
      sym_path,
  [2518] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(497), 1,
      anon_sym_DOLLAR,
    ACTIONS(500), 1,
      sym_pat_1167a92,
    STATE(69), 1,
      sym_expansion,
    STATE(252), 1,
      sym_path,
    STATE(93), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2538] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(93), 1,
      aux_sym_add_instruction_repeat1,
    STATE(94), 1,
      sym_line_continuation,
    STATE(228), 1,
      sym_path,
  [2560] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(311), 1,
      anon_sym_DOLLAR,
    ACTIONS(315), 1,
      sym_pat_1167a92,
    STATE(69), 1,
      sym_expansion,
    STATE(91), 1,
      aux_sym_add_instruction_repeat1,
    STATE(95), 1,
      sym_line_continuation,
    STATE(252), 1,
      sym_path,
  [2582] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(505), 2,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
    ACTIONS(503), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2598] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(93), 1,
      aux_sym_add_instruction_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(225), 1,
      sym_path,
  [2620] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_line_continuation,
    STATE(232), 1,
      sym_array_element,
    STATE(239), 1,
      sym_double_quoted_string,
    ACTIONS(380), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2640] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2656] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(275), 1,
      anon_sym_DOLLAR2,
    ACTIONS(277), 1,
      sym_imm_tok_pat_d2727a0,
    STATE(34), 1,
      aux_sym_image_digest_repeat1,
    STATE(100), 1,
      sym_line_continuation,
    STATE(146), 1,
      sym_imm_expansion,
    STATE(151), 1,
      sym_immediate_expansion,
  [2678] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(224), 1,
      anon_sym_DOLLAR2,
    ACTIONS(226), 1,
      sym_imm_tok_pat_bcfc287,
    STATE(26), 1,
      aux_sym_image_tag_repeat1,
    STATE(96), 1,
      sym_immediate_expansion,
    STATE(99), 1,
      sym_imm_expansion,
    STATE(101), 1,
      sym_line_continuation,
  [2700] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(319), 2,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2716] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      anon_sym_DOLLAR,
    ACTIONS(309), 1,
      sym_pat_8165e5f,
    STATE(19), 1,
      sym_expansion,
    STATE(71), 1,
      sym_image_name,
    STATE(103), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_image_spec,
  [2738] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(406), 1,
      sym_pat_4128122,
    ACTIONS(408), 1,
      sym_semgrep_ellipsis,
    ACTIONS(507), 1,
      sym_semgrep_metavariable,
    STATE(64), 1,
      aux_sym_label_instruction_repeat1,
    STATE(104), 1,
      sym_line_continuation,
    STATE(149), 1,
      sym_label_pair,
  [2760] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(348), 2,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2776] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
    ACTIONS(354), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2792] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      anon_sym_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2807] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(348), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2822] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(487), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2837] = 4,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(513), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(110), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2852] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      sym_pat_79b8891,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(354), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_d2727a0,
  [2867] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(518), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2882] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(249), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [2895] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(317), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [2908] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [2921] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_9a14b5c,
    STATE(60), 1,
      sym_expansion,
    STATE(116), 1,
      sym_line_continuation,
    STATE(294), 1,
      sym_image_alias,
  [2940] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(117), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym_path,
  [2959] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      anon_sym_DOLLAR2,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(251), 3,
      anon_sym_LF,
      sym_non_newline_whitespace,
      sym_imm_tok_pat_0c7fc22,
  [2974] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      anon_sym_AT,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_pat_79b8891,
    STATE(119), 1,
      sym_line_continuation,
    STATE(221), 1,
      sym_image_digest,
  [2993] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(528), 3,
      anon_sym_LF,
      sym_non_newline_whitespace,
      sym_imm_tok_pat_0c7fc22,
  [3008] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(485), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [3021] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(534), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [3036] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(354), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [3049] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR2,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(487), 3,
      anon_sym_LF,
      sym_non_newline_whitespace,
      sym_imm_tok_pat_0c7fc22,
  [3064] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(538), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [3079] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_DOLLAR2,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(348), 3,
      anon_sym_LF,
      sym_non_newline_whitespace,
      sym_imm_tok_pat_0c7fc22,
  [3094] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(540), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [3107] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(542), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_b295287,
  [3120] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(249), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [3133] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      sym_pat_b295287,
    STATE(22), 1,
      sym_expansion,
    STATE(130), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym_user_name_or_group,
  [3152] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(317), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [3165] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(548), 1,
      anon_sym_DASH_DASH,
    ACTIONS(551), 1,
      sym_pat_239fcac,
    STATE(220), 1,
      sym_param,
    STATE(132), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3182] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [3195] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(251), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3210] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(317), 2,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(319), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3225] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(354), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [3238] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(348), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3253] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      sym_pat_1167a92,
    STATE(79), 1,
      sym_expansion,
    STATE(138), 1,
      sym_line_continuation,
    STATE(250), 1,
      sym_path,
  [3272] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(559), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3287] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(561), 1,
      anon_sym_DOLLAR,
    ACTIONS(563), 1,
      sym_pat_441cd81,
    STATE(66), 1,
      sym_expansion,
    STATE(140), 1,
      sym_line_continuation,
    STATE(263), 1,
      sym_stopsignal_value,
  [3306] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(356), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3321] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(267), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [3334] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(567), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [3349] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      anon_sym_DOLLAR2,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(319), 3,
      anon_sym_LF,
      sym_non_newline_whitespace,
      sym_imm_tok_pat_0c7fc22,
  [3364] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      anon_sym_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(466), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [3379] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(251), 1,
      sym_pat_79b8891,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_d2727a0,
  [3394] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      sym_pat_79b8891,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_d2727a0,
  [3409] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_LF,
      sym_non_newline_whitespace,
      sym_imm_tok_pat_0c7fc22,
  [3424] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(571), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [3439] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      sym_pat_9a14b5c,
    STATE(60), 1,
      sym_expansion,
    STATE(150), 1,
      sym_line_continuation,
    STATE(262), 1,
      sym_image_alias,
  [3458] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(575), 1,
      sym_pat_79b8891,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(573), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_d2727a0,
  [3473] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(577), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(579), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [3488] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(583), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [3503] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      sym_pat_79b8891,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_d2727a0,
  [3518] = 5,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(589), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3535] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_441cd81,
  [3547] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(593), 1,
      sym_variable,
    STATE(109), 1,
      sym_expansion_body,
    STATE(157), 1,
      sym_line_continuation,
  [3563] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
    STATE(158), 1,
      sym_line_continuation,
    STATE(183), 1,
      sym_expansion_body,
  [3579] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      sym_non_newline_whitespace,
    STATE(159), 1,
      sym_line_continuation,
    STATE(207), 1,
      aux_sym_volume_instruction_repeat1,
  [3595] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      sym_variable,
    STATE(147), 1,
      sym_expansion_body,
    STATE(160), 1,
      sym_line_continuation,
  [3611] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      sym_variable,
    STATE(124), 1,
      sym_expansion_body,
    STATE(161), 1,
      sym_line_continuation,
  [3627] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    ACTIONS(613), 1,
      sym_variable,
    STATE(102), 1,
      sym_expansion_body,
    STATE(162), 1,
      sym_line_continuation,
  [3643] = 5,
    ACTIONS(615), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      anon_sym_BSLASH_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(163), 1,
      sym_line_continuation,
    STATE(211), 1,
      aux_sym_shell_command_repeat2,
  [3659] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
    STATE(164), 1,
      sym_line_continuation,
    STATE(192), 1,
      sym_expansion_body,
  [3675] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    ACTIONS(621), 1,
      sym_variable,
    STATE(42), 1,
      sym_expansion_body,
    STATE(165), 1,
      sym_line_continuation,
  [3691] = 4,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      anon_sym_BSLASH_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(166), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3705] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(630), 1,
      sym_variable,
    STATE(167), 1,
      sym_line_continuation,
    STATE(198), 1,
      sym_expansion_body,
  [3721] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    ACTIONS(634), 1,
      sym_variable,
    STATE(135), 1,
      sym_expansion_body,
    STATE(168), 1,
      sym_line_continuation,
  [3737] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      sym_variable,
    STATE(121), 1,
      sym_expansion_body,
    STATE(169), 1,
      sym_line_continuation,
  [3753] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(642), 1,
      sym_variable,
    STATE(131), 1,
      sym_expansion_body,
    STATE(170), 1,
      sym_line_continuation,
  [3769] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      sym_variable,
    STATE(171), 1,
      sym_line_continuation,
    STATE(212), 1,
      sym_expansion_body,
  [3785] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      sym_variable,
    STATE(55), 1,
      sym_expansion_body,
    STATE(172), 1,
      sym_line_continuation,
  [3801] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(652), 1,
      anon_sym_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(654), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3815] = 5,
    ACTIONS(617), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(166), 1,
      aux_sym_shell_command_repeat2,
    STATE(174), 1,
      sym_line_continuation,
  [3831] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(630), 1,
      sym_variable,
    STATE(175), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym_expansion_body,
  [3847] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(176), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3861] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    ACTIONS(665), 1,
      sym_variable,
    STATE(83), 1,
      sym_expansion_body,
    STATE(177), 1,
      sym_line_continuation,
  [3877] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      sym_variable,
    STATE(114), 1,
      sym_expansion_body,
    STATE(178), 1,
      sym_line_continuation,
  [3893] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(667), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_9a14b5c,
  [3905] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(669), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3917] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      sym_variable,
    STATE(181), 1,
      sym_line_continuation,
    STATE(188), 1,
      sym_expansion_body,
  [3933] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(677), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3947] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_9a14b5c,
  [3959] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(681), 1,
      sym_non_newline_whitespace,
    STATE(184), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3973] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_9a14b5c,
  [3985] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(354), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_9a14b5c,
  [3997] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_9a14b5c,
  [4009] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(485), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_441cd81,
  [4021] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      sym_variable,
    STATE(189), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym_expansion_body,
  [4037] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(528), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(530), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4051] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_441cd81,
  [4063] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(485), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_9a14b5c,
  [4075] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_string_array_repeat1,
    STATE(193), 1,
      sym_line_continuation,
  [4091] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4105] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(538), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [4119] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_441cd81,
  [4131] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      aux_sym_string_array_repeat1,
    STATE(197), 1,
      sym_line_continuation,
  [4147] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(485), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4161] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(354), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_441cd81,
  [4173] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(518), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [4187] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4201] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      sym_variable,
    STATE(144), 1,
      sym_expansion_body,
    STATE(202), 1,
      sym_line_continuation,
  [4217] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(317), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4231] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(251), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4245] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    ACTIONS(665), 1,
      sym_variable,
    STATE(72), 1,
      sym_expansion_body,
    STATE(205), 1,
      sym_line_continuation,
  [4261] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(528), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(530), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4275] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      sym_non_newline_whitespace,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(184), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(207), 1,
      sym_line_continuation,
  [4291] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(694), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [4305] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4319] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(696), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [4331] = 5,
    ACTIONS(617), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(166), 1,
      aux_sym_shell_command_repeat2,
    STATE(211), 1,
      sym_line_continuation,
  [4347] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(212), 1,
      sym_line_continuation,
    ACTIONS(485), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4361] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(213), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4375] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(700), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [4387] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(317), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4401] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(251), 1,
      sym_imm_tok_pat_0c7fc22,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4415] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      sym_variable,
    STATE(215), 1,
      sym_expansion_body,
    STATE(217), 1,
      sym_line_continuation,
  [4431] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(218), 1,
      sym_line_continuation,
    ACTIONS(702), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      sym_imm_tok_pat_441cd81,
  [4443] = 5,
    ACTIONS(617), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(174), 1,
      aux_sym_shell_command_repeat2,
    STATE(219), 1,
      sym_line_continuation,
  [4459] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(704), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [4470] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      sym_pat_79b8891,
    STATE(221), 1,
      sym_line_continuation,
  [4483] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      sym_pat_79b8891,
    STATE(222), 1,
      sym_line_continuation,
  [4496] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_LF,
    ACTIONS(716), 1,
      sym_pat_79b8891,
    STATE(223), 1,
      sym_line_continuation,
  [4509] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_DOLLAR,
    ACTIONS(720), 1,
      sym_pat_1167a92,
    STATE(224), 1,
      sym_line_continuation,
  [4522] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      sym_non_newline_whitespace,
    STATE(225), 1,
      sym_line_continuation,
  [4535] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      sym_non_newline_whitespace,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_line_continuation,
  [4548] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(227), 1,
      sym_line_continuation,
    ACTIONS(728), 2,
      sym_semgrep_metavariable,
      sym_pat_4de4cb9,
  [4559] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      sym_non_newline_whitespace,
    ACTIONS(730), 1,
      anon_sym_LF,
    STATE(228), 1,
      sym_line_continuation,
  [4572] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_EQ,
    ACTIONS(734), 1,
      sym_imm_tok_pat_3d340f6,
    STATE(229), 1,
      sym_line_continuation,
  [4585] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      sym_non_newline_whitespace,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(230), 1,
      sym_line_continuation,
  [4598] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(231), 1,
      sym_line_continuation,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4609] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(661), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4620] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(233), 1,
      sym_line_continuation,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4631] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_DOLLAR,
    ACTIONS(740), 1,
      sym_pat_1167a92,
    STATE(234), 1,
      sym_line_continuation,
  [4644] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_DOLLAR,
    ACTIONS(740), 1,
      sym_pat_8165e5f,
    STATE(235), 1,
      sym_line_continuation,
  [4657] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(236), 1,
      sym_line_continuation,
    ACTIONS(738), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [4668] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(237), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym_string_array,
  [4681] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(238), 1,
      sym_line_continuation,
    ACTIONS(742), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [4692] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(239), 1,
      sym_line_continuation,
    ACTIONS(744), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4703] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(240), 1,
      sym_line_continuation,
    ACTIONS(679), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [4714] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 1,
      sym_pat_79b8891,
    STATE(241), 1,
      sym_line_continuation,
  [4727] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym_line_continuation,
  [4740] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(756), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_line_continuation,
  [4753] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_line_continuation,
  [4763] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_line_continuation,
  [4773] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(246), 1,
      sym_line_continuation,
  [4783] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(247), 1,
      sym_line_continuation,
  [4793] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_line_continuation,
  [4803] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_LF,
    STATE(249), 1,
      sym_line_continuation,
  [4813] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_line_continuation,
  [4823] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      sym_pat_4fd4a56,
    STATE(251), 1,
      sym_line_continuation,
  [4833] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      sym_non_newline_whitespace,
    STATE(252), 1,
      sym_line_continuation,
  [4843] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      sym_pat_4fd4a56,
    STATE(253), 1,
      sym_line_continuation,
  [4853] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_line_continuation,
  [4863] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_line_continuation,
  [4873] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_line_continuation,
  [4883] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_EQ,
    STATE(257), 1,
      sym_line_continuation,
  [4893] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      sym_imm_tok_pat_f43f746,
    STATE(258), 1,
      sym_line_continuation,
  [4903] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_line_continuation,
  [4913] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_LF,
    STATE(260), 1,
      sym_line_continuation,
  [4923] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_EQ,
    STATE(261), 1,
      sym_line_continuation,
  [4933] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_line_continuation,
  [4943] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
  [4953] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [4963] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_EQ,
    STATE(265), 1,
      sym_line_continuation,
  [4973] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      sym_pat_4fd4a56,
    STATE(266), 1,
      sym_line_continuation,
  [4983] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
  [4993] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    STATE(268), 1,
      sym_line_continuation,
  [5003] = 3,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      anon_sym_BSLASH_LF,
    STATE(269), 1,
      sym_line_continuation,
  [5013] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(270), 1,
      sym_line_continuation,
  [5023] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
  [5033] = 3,
    ACTIONS(810), 1,
      anon_sym_LF,
    ACTIONS(812), 1,
      anon_sym_BSLASH_LF,
    STATE(272), 1,
      sym_line_continuation,
  [5043] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_LF,
    STATE(273), 1,
      sym_line_continuation,
  [5053] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym_line_continuation,
  [5063] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      anon_sym_LF,
    STATE(275), 1,
      sym_line_continuation,
  [5073] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(276), 1,
      sym_line_continuation,
  [5083] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_line_continuation,
  [5093] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(278), 1,
      sym_line_continuation,
  [5103] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym_line_continuation,
  [5113] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_line_continuation,
  [5123] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      sym_imm_tok_pat_f43f746,
    STATE(281), 1,
      sym_line_continuation,
  [5133] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      sym_imm_tok_pat_8713919,
    STATE(282), 1,
      sym_line_continuation,
  [5143] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(396), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym_line_continuation,
  [5153] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      anon_sym_LF,
    STATE(284), 1,
      sym_line_continuation,
  [5163] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_line_continuation,
  [5173] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      anon_sym_LF,
    STATE(286), 1,
      sym_line_continuation,
  [5183] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      anon_sym_LF,
    STATE(287), 1,
      sym_line_continuation,
  [5193] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      sym_line_continuation,
  [5203] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      anon_sym_LF,
    STATE(289), 1,
      sym_line_continuation,
  [5213] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      anon_sym_LF,
    STATE(290), 1,
      sym_line_continuation,
  [5223] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      sym_line_continuation,
  [5233] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(848), 1,
      anon_sym_LF,
    STATE(292), 1,
      sym_line_continuation,
  [5243] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(293), 1,
      sym_line_continuation,
  [5253] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5263] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_line_continuation,
  [5273] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(296), 1,
      sym_line_continuation,
  [5283] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_line_continuation,
  [5293] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_line_continuation,
  [5303] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_line_continuation,
  [5313] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_line_continuation,
  [5323] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(866), 1,
      sym_imm_tok_pat_8713919,
    STATE(301), 1,
      sym_line_continuation,
  [5333] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      anon_sym_EQ,
    STATE(302), 1,
      sym_line_continuation,
  [5343] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(870), 1,
      sym_imm_tok_pat_8713919,
    STATE(303), 1,
      sym_line_continuation,
  [5353] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(872), 1,
      anon_sym_EQ,
    STATE(304), 1,
      sym_line_continuation,
  [5363] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(874), 1,
      sym_imm_tok_pat_8713919,
    STATE(305), 1,
      sym_line_continuation,
  [5373] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      sym_imm_tok_pat_8713919,
    STATE(306), 1,
      sym_line_continuation,
  [5383] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(878), 1,
      sym_imm_tok_pat_8713919,
    STATE(307), 1,
      sym_line_continuation,
  [5393] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(880), 1,
      sym_imm_tok_pat_8713919,
    STATE(308), 1,
      sym_line_continuation,
  [5403] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(882), 1,
      sym_imm_tok_pat_8713919,
    STATE(309), 1,
      sym_line_continuation,
  [5413] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      sym_imm_tok_pat_8713919,
    STATE(310), 1,
      sym_line_continuation,
  [5423] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(886), 1,
      sym_imm_tok_pat_8713919,
    STATE(311), 1,
      sym_line_continuation,
  [5433] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      sym_imm_tok_pat_8713919,
    STATE(312), 1,
      sym_line_continuation,
  [5443] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(890), 1,
      sym_imm_tok_pat_8713919,
    STATE(313), 1,
      sym_line_continuation,
  [5453] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(892), 1,
      sym_imm_tok_pat_8713919,
    STATE(314), 1,
      sym_line_continuation,
  [5463] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(894), 1,
      sym_imm_tok_pat_8713919,
    STATE(315), 1,
      sym_line_continuation,
  [5473] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(896), 1,
      sym_imm_tok_pat_f43f746,
    STATE(316), 1,
      sym_line_continuation,
  [5483] = 1,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 363,
  [SMALL_STATE(8)] = 404,
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 486,
  [SMALL_STATE(11)] = 517,
  [SMALL_STATE(12)] = 550,
  [SMALL_STATE(13)] = 580,
  [SMALL_STATE(14)] = 610,
  [SMALL_STATE(15)] = 640,
  [SMALL_STATE(16)] = 670,
  [SMALL_STATE(17)] = 700,
  [SMALL_STATE(18)] = 732,
  [SMALL_STATE(19)] = 760,
  [SMALL_STATE(20)] = 790,
  [SMALL_STATE(21)] = 819,
  [SMALL_STATE(22)] = 846,
  [SMALL_STATE(23)] = 875,
  [SMALL_STATE(24)] = 904,
  [SMALL_STATE(25)] = 933,
  [SMALL_STATE(26)] = 962,
  [SMALL_STATE(27)] = 991,
  [SMALL_STATE(28)] = 1018,
  [SMALL_STATE(29)] = 1044,
  [SMALL_STATE(30)] = 1062,
  [SMALL_STATE(31)] = 1088,
  [SMALL_STATE(32)] = 1114,
  [SMALL_STATE(33)] = 1132,
  [SMALL_STATE(34)] = 1160,
  [SMALL_STATE(35)] = 1188,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1242,
  [SMALL_STATE(38)] = 1266,
  [SMALL_STATE(39)] = 1294,
  [SMALL_STATE(40)] = 1322,
  [SMALL_STATE(41)] = 1350,
  [SMALL_STATE(42)] = 1378,
  [SMALL_STATE(43)] = 1396,
  [SMALL_STATE(44)] = 1422,
  [SMALL_STATE(45)] = 1450,
  [SMALL_STATE(46)] = 1476,
  [SMALL_STATE(47)] = 1504,
  [SMALL_STATE(48)] = 1532,
  [SMALL_STATE(49)] = 1556,
  [SMALL_STATE(50)] = 1582,
  [SMALL_STATE(51)] = 1600,
  [SMALL_STATE(52)] = 1628,
  [SMALL_STATE(53)] = 1656,
  [SMALL_STATE(54)] = 1674,
  [SMALL_STATE(55)] = 1698,
  [SMALL_STATE(56)] = 1715,
  [SMALL_STATE(57)] = 1732,
  [SMALL_STATE(58)] = 1757,
  [SMALL_STATE(59)] = 1782,
  [SMALL_STATE(60)] = 1805,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1853,
  [SMALL_STATE(63)] = 1878,
  [SMALL_STATE(64)] = 1903,
  [SMALL_STATE(65)] = 1926,
  [SMALL_STATE(66)] = 1947,
  [SMALL_STATE(67)] = 1972,
  [SMALL_STATE(68)] = 1997,
  [SMALL_STATE(69)] = 2020,
  [SMALL_STATE(70)] = 2045,
  [SMALL_STATE(71)] = 2062,
  [SMALL_STATE(72)] = 2087,
  [SMALL_STATE(73)] = 2104,
  [SMALL_STATE(74)] = 2127,
  [SMALL_STATE(75)] = 2150,
  [SMALL_STATE(76)] = 2175,
  [SMALL_STATE(77)] = 2194,
  [SMALL_STATE(78)] = 2211,
  [SMALL_STATE(79)] = 2234,
  [SMALL_STATE(80)] = 2259,
  [SMALL_STATE(81)] = 2280,
  [SMALL_STATE(82)] = 2297,
  [SMALL_STATE(83)] = 2314,
  [SMALL_STATE(84)] = 2331,
  [SMALL_STATE(85)] = 2348,
  [SMALL_STATE(86)] = 2365,
  [SMALL_STATE(87)] = 2390,
  [SMALL_STATE(88)] = 2407,
  [SMALL_STATE(89)] = 2430,
  [SMALL_STATE(90)] = 2452,
  [SMALL_STATE(91)] = 2474,
  [SMALL_STATE(92)] = 2496,
  [SMALL_STATE(93)] = 2518,
  [SMALL_STATE(94)] = 2538,
  [SMALL_STATE(95)] = 2560,
  [SMALL_STATE(96)] = 2582,
  [SMALL_STATE(97)] = 2598,
  [SMALL_STATE(98)] = 2620,
  [SMALL_STATE(99)] = 2640,
  [SMALL_STATE(100)] = 2656,
  [SMALL_STATE(101)] = 2678,
  [SMALL_STATE(102)] = 2700,
  [SMALL_STATE(103)] = 2716,
  [SMALL_STATE(104)] = 2738,
  [SMALL_STATE(105)] = 2760,
  [SMALL_STATE(106)] = 2776,
  [SMALL_STATE(107)] = 2792,
  [SMALL_STATE(108)] = 2807,
  [SMALL_STATE(109)] = 2822,
  [SMALL_STATE(110)] = 2837,
  [SMALL_STATE(111)] = 2852,
  [SMALL_STATE(112)] = 2867,
  [SMALL_STATE(113)] = 2882,
  [SMALL_STATE(114)] = 2895,
  [SMALL_STATE(115)] = 2908,
  [SMALL_STATE(116)] = 2921,
  [SMALL_STATE(117)] = 2940,
  [SMALL_STATE(118)] = 2959,
  [SMALL_STATE(119)] = 2974,
  [SMALL_STATE(120)] = 2993,
  [SMALL_STATE(121)] = 3008,
  [SMALL_STATE(122)] = 3021,
  [SMALL_STATE(123)] = 3036,
  [SMALL_STATE(124)] = 3049,
  [SMALL_STATE(125)] = 3064,
  [SMALL_STATE(126)] = 3079,
  [SMALL_STATE(127)] = 3094,
  [SMALL_STATE(128)] = 3107,
  [SMALL_STATE(129)] = 3120,
  [SMALL_STATE(130)] = 3133,
  [SMALL_STATE(131)] = 3152,
  [SMALL_STATE(132)] = 3165,
  [SMALL_STATE(133)] = 3182,
  [SMALL_STATE(134)] = 3195,
  [SMALL_STATE(135)] = 3210,
  [SMALL_STATE(136)] = 3225,
  [SMALL_STATE(137)] = 3238,
  [SMALL_STATE(138)] = 3253,
  [SMALL_STATE(139)] = 3272,
  [SMALL_STATE(140)] = 3287,
  [SMALL_STATE(141)] = 3306,
  [SMALL_STATE(142)] = 3321,
  [SMALL_STATE(143)] = 3334,
  [SMALL_STATE(144)] = 3349,
  [SMALL_STATE(145)] = 3364,
  [SMALL_STATE(146)] = 3379,
  [SMALL_STATE(147)] = 3394,
  [SMALL_STATE(148)] = 3409,
  [SMALL_STATE(149)] = 3424,
  [SMALL_STATE(150)] = 3439,
  [SMALL_STATE(151)] = 3458,
  [SMALL_STATE(152)] = 3473,
  [SMALL_STATE(153)] = 3488,
  [SMALL_STATE(154)] = 3503,
  [SMALL_STATE(155)] = 3518,
  [SMALL_STATE(156)] = 3535,
  [SMALL_STATE(157)] = 3547,
  [SMALL_STATE(158)] = 3563,
  [SMALL_STATE(159)] = 3579,
  [SMALL_STATE(160)] = 3595,
  [SMALL_STATE(161)] = 3611,
  [SMALL_STATE(162)] = 3627,
  [SMALL_STATE(163)] = 3643,
  [SMALL_STATE(164)] = 3659,
  [SMALL_STATE(165)] = 3675,
  [SMALL_STATE(166)] = 3691,
  [SMALL_STATE(167)] = 3705,
  [SMALL_STATE(168)] = 3721,
  [SMALL_STATE(169)] = 3737,
  [SMALL_STATE(170)] = 3753,
  [SMALL_STATE(171)] = 3769,
  [SMALL_STATE(172)] = 3785,
  [SMALL_STATE(173)] = 3801,
  [SMALL_STATE(174)] = 3815,
  [SMALL_STATE(175)] = 3831,
  [SMALL_STATE(176)] = 3847,
  [SMALL_STATE(177)] = 3861,
  [SMALL_STATE(178)] = 3877,
  [SMALL_STATE(179)] = 3893,
  [SMALL_STATE(180)] = 3905,
  [SMALL_STATE(181)] = 3917,
  [SMALL_STATE(182)] = 3933,
  [SMALL_STATE(183)] = 3947,
  [SMALL_STATE(184)] = 3959,
  [SMALL_STATE(185)] = 3973,
  [SMALL_STATE(186)] = 3985,
  [SMALL_STATE(187)] = 3997,
  [SMALL_STATE(188)] = 4009,
  [SMALL_STATE(189)] = 4021,
  [SMALL_STATE(190)] = 4037,
  [SMALL_STATE(191)] = 4051,
  [SMALL_STATE(192)] = 4063,
  [SMALL_STATE(193)] = 4075,
  [SMALL_STATE(194)] = 4091,
  [SMALL_STATE(195)] = 4105,
  [SMALL_STATE(196)] = 4119,
  [SMALL_STATE(197)] = 4131,
  [SMALL_STATE(198)] = 4147,
  [SMALL_STATE(199)] = 4161,
  [SMALL_STATE(200)] = 4173,
  [SMALL_STATE(201)] = 4187,
  [SMALL_STATE(202)] = 4201,
  [SMALL_STATE(203)] = 4217,
  [SMALL_STATE(204)] = 4231,
  [SMALL_STATE(205)] = 4245,
  [SMALL_STATE(206)] = 4261,
  [SMALL_STATE(207)] = 4275,
  [SMALL_STATE(208)] = 4291,
  [SMALL_STATE(209)] = 4305,
  [SMALL_STATE(210)] = 4319,
  [SMALL_STATE(211)] = 4331,
  [SMALL_STATE(212)] = 4347,
  [SMALL_STATE(213)] = 4361,
  [SMALL_STATE(214)] = 4375,
  [SMALL_STATE(215)] = 4387,
  [SMALL_STATE(216)] = 4401,
  [SMALL_STATE(217)] = 4415,
  [SMALL_STATE(218)] = 4431,
  [SMALL_STATE(219)] = 4443,
  [SMALL_STATE(220)] = 4459,
  [SMALL_STATE(221)] = 4470,
  [SMALL_STATE(222)] = 4483,
  [SMALL_STATE(223)] = 4496,
  [SMALL_STATE(224)] = 4509,
  [SMALL_STATE(225)] = 4522,
  [SMALL_STATE(226)] = 4535,
  [SMALL_STATE(227)] = 4548,
  [SMALL_STATE(228)] = 4559,
  [SMALL_STATE(229)] = 4572,
  [SMALL_STATE(230)] = 4585,
  [SMALL_STATE(231)] = 4598,
  [SMALL_STATE(232)] = 4609,
  [SMALL_STATE(233)] = 4620,
  [SMALL_STATE(234)] = 4631,
  [SMALL_STATE(235)] = 4644,
  [SMALL_STATE(236)] = 4657,
  [SMALL_STATE(237)] = 4668,
  [SMALL_STATE(238)] = 4681,
  [SMALL_STATE(239)] = 4692,
  [SMALL_STATE(240)] = 4703,
  [SMALL_STATE(241)] = 4714,
  [SMALL_STATE(242)] = 4727,
  [SMALL_STATE(243)] = 4740,
  [SMALL_STATE(244)] = 4753,
  [SMALL_STATE(245)] = 4763,
  [SMALL_STATE(246)] = 4773,
  [SMALL_STATE(247)] = 4783,
  [SMALL_STATE(248)] = 4793,
  [SMALL_STATE(249)] = 4803,
  [SMALL_STATE(250)] = 4813,
  [SMALL_STATE(251)] = 4823,
  [SMALL_STATE(252)] = 4833,
  [SMALL_STATE(253)] = 4843,
  [SMALL_STATE(254)] = 4853,
  [SMALL_STATE(255)] = 4863,
  [SMALL_STATE(256)] = 4873,
  [SMALL_STATE(257)] = 4883,
  [SMALL_STATE(258)] = 4893,
  [SMALL_STATE(259)] = 4903,
  [SMALL_STATE(260)] = 4913,
  [SMALL_STATE(261)] = 4923,
  [SMALL_STATE(262)] = 4933,
  [SMALL_STATE(263)] = 4943,
  [SMALL_STATE(264)] = 4953,
  [SMALL_STATE(265)] = 4963,
  [SMALL_STATE(266)] = 4973,
  [SMALL_STATE(267)] = 4983,
  [SMALL_STATE(268)] = 4993,
  [SMALL_STATE(269)] = 5003,
  [SMALL_STATE(270)] = 5013,
  [SMALL_STATE(271)] = 5023,
  [SMALL_STATE(272)] = 5033,
  [SMALL_STATE(273)] = 5043,
  [SMALL_STATE(274)] = 5053,
  [SMALL_STATE(275)] = 5063,
  [SMALL_STATE(276)] = 5073,
  [SMALL_STATE(277)] = 5083,
  [SMALL_STATE(278)] = 5093,
  [SMALL_STATE(279)] = 5103,
  [SMALL_STATE(280)] = 5113,
  [SMALL_STATE(281)] = 5123,
  [SMALL_STATE(282)] = 5133,
  [SMALL_STATE(283)] = 5143,
  [SMALL_STATE(284)] = 5153,
  [SMALL_STATE(285)] = 5163,
  [SMALL_STATE(286)] = 5173,
  [SMALL_STATE(287)] = 5183,
  [SMALL_STATE(288)] = 5193,
  [SMALL_STATE(289)] = 5203,
  [SMALL_STATE(290)] = 5213,
  [SMALL_STATE(291)] = 5223,
  [SMALL_STATE(292)] = 5233,
  [SMALL_STATE(293)] = 5243,
  [SMALL_STATE(294)] = 5253,
  [SMALL_STATE(295)] = 5263,
  [SMALL_STATE(296)] = 5273,
  [SMALL_STATE(297)] = 5283,
  [SMALL_STATE(298)] = 5293,
  [SMALL_STATE(299)] = 5303,
  [SMALL_STATE(300)] = 5313,
  [SMALL_STATE(301)] = 5323,
  [SMALL_STATE(302)] = 5333,
  [SMALL_STATE(303)] = 5343,
  [SMALL_STATE(304)] = 5353,
  [SMALL_STATE(305)] = 5363,
  [SMALL_STATE(306)] = 5373,
  [SMALL_STATE(307)] = 5383,
  [SMALL_STATE(308)] = 5393,
  [SMALL_STATE(309)] = 5403,
  [SMALL_STATE(310)] = 5413,
  [SMALL_STATE(311)] = 5423,
  [SMALL_STATE(312)] = 5433,
  [SMALL_STATE(313)] = 5443,
  [SMALL_STATE(314)] = 5453,
  [SMALL_STATE(315)] = 5463,
  [SMALL_STATE(316)] = 5473,
  [SMALL_STATE(317)] = 5483,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(32),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(205),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(56),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(162),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(96),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(178),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(127),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(168),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(139),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(139),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(160),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(151),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(202),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(120),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(157),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(145),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(76),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(189),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(218),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(265),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(153),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(158),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(179),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(175),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(206),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(217),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(190),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(266),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(182),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(261),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(171),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(69),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(110),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(281),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(210),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(98),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(117),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [802] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
