#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 428
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 61
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 69

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym_user_name_or_group_token1 = 15,
  aux_sym_immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym_stopsignal_value_token1 = 23,
  aux_sym_stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  aux_sym_path_token3 = 33,
  aux_sym_path_with_heredoc_token1 = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_DOLLAR2 = 36,
  anon_sym_LBRACE = 37,
  aux_sym_expansion_body_token1 = 38,
  anon_sym_RBRACE = 39,
  sym_variable = 40,
  aux_sym_spaced_env_pair_token1 = 41,
  aux_sym_env_key_token1 = 42,
  aux_sym_expose_port_token1 = 43,
  anon_sym_SLASHtcp = 44,
  anon_sym_SLASHudp = 45,
  aux_sym_label_pair_token1 = 46,
  aux_sym_image_name_token1 = 47,
  aux_sym_image_name_token2 = 48,
  aux_sym_image_tag_token1 = 49,
  anon_sym_AT = 50,
  aux_sym_image_digest_token1 = 51,
  anon_sym_DASH_DASH = 52,
  aux_sym_param_token1 = 53,
  aux_sym_param_token2 = 54,
  anon_sym_mount = 55,
  anon_sym_COMMA = 56,
  aux_sym_mount_param_param_token1 = 57,
  aux_sym_image_alias_token1 = 58,
  aux_sym_image_alias_token2 = 59,
  aux_sym_shell_fragment_token1 = 60,
  aux_sym_shell_fragment_token2 = 61,
  aux_sym_shell_fragment_token3 = 62,
  aux_sym_shell_fragment_token4 = 63,
  sym_line_continuation = 64,
  sym_required_line_continuation = 65,
  anon_sym_LBRACK = 66,
  anon_sym_COMMA2 = 67,
  anon_sym_RBRACK = 68,
  anon_sym_DQUOTE = 69,
  aux_sym_json_string_token1 = 70,
  sym_json_escape_sequence = 71,
  aux_sym_double_quoted_string_token1 = 72,
  anon_sym_BSLASH = 73,
  anon_sym_SQUOTE = 74,
  aux_sym_single_quoted_string_token1 = 75,
  aux_sym_unquoted_string_token1 = 76,
  anon_sym_BSLASH2 = 77,
  sym_double_quoted_escape_sequence = 78,
  sym_single_quoted_escape_sequence = 79,
  sym_non_newline_whitespace = 80,
  sym_comment = 81,
  sym_semgrep_metavariable = 82,
  sym_semgrep_ellipsis = 83,
  sym_heredoc_marker = 84,
  sym_heredoc_line = 85,
  sym_heredoc_end = 86,
  sym_heredoc_nl = 87,
  sym_error_sentinel = 88,
  sym_source_file = 89,
  sym_instruction = 90,
  sym_from_instruction = 91,
  sym_run_instruction = 92,
  sym_cmd_instruction = 93,
  sym_label_instruction = 94,
  sym_expose_instruction = 95,
  sym_env_instruction = 96,
  sym_add_instruction = 97,
  sym_copy_instruction = 98,
  sym_entrypoint_instruction = 99,
  sym_volume_instruction = 100,
  sym_user_instruction = 101,
  sym_user_name_or_group = 102,
  sym_immediate_user_name_or_group = 103,
  sym_immediate_user_name_or_group_fragment = 104,
  sym_workdir_instruction = 105,
  sym_arg_instruction = 106,
  sym_onbuild_instruction = 107,
  sym_stopsignal_instruction = 108,
  sym_stopsignal_value = 109,
  sym_healthcheck_instruction = 110,
  sym_shell_instruction = 111,
  sym_maintainer_instruction = 112,
  sym_cross_build_instruction = 113,
  sym_heredoc_block = 114,
  sym_path = 115,
  sym_path_with_heredoc = 116,
  sym_expansion = 117,
  sym_immediate_expansion = 118,
  sym_imm_expansion = 119,
  sym_expansion_body = 120,
  sym_env_pair = 121,
  sym_spaced_env_pair = 122,
  sym_env_key = 123,
  sym_expose_port = 124,
  sym_label_pair = 125,
  sym_image_spec = 126,
  sym_image_name = 127,
  sym_image_tag = 128,
  sym_image_digest = 129,
  sym_param = 130,
  sym_mount_param = 131,
  sym_mount_param_param = 132,
  sym_image_alias = 133,
  sym_shell_command = 134,
  sym_shell_fragment = 135,
  sym_json_string_array = 136,
  sym_json_string = 137,
  sym_double_quoted_string = 138,
  sym_single_quoted_string = 139,
  sym_unquoted_string = 140,
  sym_array_element = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_run_instruction_repeat1 = 143,
  aux_sym_run_instruction_repeat2 = 144,
  aux_sym_label_instruction_repeat1 = 145,
  aux_sym_expose_instruction_repeat1 = 146,
  aux_sym_env_instruction_repeat1 = 147,
  aux_sym_add_instruction_repeat1 = 148,
  aux_sym_add_instruction_repeat2 = 149,
  aux_sym_volume_instruction_repeat1 = 150,
  aux_sym_user_name_or_group_repeat1 = 151,
  aux_sym_stopsignal_value_repeat1 = 152,
  aux_sym_healthcheck_instruction_repeat1 = 153,
  aux_sym_heredoc_block_repeat1 = 154,
  aux_sym_path_repeat1 = 155,
  aux_sym_image_name_repeat1 = 156,
  aux_sym_image_tag_repeat1 = 157,
  aux_sym_image_digest_repeat1 = 158,
  aux_sym_mount_param_repeat1 = 159,
  aux_sym_image_alias_repeat1 = 160,
  aux_sym_shell_command_repeat1 = 161,
  aux_sym_shell_fragment_repeat1 = 162,
  aux_sym_json_string_array_repeat1 = 163,
  aux_sym_json_string_repeat1 = 164,
  aux_sym_double_quoted_string_repeat1 = 165,
  aux_sym_single_quoted_string_repeat1 = 166,
  aux_sym_unquoted_string_repeat1 = 167,
  alias_sym_imm_tok_at = 168,
  alias_sym_imm_tok_bslashspace = 169,
  alias_sym_imm_tok_colon = 170,
  alias_sym_imm_tok_comma = 171,
  alias_sym_imm_tok_dollar = 172,
  alias_sym_imm_tok_eq = 173,
  alias_sym_imm_tok_lcurl = 174,
  alias_sym_imm_tok_mount = 175,
  alias_sym_imm_tok_pat_0ab9261 = 176,
  alias_sym_imm_tok_pat_0c7fc22 = 177,
  alias_sym_imm_tok_pat_2b37705 = 178,
  alias_sym_imm_tok_pat_3a2a380 = 179,
  alias_sym_imm_tok_pat_3d340f6 = 180,
  alias_sym_imm_tok_pat_441cd81 = 181,
  alias_sym_imm_tok_pat_589b0f8 = 182,
  alias_sym_imm_tok_pat_7642c4f = 183,
  alias_sym_imm_tok_pat_8713919 = 184,
  alias_sym_imm_tok_pat_9a14b5c = 185,
  alias_sym_imm_tok_pat_9f6bbb9 = 186,
  alias_sym_imm_tok_pat_bcfc287 = 187,
  alias_sym_imm_tok_pat_d2727a0 = 188,
  alias_sym_imm_tok_pat_f43f746 = 189,
  alias_sym_imm_tok_pat_f46f69d = 190,
  alias_sym_imm_tok_pat_f6e1de8 = 191,
  alias_sym_imm_tok_rcurl = 192,
  alias_sym_pat_05444c2 = 193,
  alias_sym_pat_0851d06 = 194,
  alias_sym_pat_2b6adbc = 195,
  alias_sym_pat_4128122 = 196,
  alias_sym_pat_441cd81 = 197,
  alias_sym_pat_4a2f38a = 198,
  alias_sym_pat_4de4cb9 = 199,
  alias_sym_pat_4fd4a56 = 200,
  alias_sym_pat_8165e5f = 201,
  alias_sym_pat_9873c86 = 202,
  alias_sym_pat_9a14b5c = 203,
  alias_sym_pat_a667757 = 204,
  alias_sym_pat_add = 205,
  alias_sym_pat_arg = 206,
  alias_sym_pat_as = 207,
  alias_sym_pat_b1120d3 = 208,
  alias_sym_pat_cmd = 209,
  alias_sym_pat_copy = 210,
  alias_sym_pat_e0f3805 = 211,
  alias_sym_pat_ea34a52 = 212,
  alias_sym_pat_eda9032 = 213,
  alias_sym_pat_entr = 214,
  alias_sym_pat_env = 215,
  alias_sym_pat_expose = 216,
  alias_sym_pat_f8ab07f = 217,
  alias_sym_pat_from = 218,
  alias_sym_pat_heal = 219,
  alias_sym_pat_label = 220,
  alias_sym_pat_main = 221,
  alias_sym_pat_onbu = 222,
  alias_sym_pat_run = 223,
  alias_sym_pat_shell = 224,
  alias_sym_pat_stop = 225,
  alias_sym_pat_user = 226,
  alias_sym_pat_volume = 227,
  alias_sym_pat_work = 228,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "from_instruction_token1",
  [aux_sym_from_instruction_token2] = "from_instruction_token2",
  [aux_sym_run_instruction_token1] = "run_instruction_token1",
  [aux_sym_cmd_instruction_token1] = "cmd_instruction_token1",
  [aux_sym_label_instruction_token1] = "label_instruction_token1",
  [aux_sym_expose_instruction_token1] = "expose_instruction_token1",
  [aux_sym_env_instruction_token1] = "env_instruction_token1",
  [aux_sym_add_instruction_token1] = "add_instruction_token1",
  [aux_sym_copy_instruction_token1] = "copy_instruction_token1",
  [aux_sym_entrypoint_instruction_token1] = "entrypoint_instruction_token1",
  [aux_sym_volume_instruction_token1] = "volume_instruction_token1",
  [aux_sym_user_instruction_token1] = "user_instruction_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_or_group_token1] = "user_name_or_group_token1",
  [aux_sym_immediate_user_name_or_group_fragment_token1] = "immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "workdir_instruction_token1",
  [aux_sym_arg_instruction_token1] = "arg_instruction_token1",
  [aux_sym_arg_instruction_token2] = "arg_instruction_token2",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "onbuild_instruction_token1",
  [aux_sym_stopsignal_instruction_token1] = "stopsignal_instruction_token1",
  [aux_sym_stopsignal_value_token1] = "stopsignal_value_token1",
  [aux_sym_stopsignal_value_token2] = "stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "healthcheck_instruction_token1",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "shell_instruction_token1",
  [aux_sym_maintainer_instruction_token1] = "maintainer_instruction_token1",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "cross_build_instruction_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_path_token3] = "path_token3",
  [aux_sym_path_with_heredoc_token1] = "path_with_heredoc_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_body_token1] = "expansion_body_token1",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym_spaced_env_pair_token1] = "spaced_env_pair_token1",
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [aux_sym_shell_fragment_token4] = "shell_fragment_token4",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "double_quoted_escape_sequence",
  [sym_single_quoted_escape_sequence] = "single_quoted_escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_heredoc_marker] = "heredoc_marker",
  [sym_heredoc_line] = "heredoc_line",
  [sym_heredoc_end] = "heredoc_end",
  [sym_heredoc_nl] = "heredoc_nl",
  [sym_error_sentinel] = "error_sentinel",
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
  [sym_heredoc_block] = "heredoc_block",
  [sym_path] = "path",
  [sym_path_with_heredoc] = "path_with_heredoc",
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
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_array_element] = "array_element",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_run_instruction_repeat2] = "run_instruction_repeat2",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_add_instruction_repeat2] = "add_instruction_repeat2",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_user_name_or_group_repeat1] = "user_name_or_group_repeat1",
  [aux_sym_stopsignal_value_repeat1] = "stopsignal_value_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_heredoc_block_repeat1] = "heredoc_block_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_comma] = "imm_tok_comma",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_mount] = "imm_tok_mount",
  [alias_sym_imm_tok_pat_0ab9261] = "imm_tok_pat_0ab9261",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3a2a380] = "imm_tok_pat_3a2a380",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_7642c4f] = "imm_tok_pat_7642c4f",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_9f6bbb9] = "imm_tok_pat_9f6bbb9",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f46f69d] = "imm_tok_pat_f46f69d",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_05444c2] = "pat_05444c2",
  [alias_sym_pat_0851d06] = "pat_0851d06",
  [alias_sym_pat_2b6adbc] = "pat_2b6adbc",
  [alias_sym_pat_4128122] = "pat_4128122",
  [alias_sym_pat_441cd81] = "pat_441cd81",
  [alias_sym_pat_4a2f38a] = "pat_4a2f38a",
  [alias_sym_pat_4de4cb9] = "pat_4de4cb9",
  [alias_sym_pat_4fd4a56] = "pat_4fd4a56",
  [alias_sym_pat_8165e5f] = "pat_8165e5f",
  [alias_sym_pat_9873c86] = "pat_9873c86",
  [alias_sym_pat_9a14b5c] = "pat_9a14b5c",
  [alias_sym_pat_a667757] = "pat_a667757",
  [alias_sym_pat_add] = "pat_add",
  [alias_sym_pat_arg] = "pat_arg",
  [alias_sym_pat_as] = "pat_as",
  [alias_sym_pat_b1120d3] = "pat_b1120d3",
  [alias_sym_pat_cmd] = "pat_cmd",
  [alias_sym_pat_copy] = "pat_copy",
  [alias_sym_pat_e0f3805] = "pat_e0f3805",
  [alias_sym_pat_ea34a52] = "pat_ea34a52",
  [alias_sym_pat_eda9032] = "pat_eda9032",
  [alias_sym_pat_entr] = "pat_entr",
  [alias_sym_pat_env] = "pat_env",
  [alias_sym_pat_expose] = "pat_expose",
  [alias_sym_pat_f8ab07f] = "pat_f8ab07f",
  [alias_sym_pat_from] = "pat_from",
  [alias_sym_pat_heal] = "pat_heal",
  [alias_sym_pat_label] = "pat_label",
  [alias_sym_pat_main] = "pat_main",
  [alias_sym_pat_onbu] = "pat_onbu",
  [alias_sym_pat_run] = "pat_run",
  [alias_sym_pat_shell] = "pat_shell",
  [alias_sym_pat_stop] = "pat_stop",
  [alias_sym_pat_user] = "pat_user",
  [alias_sym_pat_volume] = "pat_volume",
  [alias_sym_pat_work] = "pat_work",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_user_name_or_group_token1] = aux_sym_user_name_or_group_token1,
  [aux_sym_immediate_user_name_or_group_fragment_token1] = aux_sym_immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = aux_sym_arg_instruction_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_stopsignal_value_token1] = aux_sym_stopsignal_value_token1,
  [aux_sym_stopsignal_value_token2] = aux_sym_stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [aux_sym_path_token3] = aux_sym_path_token3,
  [aux_sym_path_with_heredoc_token1] = aux_sym_path_with_heredoc_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_body_token1] = aux_sym_expansion_body_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym_spaced_env_pair_token1] = aux_sym_spaced_env_pair_token1,
  [aux_sym_env_key_token1] = aux_sym_env_key_token1,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = aux_sym_label_pair_token1,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [aux_sym_shell_fragment_token4] = aux_sym_shell_fragment_token4,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_single_quoted_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_heredoc_marker] = sym_heredoc_marker,
  [sym_heredoc_line] = sym_heredoc_line,
  [sym_heredoc_end] = sym_heredoc_end,
  [sym_heredoc_nl] = sym_heredoc_nl,
  [sym_error_sentinel] = sym_error_sentinel,
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
  [sym_heredoc_block] = sym_heredoc_block,
  [sym_path] = sym_path,
  [sym_path_with_heredoc] = sym_path_with_heredoc,
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
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_array_element] = sym_array_element,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_run_instruction_repeat2] = aux_sym_run_instruction_repeat2,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_add_instruction_repeat2] = aux_sym_add_instruction_repeat2,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_user_name_or_group_repeat1] = aux_sym_user_name_or_group_repeat1,
  [aux_sym_stopsignal_value_repeat1] = aux_sym_stopsignal_value_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_heredoc_block_repeat1] = aux_sym_heredoc_block_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_comma] = alias_sym_imm_tok_comma,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_mount] = alias_sym_imm_tok_mount,
  [alias_sym_imm_tok_pat_0ab9261] = alias_sym_imm_tok_pat_0ab9261,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3a2a380] = alias_sym_imm_tok_pat_3a2a380,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_7642c4f] = alias_sym_imm_tok_pat_7642c4f,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_9f6bbb9] = alias_sym_imm_tok_pat_9f6bbb9,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f46f69d] = alias_sym_imm_tok_pat_f46f69d,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_05444c2] = alias_sym_pat_05444c2,
  [alias_sym_pat_0851d06] = alias_sym_pat_0851d06,
  [alias_sym_pat_2b6adbc] = alias_sym_pat_2b6adbc,
  [alias_sym_pat_4128122] = alias_sym_pat_4128122,
  [alias_sym_pat_441cd81] = alias_sym_pat_441cd81,
  [alias_sym_pat_4a2f38a] = alias_sym_pat_4a2f38a,
  [alias_sym_pat_4de4cb9] = alias_sym_pat_4de4cb9,
  [alias_sym_pat_4fd4a56] = alias_sym_pat_4fd4a56,
  [alias_sym_pat_8165e5f] = alias_sym_pat_8165e5f,
  [alias_sym_pat_9873c86] = alias_sym_pat_9873c86,
  [alias_sym_pat_9a14b5c] = alias_sym_pat_9a14b5c,
  [alias_sym_pat_a667757] = alias_sym_pat_a667757,
  [alias_sym_pat_add] = alias_sym_pat_add,
  [alias_sym_pat_arg] = alias_sym_pat_arg,
  [alias_sym_pat_as] = alias_sym_pat_as,
  [alias_sym_pat_b1120d3] = alias_sym_pat_b1120d3,
  [alias_sym_pat_cmd] = alias_sym_pat_cmd,
  [alias_sym_pat_copy] = alias_sym_pat_copy,
  [alias_sym_pat_e0f3805] = alias_sym_pat_e0f3805,
  [alias_sym_pat_ea34a52] = alias_sym_pat_ea34a52,
  [alias_sym_pat_eda9032] = alias_sym_pat_eda9032,
  [alias_sym_pat_entr] = alias_sym_pat_entr,
  [alias_sym_pat_env] = alias_sym_pat_env,
  [alias_sym_pat_expose] = alias_sym_pat_expose,
  [alias_sym_pat_f8ab07f] = alias_sym_pat_f8ab07f,
  [alias_sym_pat_from] = alias_sym_pat_from,
  [alias_sym_pat_heal] = alias_sym_pat_heal,
  [alias_sym_pat_label] = alias_sym_pat_label,
  [alias_sym_pat_main] = alias_sym_pat_main,
  [alias_sym_pat_onbu] = alias_sym_pat_onbu,
  [alias_sym_pat_run] = alias_sym_pat_run,
  [alias_sym_pat_shell] = alias_sym_pat_shell,
  [alias_sym_pat_stop] = alias_sym_pat_stop,
  [alias_sym_pat_user] = alias_sym_pat_user,
  [alias_sym_pat_volume] = alias_sym_pat_volume,
  [alias_sym_pat_work] = alias_sym_pat_work,
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
  [aux_sym_from_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_with_heredoc_token1] = {
    .visible = false,
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
  [aux_sym_expansion_body_token1] = {
    .visible = false,
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
  [aux_sym_spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
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
  [sym_heredoc_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
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
  [sym_heredoc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_path_with_heredoc] = {
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
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
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
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
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
  [aux_sym_run_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat2] = {
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
  [aux_sym_add_instruction_repeat2] = {
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
  [aux_sym_heredoc_block_repeat1] = {
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
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_imm_tok_at] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_bslashspace] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_colon] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_comma] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_dollar] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_eq] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_lcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_mount] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0ab9261] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3a2a380] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_7642c4f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9f6bbb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f46f69d] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_05444c2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_0851d06] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_2b6adbc] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_8165e5f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9873c86] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_a667757] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_add] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_arg] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_as] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_b1120d3] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_cmd] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_copy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_e0f3805] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_ea34a52] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_eda9032] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_entr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_env] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_expose] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_f8ab07f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_from] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_heal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_main] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_onbu] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_run] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_shell] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_stop] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_user] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_volume] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_work] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
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
  [3] = {.index = 0, .length = 1},
  [20] = {.index = 1, .length = 1},
  [22] = {.index = 2, .length = 1},
  [23] = {.index = 2, .length = 1},
  [32] = {.index = 3, .length = 2},
  [33] = {.index = 5, .length = 2},
  [37] = {.index = 0, .length = 1},
  [45] = {.index = 7, .length = 1},
  [50] = {.index = 8, .length = 3},
  [54] = {.index = 11, .length = 2},
  [55] = {.index = 11, .length = 2},
  [56] = {.index = 13, .length = 2},
  [57] = {.index = 13, .length = 2},
  [58] = {.index = 15, .length = 2},
  [59] = {.index = 17, .length = 2},
  [60] = {.index = 17, .length = 2},
  [62] = {.index = 19, .length = 2},
  [64] = {.index = 21, .length = 1},
  [65] = {.index = 19, .length = 2},
  [66] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_user, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_as, 3},
  [8] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
    {field_name, 0},
    {field_value, 2},
  [15] =
    {field_group, 3},
    {field_user, 1},
  [17] =
    {field_default, 3},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
  [22] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_8165e5f,
  },
  [2] = {
    [0] = alias_sym_pat_from,
  },
  [4] = {
    [0] = alias_sym_pat_a667757,
  },
  [5] = {
    [0] = alias_sym_pat_b1120d3,
  },
  [6] = {
    [0] = alias_sym_pat_f8ab07f,
  },
  [7] = {
    [0] = alias_sym_pat_eda9032,
  },
  [8] = {
    [0] = alias_sym_pat_run,
  },
  [9] = {
    [0] = alias_sym_pat_cmd,
  },
  [10] = {
    [0] = alias_sym_pat_label,
  },
  [11] = {
    [0] = alias_sym_pat_e0f3805,
  },
  [12] = {
    [0] = alias_sym_pat_expose,
  },
  [13] = {
    [0] = alias_sym_pat_2b6adbc,
  },
  [14] = {
    [0] = alias_sym_pat_env,
  },
  [15] = {
    [0] = alias_sym_pat_9873c86,
  },
  [16] = {
    [0] = alias_sym_pat_0851d06,
  },
  [17] = {
    [0] = alias_sym_pat_entr,
  },
  [18] = {
    [0] = alias_sym_pat_volume,
  },
  [19] = {
    [0] = alias_sym_pat_05444c2,
  },
  [20] = {
    [0] = alias_sym_pat_user,
  },
  [21] = {
    [0] = alias_sym_pat_work,
  },
  [22] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
  },
  [23] = {
    [0] = alias_sym_pat_arg,
  },
  [24] = {
    [0] = alias_sym_pat_onbu,
  },
  [25] = {
    [0] = alias_sym_pat_441cd81,
  },
  [26] = {
    [0] = alias_sym_pat_stop,
  },
  [27] = {
    [0] = alias_sym_pat_heal,
  },
  [28] = {
    [0] = alias_sym_pat_shell,
  },
  [29] = {
    [0] = alias_sym_pat_main,
    [1] = alias_sym_pat_4fd4a56,
  },
  [30] = {
    [0] = alias_sym_pat_4a2f38a,
    [1] = alias_sym_pat_4fd4a56,
  },
  [31] = {
    [0] = alias_sym_imm_tok_pat_2b37705,
  },
  [34] = {
    [1] = alias_sym_pat_ea34a52,
  },
  [35] = {
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [36] = {
    [0] = alias_sym_imm_tok_pat_0ab9261,
  },
  [37] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [38] = {
    [0] = alias_sym_imm_tok_pat_0c7fc22,
  },
  [39] = {
    [0] = alias_sym_pat_add,
  },
  [40] = {
    [0] = alias_sym_pat_copy,
  },
  [41] = {
    [0] = alias_sym_imm_tok_pat_7642c4f,
  },
  [42] = {
    [0] = alias_sym_imm_tok_pat_441cd81,
  },
  [43] = {
    [0] = alias_sym_imm_tok_dollar,
  },
  [44] = {
    [0] = alias_sym_pat_9a14b5c,
  },
  [45] = {
    [0] = alias_sym_pat_from,
    [2] = alias_sym_pat_as,
  },
  [46] = {
    [0] = alias_sym_imm_tok_pat_bcfc287,
  },
  [47] = {
    [0] = alias_sym_imm_tok_colon,
  },
  [48] = {
    [0] = alias_sym_imm_tok_pat_d2727a0,
  },
  [49] = {
    [0] = alias_sym_imm_tok_at,
  },
  [51] = {
    [0] = alias_sym_imm_tok_pat_3a2a380,
  },
  [52] = {
    [0] = alias_sym_imm_tok_pat_9f6bbb9,
  },
  [53] = {
    [0] = alias_sym_imm_tok_bslashspace,
  },
  [54] = {
    [0] = alias_sym_pat_4128122,
    [1] = alias_sym_imm_tok_eq,
  },
  [55] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [56] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [57] = {
    [1] = alias_sym_imm_tok_pat_3d340f6,
  },
  [58] = {
    [0] = alias_sym_pat_user,
    [2] = alias_sym_imm_tok_colon,
  },
  [59] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
    [2] = alias_sym_imm_tok_eq,
  },
  [60] = {
    [0] = alias_sym_pat_arg,
    [2] = alias_sym_imm_tok_eq,
  },
  [61] = {
    [0] = alias_sym_imm_tok_lcurl,
    [1] = alias_sym_imm_tok_pat_8713919,
    [2] = alias_sym_imm_tok_rcurl,
  },
  [62] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
    [2] = alias_sym_imm_tok_eq,
    [3] = alias_sym_imm_tok_pat_f6e1de8,
  },
  [63] = {
    [0] = alias_sym_imm_tok_pat_9a14b5c,
  },
  [64] = {
    [0] = alias_sym_pat_from,
    [3] = alias_sym_pat_as,
  },
  [65] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [66] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [67] = {
    [0] = alias_sym_imm_tok_pat_f46f69d,
    [1] = alias_sym_imm_tok_eq,
    [2] = alias_sym_imm_tok_pat_f46f69d,
  },
  [68] = {
    [0] = alias_sym_imm_tok_comma,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 10,
  [41] = 9,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 33,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 53,
  [69] = 69,
  [70] = 70,
  [71] = 46,
  [72] = 53,
  [73] = 45,
  [74] = 74,
  [75] = 75,
  [76] = 49,
  [77] = 77,
  [78] = 78,
  [79] = 10,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 9,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 64,
  [94] = 94,
  [95] = 95,
  [96] = 65,
  [97] = 75,
  [98] = 98,
  [99] = 99,
  [100] = 62,
  [101] = 101,
  [102] = 77,
  [103] = 60,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 90,
  [113] = 81,
  [114] = 78,
  [115] = 29,
  [116] = 109,
  [117] = 42,
  [118] = 118,
  [119] = 119,
  [120] = 29,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 49,
  [126] = 126,
  [127] = 127,
  [128] = 28,
  [129] = 85,
  [130] = 130,
  [131] = 131,
  [132] = 42,
  [133] = 133,
  [134] = 134,
  [135] = 84,
  [136] = 54,
  [137] = 55,
  [138] = 82,
  [139] = 56,
  [140] = 140,
  [141] = 44,
  [142] = 43,
  [143] = 143,
  [144] = 144,
  [145] = 66,
  [146] = 146,
  [147] = 58,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 49,
  [152] = 152,
  [153] = 38,
  [154] = 154,
  [155] = 38,
  [156] = 28,
  [157] = 59,
  [158] = 29,
  [159] = 159,
  [160] = 29,
  [161] = 161,
  [162] = 162,
  [163] = 42,
  [164] = 164,
  [165] = 165,
  [166] = 29,
  [167] = 47,
  [168] = 168,
  [169] = 42,
  [170] = 164,
  [171] = 165,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 28,
  [176] = 176,
  [177] = 177,
  [178] = 38,
  [179] = 165,
  [180] = 180,
  [181] = 181,
  [182] = 28,
  [183] = 38,
  [184] = 28,
  [185] = 185,
  [186] = 186,
  [187] = 38,
  [188] = 188,
  [189] = 164,
  [190] = 190,
  [191] = 42,
  [192] = 131,
  [193] = 38,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 28,
  [198] = 42,
  [199] = 131,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 29,
  [206] = 206,
  [207] = 42,
  [208] = 208,
  [209] = 176,
  [210] = 210,
  [211] = 28,
  [212] = 29,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 38,
  [218] = 218,
  [219] = 219,
  [220] = 29,
  [221] = 221,
  [222] = 222,
  [223] = 42,
  [224] = 131,
  [225] = 225,
  [226] = 42,
  [227] = 42,
  [228] = 131,
  [229] = 28,
  [230] = 29,
  [231] = 38,
  [232] = 29,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 44,
  [238] = 43,
  [239] = 38,
  [240] = 240,
  [241] = 28,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 38,
  [246] = 176,
  [247] = 247,
  [248] = 215,
  [249] = 247,
  [250] = 250,
  [251] = 251,
  [252] = 247,
  [253] = 253,
  [254] = 38,
  [255] = 28,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 247,
  [260] = 29,
  [261] = 247,
  [262] = 247,
  [263] = 263,
  [264] = 218,
  [265] = 265,
  [266] = 42,
  [267] = 247,
  [268] = 263,
  [269] = 247,
  [270] = 270,
  [271] = 131,
  [272] = 263,
  [273] = 273,
  [274] = 247,
  [275] = 263,
  [276] = 247,
  [277] = 247,
  [278] = 202,
  [279] = 279,
  [280] = 280,
  [281] = 29,
  [282] = 263,
  [283] = 283,
  [284] = 38,
  [285] = 285,
  [286] = 28,
  [287] = 247,
  [288] = 131,
  [289] = 42,
  [290] = 131,
  [291] = 28,
  [292] = 122,
  [293] = 123,
  [294] = 263,
  [295] = 38,
  [296] = 42,
  [297] = 263,
  [298] = 247,
  [299] = 106,
  [300] = 144,
  [301] = 29,
  [302] = 29,
  [303] = 263,
  [304] = 304,
  [305] = 28,
  [306] = 176,
  [307] = 247,
  [308] = 283,
  [309] = 309,
  [310] = 310,
  [311] = 309,
  [312] = 47,
  [313] = 131,
  [314] = 42,
  [315] = 263,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 279,
  [330] = 330,
  [331] = 331,
  [332] = 47,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 250,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 359,
  [362] = 342,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 122,
  [371] = 123,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 368,
  [378] = 369,
  [379] = 368,
  [380] = 369,
  [381] = 368,
  [382] = 369,
  [383] = 383,
  [384] = 338,
  [385] = 368,
  [386] = 386,
  [387] = 326,
  [388] = 368,
  [389] = 106,
  [390] = 144,
  [391] = 368,
  [392] = 392,
  [393] = 393,
  [394] = 368,
  [395] = 395,
  [396] = 396,
  [397] = 368,
  [398] = 398,
  [399] = 368,
  [400] = 318,
  [401] = 368,
  [402] = 402,
  [403] = 368,
  [404] = 404,
  [405] = 368,
  [406] = 317,
  [407] = 368,
  [408] = 368,
  [409] = 356,
  [410] = 364,
  [411] = 356,
  [412] = 364,
  [413] = 356,
  [414] = 364,
  [415] = 356,
  [416] = 356,
  [417] = 356,
  [418] = 356,
  [419] = 356,
  [420] = 356,
  [421] = 356,
  [422] = 356,
  [423] = 356,
  [424] = 356,
  [425] = 356,
  [426] = 363,
  [427] = 363,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '"', 282,
        '#', 212,
        '$', 220,
        '\'', 293,
        ',', 262,
        '-', 270,
        ':', 188,
        '<', 238,
        '=', 197,
        '@', 249,
        '[', 279,
        '\\', 290,
        ']', 281,
        '_', 228,
        '{', 222,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 277,
        'u', 167,
        '\t', 3,
        ' ', 3,
        '"', 286,
        '/', 286,
        '\\', 286,
        'b', 286,
        'f', 286,
        'n', 286,
        'r', 286,
        't', 286,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(275);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 175,
        '"', 282,
        '#', 309,
        '$', 168,
        '\'', 293,
        '.', 236,
        ':', 188,
        '=', 197,
        '\\', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 175,
        '#', 309,
        '$', 219,
        '-', 61,
        '.', 63,
        '/', 72,
        ':', 188,
        '@', 249,
        '\\', 3,
        'A', 148,
        'a', 148,
        'C', 120,
        'c', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 175,
        '#', 309,
        '$', 219,
        '-', 61,
        '.', 63,
        '/', 72,
        '\\', 3,
        'A', 148,
        'a', 148,
        'C', 120,
        'c', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(304);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 175,
        '#', 243,
        '$', 220,
        ':', 188,
        '@', 249,
        '\\', 241,
        'A', 242,
        'a', 242,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(275);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(210);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(210);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        '#', 309,
        ',', 262,
        '-', 270,
        '.', 272,
        '<', 273,
        '=', 269,
        '[', 279,
        '\\', 4,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        '#', 309,
        '-', 270,
        '.', 272,
        '<', 273,
        '[', 279,
        '\\', 4,
        ',', 269,
        '=', 269,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '<') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(53);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(53);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(265);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(258);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 110:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 161:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 162:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(310);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(218);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(213);
      END_STATE();
    case 171:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '"', 282,
        '#', 212,
        '$', 219,
        '\'', 293,
        ',', 280,
        '-', 270,
        '<', 238,
        '=', 210,
        '[', 279,
        '\\', 290,
        ']', 281,
        ':', 210,
        '@', 210,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 172:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '"', 282,
        '#', 309,
        '$', 168,
        ',', 280,
        '-', 61,
        '.', 63,
        '=', 197,
        'N', 66,
        '[', 279,
        '\\', 3,
        ']', 281,
        '}', 227,
        'A', 83,
        'a', 83,
        'C', 121,
        'c', 121,
        'E', 123,
        'e', 123,
        'F', 146,
        'f', 146,
        'H', 92,
        'h', 92,
        'L', 73,
        'l', 73,
        'M', 74,
        'm', 74,
        'O', 125,
        'o', 125,
        'R', 157,
        'r', 157,
        'S', 100,
        's', 100,
        'U', 149,
        'u', 149,
        'V', 130,
        'v', 130,
        'W', 132,
        'w', 132,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      END_STATE();
    case 173:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '"', 282,
        '#', 309,
        '$', 168,
        ',', 280,
        '-', 61,
        '.', 63,
        'N', 66,
        '[', 279,
        '\\', 3,
        ']', 281,
        'A', 83,
        'a', 83,
        'C', 121,
        'c', 121,
        'E', 123,
        'e', 123,
        'F', 146,
        'f', 146,
        'H', 92,
        'h', 92,
        'L', 73,
        'l', 73,
        'M', 74,
        'm', 74,
        'O', 125,
        'o', 125,
        'R', 157,
        'r', 157,
        'S', 100,
        's', 100,
        'U', 149,
        'u', 149,
        'V', 130,
        'v', 130,
        'W', 132,
        'w', 132,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(310);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(214);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(309);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(306);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(307);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 172},
  [3] = {.lex_state = 172},
  [4] = {.lex_state = 172},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 47, .external_lex_state = 2},
  [7] = {.lex_state = 47, .external_lex_state = 2},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 48, .external_lex_state = 2},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 48, .external_lex_state = 2},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 47, .external_lex_state = 2},
  [19] = {.lex_state = 34, .external_lex_state = 2},
  [20] = {.lex_state = 46, .external_lex_state = 2},
  [21] = {.lex_state = 34, .external_lex_state = 2},
  [22] = {.lex_state = 34, .external_lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 46, .external_lex_state = 2},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 46, .external_lex_state = 2},
  [27] = {.lex_state = 34, .external_lex_state = 2},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 17, .external_lex_state = 3},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 46, .external_lex_state = 2},
  [37] = {.lex_state = 46, .external_lex_state = 2},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 17, .external_lex_state = 3},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 47, .external_lex_state = 2},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 24, .external_lex_state = 4},
  [50] = {.lex_state = 17, .external_lex_state = 2},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 24, .external_lex_state = 4},
  [55] = {.lex_state = 24, .external_lex_state = 4},
  [56] = {.lex_state = 24, .external_lex_state = 4},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 24, .external_lex_state = 4},
  [59] = {.lex_state = 24, .external_lex_state = 4},
  [60] = {.lex_state = 17, .external_lex_state = 3},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 17, .external_lex_state = 3},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 17, .external_lex_state = 3},
  [65] = {.lex_state = 17, .external_lex_state = 3},
  [66] = {.lex_state = 24, .external_lex_state = 4},
  [67] = {.lex_state = 172},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 17, .external_lex_state = 2},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 17, .external_lex_state = 3},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 49, .external_lex_state = 2},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 34, .external_lex_state = 2},
  [87] = {.lex_state = 34, .external_lex_state = 2},
  [88] = {.lex_state = 34, .external_lex_state = 2},
  [89] = {.lex_state = 34, .external_lex_state = 2},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 34, .external_lex_state = 2},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 17, .external_lex_state = 2},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 17, .external_lex_state = 2},
  [97] = {.lex_state = 17, .external_lex_state = 2},
  [98] = {.lex_state = 34, .external_lex_state = 2},
  [99] = {.lex_state = 57},
  [100] = {.lex_state = 17, .external_lex_state = 2},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 49, .external_lex_state = 2},
  [103] = {.lex_state = 17, .external_lex_state = 2},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 172},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 172},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 56},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 56},
  [137] = {.lex_state = 56},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 56},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 56},
  [146] = {.lex_state = 172},
  [147] = {.lex_state = 56},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 56},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 18, .external_lex_state = 4},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 55},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 24, .external_lex_state = 4},
  [164] = {.lex_state = 28},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 24, .external_lex_state = 4},
  [167] = {.lex_state = 34, .external_lex_state = 2},
  [168] = {.lex_state = 172},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 23},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 57},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 24, .external_lex_state = 4},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 24, .external_lex_state = 4},
  [179] = {.lex_state = 28},
  [180] = {.lex_state = 172},
  [181] = {.lex_state = 18, .external_lex_state = 4},
  [182] = {.lex_state = 24, .external_lex_state = 4},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 18, .external_lex_state = 4},
  [186] = {.lex_state = 18, .external_lex_state = 4},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 28},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 27},
  [192] = {.lex_state = 24, .external_lex_state = 4},
  [193] = {.lex_state = 24},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 34, .external_lex_state = 2},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 24},
  [199] = {.lex_state = 24},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 5, .external_lex_state = 4},
  [202] = {.lex_state = 17, .external_lex_state = 4},
  [203] = {.lex_state = 5, .external_lex_state = 4},
  [204] = {.lex_state = 5, .external_lex_state = 4},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 28},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 33},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 24},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 5, .external_lex_state = 4},
  [215] = {.lex_state = 17, .external_lex_state = 4},
  [216] = {.lex_state = 5, .external_lex_state = 4},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 17, .external_lex_state = 4},
  [219] = {.lex_state = 5, .external_lex_state = 4},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 33},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 14},
  [225] = {.lex_state = 33},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 5, .external_lex_state = 4},
  [234] = {.lex_state = 5, .external_lex_state = 4},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 5, .external_lex_state = 4},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 40},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 43},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 25},
  [246] = {.lex_state = 25},
  [247] = {.lex_state = 51},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 51},
  [250] = {.lex_state = 18, .external_lex_state = 4},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 51},
  [253] = {.lex_state = 172, .external_lex_state = 5},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 13},
  [256] = {.lex_state = 172},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 18},
  [259] = {.lex_state = 51},
  [260] = {.lex_state = 13},
  [261] = {.lex_state = 51},
  [262] = {.lex_state = 51},
  [263] = {.lex_state = 51},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 13},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 51},
  [268] = {.lex_state = 51},
  [269] = {.lex_state = 51},
  [270] = {.lex_state = 18},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 51},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 51},
  [275] = {.lex_state = 51},
  [276] = {.lex_state = 51},
  [277] = {.lex_state = 51},
  [278] = {.lex_state = 17},
  [279] = {.lex_state = 17, .external_lex_state = 4},
  [280] = {.lex_state = 172, .external_lex_state = 5},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 51},
  [283] = {.lex_state = 172},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 33},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 51},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 56},
  [290] = {.lex_state = 56},
  [291] = {.lex_state = 56},
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 51},
  [295] = {.lex_state = 56},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 51},
  [298] = {.lex_state = 51},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 16},
  [301] = {.lex_state = 25},
  [302] = {.lex_state = 56},
  [303] = {.lex_state = 51},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 56},
  [307] = {.lex_state = 51},
  [308] = {.lex_state = 172},
  [309] = {.lex_state = 172},
  [310] = {.lex_state = 172, .external_lex_state = 5},
  [311] = {.lex_state = 172},
  [312] = {.lex_state = 172},
  [313] = {.lex_state = 25},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 51},
  [316] = {.lex_state = 58},
  [317] = {.lex_state = 50},
  [318] = {.lex_state = 5, .external_lex_state = 4},
  [319] = {.lex_state = 172},
  [320] = {.lex_state = 14},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 172},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 58},
  [325] = {.lex_state = 172},
  [326] = {.lex_state = 5, .external_lex_state = 4},
  [327] = {.lex_state = 5, .external_lex_state = 4},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 17},
  [330] = {.lex_state = 44},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 57},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 172},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 172},
  [337] = {.lex_state = 50},
  [338] = {.lex_state = 5, .external_lex_state = 4},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 172, .external_lex_state = 5},
  [341] = {.lex_state = 5, .external_lex_state = 4},
  [342] = {.lex_state = 5, .external_lex_state = 4},
  [343] = {.lex_state = 40},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 52},
  [347] = {.lex_state = 52},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 172},
  [353] = {.lex_state = 172},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 5},
  [356] = {.lex_state = 59},
  [357] = {.lex_state = 5},
  [358] = {.lex_state = 5},
  [359] = {.lex_state = 268},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 268},
  [362] = {.lex_state = 5},
  [363] = {.lex_state = 54},
  [364] = {.lex_state = 172},
  [365] = {.lex_state = 172},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 172},
  [368] = {.lex_state = 172},
  [369] = {.lex_state = 60},
  [370] = {.lex_state = 172},
  [371] = {.lex_state = 172},
  [372] = {.lex_state = 172},
  [373] = {.lex_state = 5},
  [374] = {.lex_state = 207},
  [375] = {.lex_state = 207},
  [376] = {.lex_state = 5},
  [377] = {.lex_state = 172},
  [378] = {.lex_state = 60},
  [379] = {.lex_state = 172},
  [380] = {.lex_state = 60},
  [381] = {.lex_state = 172},
  [382] = {.lex_state = 60},
  [383] = {.lex_state = 5},
  [384] = {.lex_state = 5},
  [385] = {.lex_state = 172},
  [386] = {.lex_state = 5},
  [387] = {.lex_state = 5},
  [388] = {.lex_state = 172},
  [389] = {.lex_state = 172},
  [390] = {.lex_state = 172},
  [391] = {.lex_state = 172},
  [392] = {.lex_state = 5},
  [393] = {.lex_state = 5},
  [394] = {.lex_state = 172},
  [395] = {.lex_state = 5},
  [396] = {.lex_state = 5},
  [397] = {.lex_state = 172},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 172},
  [400] = {.lex_state = 5},
  [401] = {.lex_state = 172},
  [402] = {.lex_state = 172},
  [403] = {.lex_state = 172},
  [404] = {.lex_state = 58},
  [405] = {.lex_state = 172},
  [406] = {.lex_state = 172},
  [407] = {.lex_state = 172},
  [408] = {.lex_state = 172},
  [409] = {.lex_state = 59},
  [410] = {.lex_state = 172},
  [411] = {.lex_state = 59},
  [412] = {.lex_state = 172},
  [413] = {.lex_state = 59},
  [414] = {.lex_state = 172},
  [415] = {.lex_state = 59},
  [416] = {.lex_state = 59},
  [417] = {.lex_state = 59},
  [418] = {.lex_state = 59},
  [419] = {.lex_state = 59},
  [420] = {.lex_state = 59},
  [421] = {.lex_state = 59},
  [422] = {.lex_state = 59},
  [423] = {.lex_state = 59},
  [424] = {.lex_state = 59},
  [425] = {.lex_state = 59},
  [426] = {.lex_state = 54},
  [427] = {.lex_state = 54},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_shell_fragment_token2] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym_heredoc_nl] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(367),
    [sym_instruction] = STATE(366),
    [sym_from_instruction] = STATE(373),
    [sym_run_instruction] = STATE(373),
    [sym_cmd_instruction] = STATE(373),
    [sym_label_instruction] = STATE(373),
    [sym_expose_instruction] = STATE(373),
    [sym_env_instruction] = STATE(373),
    [sym_add_instruction] = STATE(373),
    [sym_copy_instruction] = STATE(373),
    [sym_entrypoint_instruction] = STATE(373),
    [sym_volume_instruction] = STATE(373),
    [sym_user_instruction] = STATE(373),
    [sym_workdir_instruction] = STATE(373),
    [sym_arg_instruction] = STATE(373),
    [sym_onbuild_instruction] = STATE(373),
    [sym_stopsignal_instruction] = STATE(373),
    [sym_healthcheck_instruction] = STATE(373),
    [sym_shell_instruction] = STATE(373),
    [sym_maintainer_instruction] = STATE(373),
    [sym_cross_build_instruction] = STATE(373),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_from_instruction_token1] = ACTIONS(9),
    [aux_sym_run_instruction_token1] = ACTIONS(11),
    [aux_sym_cmd_instruction_token1] = ACTIONS(13),
    [aux_sym_label_instruction_token1] = ACTIONS(15),
    [aux_sym_expose_instruction_token1] = ACTIONS(17),
    [aux_sym_env_instruction_token1] = ACTIONS(19),
    [aux_sym_add_instruction_token1] = ACTIONS(21),
    [aux_sym_copy_instruction_token1] = ACTIONS(23),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(25),
    [aux_sym_volume_instruction_token1] = ACTIONS(27),
    [aux_sym_user_instruction_token1] = ACTIONS(29),
    [aux_sym_workdir_instruction_token1] = ACTIONS(31),
    [aux_sym_arg_instruction_token1] = ACTIONS(33),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(35),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(37),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(39),
    [aux_sym_shell_instruction_token1] = ACTIONS(41),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(43),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(47),
    [sym_semgrep_ellipsis] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(99), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(102), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(105), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(366), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(108), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(373), 19,
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
  [96] = 25,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(366), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(373), 19,
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
  [192] = 23,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(360), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(373), 19,
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
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [311] = 13,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_semgrep_ellipsis,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(45), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(215), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(214), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(18), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
  [355] = 13,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_semgrep_ellipsis,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(45), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(215), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(216), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(6), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
  [399] = 11,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    STATE(156), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(133), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(40), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(273), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [438] = 8,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(153), 1,
      anon_sym_BSLASH2,
    STATE(28), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(148), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [469] = 8,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_DOLLAR2,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH2,
    STATE(28), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(160), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [500] = 11,
    ACTIONS(166), 1,
      aux_sym_path_token2,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(170), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(172), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      sym_semgrep_ellipsis,
    ACTIONS(178), 1,
      sym_heredoc_marker,
    STATE(73), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(248), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(354), 2,
      sym_shell_command,
      sym_json_string_array,
  [536] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH2,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_imm_expansion,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(133), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [570] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH2,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_imm_expansion,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(140), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [604] = 11,
    ACTIONS(166), 1,
      aux_sym_path_token2,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(170), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(172), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      sym_semgrep_ellipsis,
    ACTIONS(178), 1,
      sym_heredoc_marker,
    STATE(73), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(248), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(345), 2,
      sym_shell_command,
      sym_json_string_array,
  [640] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DOLLAR2,
    ACTIONS(188), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_BSLASH2,
    STATE(197), 1,
      sym_imm_expansion,
    STATE(79), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(392), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [674] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DOLLAR2,
    ACTIONS(188), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_BSLASH2,
    STATE(197), 1,
      sym_imm_expansion,
    STATE(79), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(396), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [708] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DOLLAR2,
    ACTIONS(188), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_BSLASH2,
    STATE(197), 1,
      sym_imm_expansion,
    STATE(79), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(395), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [742] = 5,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(197), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(18), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(192), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [766] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(91), 1,
      aux_sym_add_instruction_repeat2,
    STATE(157), 1,
      sym_expansion,
    STATE(346), 1,
      sym_path_with_heredoc,
    STATE(21), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [801] = 5,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(211), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(209), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [824] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(86), 1,
      aux_sym_add_instruction_repeat2,
    STATE(157), 1,
      sym_expansion,
    STATE(346), 1,
      sym_path_with_heredoc,
    STATE(89), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [859] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(88), 1,
      aux_sym_add_instruction_repeat2,
    STATE(157), 1,
      sym_expansion,
    STATE(346), 1,
      sym_path_with_heredoc,
    STATE(89), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [894] = 9,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      aux_sym_label_pair_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_semgrep_metavariable,
    ACTIONS(229), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(352), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [925] = 5,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(234), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(232), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [948] = 9,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      aux_sym_label_pair_token1,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      sym_semgrep_metavariable,
    ACTIONS(249), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(352), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [979] = 5,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(253), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(251), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1002] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(98), 1,
      aux_sym_add_instruction_repeat2,
    STATE(157), 1,
      sym_expansion,
    STATE(346), 1,
      sym_path_with_heredoc,
    STATE(22), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [1037] = 3,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1055] = 3,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1073] = 8,
    ACTIONS(241), 1,
      aux_sym_label_pair_token1,
    ACTIONS(249), 1,
      sym_semgrep_ellipsis,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(25), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(352), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1101] = 7,
    ACTIONS(271), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(273), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 1,
      aux_sym_image_name_token2,
    STATE(128), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(35), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(269), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1127] = 7,
    ACTIONS(273), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 1,
      aux_sym_image_name_token2,
    ACTIONS(279), 1,
      aux_sym_from_instruction_token2,
    STATE(128), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(277), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1153] = 9,
    ACTIONS(283), 1,
      aux_sym_path_token2,
    ACTIONS(286), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(289), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(292), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(295), 1,
      sym_required_line_continuation,
    ACTIONS(297), 1,
      sym_heredoc_marker,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(281), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1183] = 7,
    ACTIONS(273), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 1,
      aux_sym_image_name_token2,
    ACTIONS(302), 1,
      aux_sym_from_instruction_token2,
    STATE(128), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(39), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(300), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1209] = 7,
    ACTIONS(273), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 1,
      aux_sym_image_name_token2,
    ACTIONS(306), 1,
      aux_sym_from_instruction_token2,
    STATE(128), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(39), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(304), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1235] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(310), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(308), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1253] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(314), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(312), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1271] = 3,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(318), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1289] = 7,
    ACTIONS(322), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(324), 1,
      anon_sym_DOLLAR2,
    ACTIONS(327), 1,
      aux_sym_image_name_token2,
    STATE(128), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(39), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(320), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1315] = 8,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    ACTIONS(156), 1,
      anon_sym_LF,
    STATE(156), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(160), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(41), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1343] = 8,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR2,
    ACTIONS(333), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(336), 1,
      anon_sym_BSLASH2,
    STATE(156), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(148), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(41), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1371] = 3,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1389] = 3,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(345), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1407] = 3,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1425] = 9,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(353), 1,
      sym_required_line_continuation,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1455] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1482] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(367), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(365), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1499] = 7,
    ACTIONS(371), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(373), 1,
      anon_sym_DOLLAR2,
    ACTIONS(376), 1,
      aux_sym_image_tag_token1,
    STATE(184), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(48), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [1524] = 7,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      aux_sym_path_token3,
    ACTIONS(384), 1,
      anon_sym_DOLLAR2,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(387), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(49), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1549] = 9,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      sym_required_line_continuation,
    ACTIONS(389), 1,
      aux_sym_path_token2,
    ACTIONS(392), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(395), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(398), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(401), 1,
      sym_heredoc_marker,
    STATE(50), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [1578] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1605] = 7,
    ACTIONS(408), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(411), 1,
      anon_sym_DOLLAR2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(52), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1630] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      anon_sym_BSLASH,
    ACTIONS(418), 1,
      sym_double_quoted_escape_sequence,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(51), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1657] = 7,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(422), 1,
      aux_sym_path_token3,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(426), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(49), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1682] = 7,
    ACTIONS(422), 1,
      aux_sym_path_token3,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    ACTIONS(428), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(430), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(49), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1707] = 7,
    ACTIONS(422), 1,
      aux_sym_path_token3,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    ACTIONS(432), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(49), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1732] = 8,
    ACTIONS(436), 1,
      anon_sym_DOLLAR2,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(444), 1,
      anon_sym_BSLASH,
    ACTIONS(447), 1,
      sym_double_quoted_escape_sequence,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1759] = 7,
    ACTIONS(422), 1,
      aux_sym_path_token3,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    ACTIONS(450), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(55), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1784] = 7,
    ACTIONS(422), 1,
      aux_sym_path_token3,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    ACTIONS(454), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(56), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1809] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(458), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(460), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1826] = 7,
    ACTIONS(464), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(70), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1851] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(468), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(470), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1868] = 7,
    ACTIONS(474), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(476), 1,
      anon_sym_DOLLAR2,
    ACTIONS(478), 1,
      aux_sym_image_tag_token1,
    STATE(184), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(48), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [1893] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(482), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1910] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(486), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1927] = 7,
    ACTIONS(422), 1,
      aux_sym_path_token3,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    ACTIONS(488), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(490), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(54), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1952] = 7,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(494), 1,
      anon_sym_DASH_DASH,
    ACTIONS(496), 1,
      sym_semgrep_ellipsis,
    STATE(351), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
    STATE(146), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1977] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_BSLASH,
    ACTIONS(502), 1,
      sym_double_quoted_escape_sequence,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(46), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2004] = 7,
    ACTIONS(464), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(52), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2029] = 7,
    ACTIONS(464), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(52), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2054] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2081] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_BSLASH,
    ACTIONS(514), 1,
      sym_double_quoted_escape_sequence,
    STATE(175), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(71), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2108] = 9,
    ACTIONS(166), 1,
      aux_sym_path_token2,
    ACTIONS(170), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(172), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(178), 1,
      sym_heredoc_marker,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      sym_required_line_continuation,
    ACTIONS(516), 1,
      aux_sym_shell_fragment_token2,
    STATE(50), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [2137] = 7,
    ACTIONS(464), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(69), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2162] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(520), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(522), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2179] = 7,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      sym_non_newline_whitespace,
    ACTIONS(524), 1,
      aux_sym_path_token3,
    ACTIONS(527), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2203] = 8,
    ACTIONS(166), 1,
      aux_sym_path_token2,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(170), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(172), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(178), 1,
      sym_heredoc_marker,
    STATE(73), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(329), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2229] = 7,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      aux_sym_path_token3,
    ACTIONS(534), 1,
      anon_sym_DOLLAR2,
    ACTIONS(536), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(82), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2253] = 7,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      anon_sym_DOLLAR2,
    ACTIONS(188), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_BSLASH2,
    STATE(197), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2277] = 7,
    ACTIONS(464), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(393), 1,
      sym_immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(105), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2301] = 7,
    ACTIONS(532), 1,
      aux_sym_path_token3,
    ACTIONS(534), 1,
      anon_sym_DOLLAR2,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2325] = 7,
    ACTIONS(532), 1,
      aux_sym_path_token3,
    ACTIONS(534), 1,
      anon_sym_DOLLAR2,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2349] = 7,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(546), 1,
      anon_sym_DOLLAR2,
    ACTIONS(549), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(552), 1,
      anon_sym_BSLASH2,
    STATE(197), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2373] = 7,
    ACTIONS(532), 1,
      aux_sym_path_token3,
    ACTIONS(534), 1,
      anon_sym_DOLLAR2,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2397] = 7,
    ACTIONS(532), 1,
      aux_sym_path_token3,
    ACTIONS(534), 1,
      anon_sym_DOLLAR2,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2421] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_path_token1,
    ACTIONS(565), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(567), 1,
      anon_sym_DOLLAR,
    ACTIONS(569), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(186), 1,
      sym_path_with_heredoc,
  [2449] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(571), 1,
      aux_sym_path_token1,
    ACTIONS(574), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(577), 1,
      anon_sym_DOLLAR,
    ACTIONS(580), 1,
      sym_heredoc_marker,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(157), 1,
      sym_expansion,
    STATE(346), 1,
      sym_path_with_heredoc,
  [2477] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_path_token1,
    ACTIONS(565), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(567), 1,
      anon_sym_DOLLAR,
    ACTIONS(569), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(159), 1,
      sym_path_with_heredoc,
  [2505] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_path_token1,
    ACTIONS(587), 1,
      anon_sym_DASH_DASH,
    STATE(89), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(585), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [2527] = 7,
    ACTIONS(532), 1,
      aux_sym_path_token3,
    ACTIONS(534), 1,
      anon_sym_DOLLAR2,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(85), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2551] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_path_token1,
    ACTIONS(565), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(567), 1,
      anon_sym_DOLLAR,
    ACTIONS(569), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(181), 1,
      sym_path_with_heredoc,
  [2579] = 7,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(598), 1,
      anon_sym_DOLLAR2,
    ACTIONS(601), 1,
      aux_sym_image_digest_token1,
    STATE(241), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(92), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2603] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(482), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2619] = 6,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      anon_sym_DOLLAR,
    ACTIONS(609), 1,
      aux_sym_expose_port_token1,
    ACTIONS(612), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2641] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(615), 1,
      aux_sym_path_token1,
    ACTIONS(617), 1,
      aux_sym_path_token2,
    ACTIONS(619), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(258), 1,
      sym_path,
    STATE(358), 1,
      sym_json_string_array,
  [2669] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(486), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2685] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(520), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(522), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2701] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_path_token1,
    ACTIONS(565), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(567), 1,
      anon_sym_DOLLAR,
    ACTIONS(569), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(185), 1,
      sym_path_with_heredoc,
  [2729] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      aux_sym_image_name_token1,
    ACTIONS(625), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_expansion,
    STATE(111), 1,
      sym_image_name,
    STATE(174), 1,
      sym_param,
    STATE(321), 1,
      sym_image_spec,
  [2757] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(468), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(470), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2773] = 7,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(631), 1,
      anon_sym_DOLLAR2,
    ACTIONS(633), 1,
      aux_sym_image_digest_token1,
    STATE(241), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(92), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2797] = 8,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(635), 1,
      aux_sym_shell_fragment_token2,
    STATE(45), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(279), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2823] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(458), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(460), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2839] = 6,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      anon_sym_DOLLAR,
    ACTIONS(641), 1,
      aux_sym_expose_port_token1,
    ACTIONS(643), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2861] = 7,
    ACTIONS(464), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(52), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2885] = 3,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(649), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2900] = 6,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    ACTIONS(655), 1,
      aux_sym_image_alias_token2,
    STATE(255), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(119), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [2921] = 6,
    ACTIONS(657), 1,
      aux_sym_env_key_token1,
    ACTIONS(659), 1,
      sym_semgrep_ellipsis,
    STATE(337), 1,
      sym_env_key,
    STATE(349), 1,
      sym_spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(143), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2942] = 6,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      sym_array_element,
    STATE(319), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(665), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2963] = 6,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      anon_sym_DOLLAR2,
    ACTIONS(672), 1,
      aux_sym_image_alias_token2,
    STATE(255), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [2984] = 7,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(679), 1,
      anon_sym_COLON,
    ACTIONS(681), 1,
      anon_sym_AT,
    STATE(235), 1,
      sym_image_tag,
    STATE(328), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3007] = 6,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      aux_sym_path_token3,
    ACTIONS(685), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3028] = 6,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      aux_sym_path_token3,
    ACTIONS(685), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(135), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3049] = 6,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      aux_sym_path_token3,
    ACTIONS(685), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(138), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3070] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(261), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3085] = 6,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      sym_array_element,
    STATE(319), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(665), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3106] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(341), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3121] = 6,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    ACTIONS(655), 1,
      aux_sym_image_alias_token2,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3142] = 6,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    ACTIONS(655), 1,
      aux_sym_image_alias_token2,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3163] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(259), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3178] = 6,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(698), 1,
      anon_sym_DOLLAR2,
    STATE(286), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(121), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3199] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(703), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3214] = 3,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(707), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3229] = 3,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(711), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3244] = 6,
    ACTIONS(387), 1,
      sym_non_newline_whitespace,
    ACTIONS(713), 1,
      aux_sym_path_token3,
    ACTIONS(716), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3265] = 4,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(721), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3282] = 5,
    ACTIONS(725), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      aux_sym_expose_port_token1,
    ACTIONS(729), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(104), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [3301] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(255), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3316] = 6,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      aux_sym_path_token3,
    ACTIONS(685), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(151), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3337] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(731), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3352] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(737), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(735), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3367] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(339), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3382] = 3,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(741), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3397] = 6,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      aux_sym_env_key_token1,
    ACTIONS(748), 1,
      sym_semgrep_ellipsis,
    STATE(372), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(134), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3418] = 6,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      aux_sym_path_token3,
    ACTIONS(685), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(151), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3439] = 6,
    ACTIONS(426), 1,
      sym_non_newline_whitespace,
    ACTIONS(751), 1,
      aux_sym_path_token3,
    ACTIONS(753), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3460] = 6,
    ACTIONS(430), 1,
      sym_non_newline_whitespace,
    ACTIONS(751), 1,
      aux_sym_path_token3,
    ACTIONS(753), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3481] = 6,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      aux_sym_path_token3,
    ACTIONS(685), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(151), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3502] = 6,
    ACTIONS(434), 1,
      sym_non_newline_whitespace,
    ACTIONS(751), 1,
      aux_sym_path_token3,
    ACTIONS(753), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3523] = 3,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(757), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3538] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(349), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3553] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(345), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3568] = 6,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(761), 1,
      aux_sym_env_key_token1,
    ACTIONS(763), 1,
      sym_semgrep_ellipsis,
    STATE(372), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(134), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3589] = 3,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(767), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3604] = 6,
    ACTIONS(490), 1,
      sym_non_newline_whitespace,
    ACTIONS(751), 1,
      aux_sym_path_token3,
    ACTIONS(753), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(136), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3625] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(494), 1,
      anon_sym_DASH_DASH,
    ACTIONS(769), 1,
      sym_semgrep_ellipsis,
    STATE(376), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(168), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [3646] = 6,
    ACTIONS(452), 1,
      sym_non_newline_whitespace,
    ACTIONS(751), 1,
      aux_sym_path_token3,
    ACTIONS(753), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(137), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3667] = 6,
    ACTIONS(771), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    STATE(286), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(121), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3688] = 6,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(286), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(121), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3709] = 6,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(286), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(149), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3730] = 6,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      aux_sym_path_token3,
    ACTIONS(784), 1,
      anon_sym_DOLLAR2,
    STATE(305), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(151), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3751] = 6,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    ACTIONS(655), 1,
      aux_sym_image_alias_token2,
    ACTIONS(787), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(118), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3772] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(318), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3787] = 6,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    ACTIONS(789), 1,
      anon_sym_LF,
    STATE(286), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(148), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3808] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(318), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3823] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3838] = 6,
    ACTIONS(456), 1,
      sym_non_newline_whitespace,
    ACTIONS(751), 1,
      aux_sym_path_token3,
    ACTIONS(753), 1,
      anon_sym_DOLLAR2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(139), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3859] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3873] = 5,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(793), 1,
      sym_non_newline_whitespace,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(233), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3891] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(261), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3905] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOLLAR2,
    ACTIONS(478), 1,
      aux_sym_image_tag_token1,
    STATE(184), 1,
      sym_imm_expansion,
    STATE(63), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [3925] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_path_token1,
    ACTIONS(799), 1,
      aux_sym_path_token2,
    ACTIONS(801), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym_expansion,
    STATE(355), 1,
      sym_path,
  [3947] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(339), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [3961] = 6,
    ACTIONS(803), 1,
      anon_sym_BSLASH,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(809), 1,
      sym_single_quoted_escape_sequence,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3981] = 6,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(811), 1,
      anon_sym_BSLASH,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
    ACTIONS(815), 1,
      sym_single_quoted_escape_sequence,
    STATE(164), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4001] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(259), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4015] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_path_token1,
    ACTIONS(367), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4031] = 5,
    ACTIONS(817), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(819), 1,
      anon_sym_DASH_DASH,
    ACTIONS(822), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(168), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [4049] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4063] = 6,
    ACTIONS(803), 1,
      anon_sym_BSLASH,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(809), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(825), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4083] = 6,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(827), 1,
      anon_sym_BSLASH,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
    ACTIONS(831), 1,
      sym_single_quoted_escape_sequence,
    STATE(170), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4103] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(835), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(833), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4117] = 5,
    ACTIONS(631), 1,
      anon_sym_DOLLAR2,
    ACTIONS(633), 1,
      aux_sym_image_digest_token1,
    STATE(241), 1,
      sym_imm_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(101), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [4135] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      aux_sym_image_name_token1,
    STATE(32), 1,
      sym_expansion,
    STATE(111), 1,
      sym_image_name,
    STATE(320), 1,
      sym_image_spec,
  [4157] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(257), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4171] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(839), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4185] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(841), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(843), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4199] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(316), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4213] = 6,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(847), 1,
      anon_sym_SQUOTE,
    ACTIONS(849), 1,
      sym_single_quoted_escape_sequence,
    STATE(189), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4233] = 5,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      sym_json_string,
    STATE(336), 1,
      sym_array_element,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(665), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4251] = 5,
    ACTIONS(793), 1,
      sym_non_newline_whitespace,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(851), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(219), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4269] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(255), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4283] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(318), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4297] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4311] = 5,
    ACTIONS(793), 1,
      sym_non_newline_whitespace,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(853), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(203), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4329] = 5,
    ACTIONS(793), 1,
      sym_non_newline_whitespace,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(234), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4347] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(318), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4361] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym_path_token1,
    ACTIONS(617), 1,
      aux_sym_path_token2,
    ACTIONS(619), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(339), 1,
      sym_path,
  [4383] = 6,
    ACTIONS(803), 1,
      anon_sym_BSLASH,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(809), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4403] = 6,
    ACTIONS(859), 1,
      anon_sym_BSLASH,
    ACTIONS(862), 1,
      anon_sym_SQUOTE,
    ACTIONS(864), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(867), 1,
      sym_single_quoted_escape_sequence,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4423] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(341), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4437] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(735), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4451] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(318), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4464] = 3,
    ACTIONS(872), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(870), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4477] = 3,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(876), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4490] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym_path_token1,
    ACTIONS(880), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [4505] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4518] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(341), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4531] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(737), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4544] = 3,
    ACTIONS(882), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(884), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4557] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(886), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4572] = 4,
    ACTIONS(890), 1,
      sym_required_line_continuation,
    STATE(202), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(888), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4587] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4602] = 4,
    ACTIONS(895), 1,
      anon_sym_LF,
    ACTIONS(897), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4617] = 3,
    ACTIONS(261), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4630] = 3,
    ACTIONS(902), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(900), 3,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [4643] = 3,
    ACTIONS(341), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4656] = 5,
    ACTIONS(904), 1,
      anon_sym_DQUOTE,
    ACTIONS(906), 1,
      aux_sym_json_string_token1,
    ACTIONS(908), 1,
      sym_json_escape_sequence,
    STATE(225), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4673] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(839), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4686] = 3,
    ACTIONS(910), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(912), 3,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      sym_semgrep_ellipsis,
  [4699] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(257), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4712] = 3,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4725] = 5,
    ACTIONS(914), 1,
      anon_sym_DOLLAR,
    ACTIONS(916), 1,
      aux_sym_image_alias_token1,
    STATE(152), 1,
      sym_expansion,
    STATE(383), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4742] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(201), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4757] = 4,
    ACTIONS(922), 1,
      sym_required_line_continuation,
    STATE(218), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(920), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4772] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(924), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(236), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4787] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(318), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4800] = 4,
    ACTIONS(922), 1,
      sym_required_line_continuation,
    STATE(202), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(926), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4815] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(928), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4830] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(261), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4843] = 5,
    ACTIONS(906), 1,
      aux_sym_json_string_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(932), 1,
      sym_json_escape_sequence,
    STATE(208), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4860] = 5,
    ACTIONS(914), 1,
      anon_sym_DOLLAR,
    ACTIONS(916), 1,
      aux_sym_image_alias_token1,
    STATE(152), 1,
      sym_expansion,
    STATE(398), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4877] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(341), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4890] = 3,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(737), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4903] = 5,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(936), 1,
      aux_sym_json_string_token1,
    ACTIONS(939), 1,
      sym_json_escape_sequence,
    STATE(225), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4920] = 3,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4933] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4944] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4955] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4966] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4977] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4988] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(261), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5001] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5016] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(944), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5031] = 5,
    ACTIONS(681), 1,
      anon_sym_AT,
    ACTIONS(946), 1,
      anon_sym_LF,
    ACTIONS(948), 1,
      aux_sym_from_instruction_token2,
    STATE(323), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5048] = 4,
    ACTIONS(795), 1,
      sym_heredoc_nl,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(204), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5063] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(349), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5076] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(345), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5089] = 3,
    ACTIONS(318), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [5102] = 5,
    ACTIONS(950), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(952), 1,
      anon_sym_DOLLAR,
    STATE(150), 1,
      sym_expansion,
    STATE(344), 1,
      sym_stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5119] = 3,
    ACTIONS(257), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [5132] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(954), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [5143] = 5,
    ACTIONS(956), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(958), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(335), 1,
      sym_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5160] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(960), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [5171] = 3,
    ACTIONS(318), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5183] = 3,
    ACTIONS(837), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5195] = 4,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_variable,
    STATE(254), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5209] = 4,
    ACTIONS(920), 1,
      anon_sym_LF,
    ACTIONS(966), 1,
      sym_required_line_continuation,
    STATE(264), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5223] = 4,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      sym_variable,
    STATE(178), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5237] = 3,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
  [5249] = 4,
    ACTIONS(972), 1,
      anon_sym_LF,
    ACTIONS(974), 1,
      sym_non_newline_whitespace,
    STATE(270), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5263] = 4,
    ACTIONS(976), 1,
      anon_sym_LBRACE,
    ACTIONS(978), 1,
      sym_variable,
    STATE(217), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5277] = 4,
    ACTIONS(980), 1,
      sym_heredoc_line,
    ACTIONS(983), 1,
      sym_heredoc_end,
    STATE(253), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5291] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5301] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5311] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA2,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5325] = 3,
    ACTIONS(990), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(992), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5337] = 4,
    ACTIONS(974), 1,
      sym_non_newline_whitespace,
    ACTIONS(994), 1,
      anon_sym_LF,
    STATE(251), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5351] = 4,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
    ACTIONS(998), 1,
      sym_variable,
    STATE(187), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5365] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5375] = 4,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym_variable,
    STATE(153), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5389] = 4,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
    ACTIONS(1006), 1,
      sym_variable,
    STATE(38), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5403] = 4,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_variable,
    STATE(271), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5417] = 4,
    ACTIONS(926), 1,
      anon_sym_LF,
    ACTIONS(966), 1,
      sym_required_line_continuation,
    STATE(278), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5431] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1008), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5441] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5451] = 4,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
    ACTIONS(1012), 1,
      sym_variable,
    STATE(239), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5465] = 4,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      sym_variable,
    STATE(192), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5479] = 4,
    ACTIONS(1014), 1,
      anon_sym_LBRACE,
    ACTIONS(1016), 1,
      sym_variable,
    STATE(183), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5493] = 4,
    ACTIONS(1018), 1,
      anon_sym_LF,
    ACTIONS(1020), 1,
      sym_non_newline_whitespace,
    STATE(270), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5507] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5517] = 4,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      sym_variable,
    STATE(288), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5531] = 3,
    ACTIONS(1027), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1029), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5543] = 4,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      sym_variable,
    STATE(284), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5557] = 4,
    ACTIONS(1031), 1,
      anon_sym_LBRACE,
    ACTIONS(1033), 1,
      sym_variable,
    STATE(313), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5571] = 4,
    ACTIONS(1031), 1,
      anon_sym_LBRACE,
    ACTIONS(1033), 1,
      sym_variable,
    STATE(245), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5585] = 4,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    ACTIONS(1037), 1,
      sym_variable,
    STATE(155), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5599] = 4,
    ACTIONS(888), 1,
      anon_sym_LF,
    ACTIONS(1039), 1,
      sym_required_line_continuation,
    STATE(278), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5613] = 3,
    ACTIONS(1042), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(888), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [5625] = 4,
    ACTIONS(1044), 1,
      sym_heredoc_line,
    ACTIONS(1046), 1,
      sym_heredoc_end,
    STATE(253), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5639] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5649] = 4,
    ACTIONS(1048), 1,
      anon_sym_LBRACE,
    ACTIONS(1050), 1,
      sym_variable,
    STATE(228), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5663] = 4,
    ACTIONS(1052), 1,
      anon_sym_COMMA2,
    ACTIONS(1054), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5677] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5687] = 3,
    ACTIONS(1058), 1,
      sym_json_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1056), 2,
      anon_sym_DQUOTE,
      aux_sym_json_string_token1,
  [5699] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5709] = 4,
    ACTIONS(1048), 1,
      anon_sym_LBRACE,
    ACTIONS(1050), 1,
      sym_variable,
    STATE(231), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5723] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5733] = 3,
    ACTIONS(341), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5745] = 3,
    ACTIONS(737), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5757] = 3,
    ACTIONS(257), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5769] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(703), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5781] = 3,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(707), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5793] = 4,
    ACTIONS(1060), 1,
      anon_sym_LBRACE,
    ACTIONS(1062), 1,
      sym_variable,
    STATE(224), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5807] = 3,
    ACTIONS(318), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5819] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5829] = 4,
    ACTIONS(1064), 1,
      anon_sym_LBRACE,
    ACTIONS(1066), 1,
      sym_variable,
    STATE(199), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5843] = 4,
    ACTIONS(1064), 1,
      anon_sym_LBRACE,
    ACTIONS(1066), 1,
      sym_variable,
    STATE(193), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5857] = 3,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(649), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5869] = 3,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(767), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5881] = 3,
    ACTIONS(261), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5893] = 3,
    ACTIONS(261), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5905] = 4,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
    ACTIONS(1070), 1,
      sym_variable,
    STATE(290), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5919] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1072), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5929] = 3,
    ACTIONS(257), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5941] = 3,
    ACTIONS(837), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5953] = 4,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
    ACTIONS(1070), 1,
      sym_variable,
    STATE(295), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5967] = 4,
    ACTIONS(1052), 1,
      anon_sym_COMMA2,
    ACTIONS(1074), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5981] = 4,
    ACTIONS(1052), 1,
      anon_sym_COMMA2,
    ACTIONS(1076), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5995] = 4,
    ACTIONS(1044), 1,
      sym_heredoc_line,
    ACTIONS(1078), 1,
      sym_heredoc_end,
    STATE(280), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6009] = 4,
    ACTIONS(1052), 1,
      anon_sym_COMMA2,
    ACTIONS(1080), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6023] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(367), 3,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      sym_semgrep_ellipsis,
  [6033] = 3,
    ACTIONS(737), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [6045] = 3,
    ACTIONS(341), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [6057] = 4,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    ACTIONS(1037), 1,
      sym_variable,
    STATE(131), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6071] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1082), 1,
      aux_sym_mount_param_param_token1,
    STATE(36), 1,
      sym_mount_param_param,
  [6084] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1084), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [6093] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1086), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6102] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6111] = 3,
    ACTIONS(1090), 1,
      anon_sym_LF,
    ACTIONS(1092), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6122] = 3,
    ACTIONS(1094), 1,
      anon_sym_LF,
    ACTIONS(1096), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6133] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    STATE(350), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6144] = 3,
    ACTIONS(1098), 1,
      anon_sym_LF,
    ACTIONS(1100), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6155] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1082), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
  [6168] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6177] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1104), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6186] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1106), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6195] = 3,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1110), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6206] = 3,
    ACTIONS(888), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6217] = 3,
    ACTIONS(1112), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(1114), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6228] = 3,
    ACTIONS(1116), 1,
      anon_sym_LF,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6239] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_image_name_token1,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
  [6252] = 3,
    ACTIONS(1120), 1,
      anon_sym_LF,
    ACTIONS(1122), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6263] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6272] = 3,
    ACTIONS(1126), 1,
      anon_sym_LF,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6283] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6292] = 3,
    ACTIONS(1130), 1,
      anon_sym_EQ,
    ACTIONS(1132), 1,
      aux_sym_spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6303] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1134), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6312] = 3,
    ACTIONS(1018), 1,
      anon_sym_LF,
    ACTIONS(1136), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6323] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(983), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [6332] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1138), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6341] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(920), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6350] = 3,
    ACTIONS(1140), 1,
      aux_sym_param_token1,
    ACTIONS(1142), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6361] = 2,
    ACTIONS(1144), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6369] = 2,
    ACTIONS(1146), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6377] = 2,
    ACTIONS(793), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6385] = 2,
    ACTIONS(456), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6393] = 2,
    ACTIONS(1148), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6401] = 2,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6409] = 2,
    ACTIONS(1150), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6417] = 2,
    ACTIONS(910), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6425] = 2,
    ACTIONS(1152), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6433] = 2,
    ACTIONS(1154), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6441] = 2,
    ACTIONS(1156), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6449] = 2,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6457] = 2,
    ACTIONS(1160), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6465] = 2,
    ACTIONS(1162), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6473] = 2,
    ACTIONS(1164), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6481] = 2,
    ACTIONS(1166), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6489] = 2,
    ACTIONS(1168), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6497] = 2,
    ACTIONS(1170), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6505] = 2,
    ACTIONS(920), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6513] = 2,
    ACTIONS(1172), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6521] = 2,
    ACTIONS(1174), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6529] = 2,
    ACTIONS(1176), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6537] = 2,
    ACTIONS(1178), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6545] = 2,
    ACTIONS(1180), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6553] = 2,
    ACTIONS(1182), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6561] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1184), 1,
      aux_sym_param_token2,
  [6571] = 2,
    ACTIONS(701), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6579] = 2,
    ACTIONS(705), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6587] = 2,
    ACTIONS(1130), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6595] = 2,
    ACTIONS(1186), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6603] = 2,
    ACTIONS(1188), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6611] = 2,
    ACTIONS(1190), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6619] = 2,
    ACTIONS(1192), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6627] = 2,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6635] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1196), 1,
      aux_sym_param_token2,
  [6645] = 2,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6653] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1200), 1,
      aux_sym_param_token2,
  [6663] = 2,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6671] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1204), 1,
      aux_sym_param_token2,
  [6681] = 2,
    ACTIONS(1206), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6689] = 2,
    ACTIONS(1134), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6697] = 2,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6705] = 2,
    ACTIONS(1210), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6713] = 2,
    ACTIONS(1104), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6721] = 2,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6729] = 2,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6737] = 2,
    ACTIONS(765), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6745] = 2,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6753] = 2,
    ACTIONS(1216), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6761] = 2,
    ACTIONS(1218), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6769] = 2,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6777] = 2,
    ACTIONS(1222), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6785] = 2,
    ACTIONS(1224), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6793] = 2,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6801] = 2,
    ACTIONS(1228), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6809] = 2,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6817] = 2,
    ACTIONS(1086), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6825] = 2,
    ACTIONS(1232), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6833] = 2,
    ACTIONS(1234), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6841] = 2,
    ACTIONS(1236), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6849] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1238), 1,
      aux_sym_mount_param_param_token1,
  [6859] = 2,
    ACTIONS(1240), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6867] = 2,
    ACTIONS(1084), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6875] = 2,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6883] = 2,
    ACTIONS(1244), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6891] = 2,
    ACTIONS(1246), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6899] = 2,
    ACTIONS(1248), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6907] = 2,
    ACTIONS(1250), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6915] = 2,
    ACTIONS(1252), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6923] = 2,
    ACTIONS(1254), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6931] = 2,
    ACTIONS(1256), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6939] = 2,
    ACTIONS(1258), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6947] = 2,
    ACTIONS(1260), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6955] = 2,
    ACTIONS(1262), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6963] = 2,
    ACTIONS(1264), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6971] = 2,
    ACTIONS(1266), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6979] = 2,
    ACTIONS(1268), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6987] = 2,
    ACTIONS(1270), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6995] = 2,
    ACTIONS(1272), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7003] = 2,
    ACTIONS(1274), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7011] = 2,
    ACTIONS(1276), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7019] = 2,
    ACTIONS(1278), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7027] = 2,
    ACTIONS(1280), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7035] = 2,
    ACTIONS(1282), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 438,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 500,
  [SMALL_STATE(12)] = 536,
  [SMALL_STATE(13)] = 570,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 640,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 708,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 766,
  [SMALL_STATE(20)] = 801,
  [SMALL_STATE(21)] = 824,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 894,
  [SMALL_STATE(24)] = 925,
  [SMALL_STATE(25)] = 948,
  [SMALL_STATE(26)] = 979,
  [SMALL_STATE(27)] = 1002,
  [SMALL_STATE(28)] = 1037,
  [SMALL_STATE(29)] = 1055,
  [SMALL_STATE(30)] = 1073,
  [SMALL_STATE(31)] = 1101,
  [SMALL_STATE(32)] = 1127,
  [SMALL_STATE(33)] = 1153,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1209,
  [SMALL_STATE(36)] = 1235,
  [SMALL_STATE(37)] = 1253,
  [SMALL_STATE(38)] = 1271,
  [SMALL_STATE(39)] = 1289,
  [SMALL_STATE(40)] = 1315,
  [SMALL_STATE(41)] = 1343,
  [SMALL_STATE(42)] = 1371,
  [SMALL_STATE(43)] = 1389,
  [SMALL_STATE(44)] = 1407,
  [SMALL_STATE(45)] = 1425,
  [SMALL_STATE(46)] = 1455,
  [SMALL_STATE(47)] = 1482,
  [SMALL_STATE(48)] = 1499,
  [SMALL_STATE(49)] = 1524,
  [SMALL_STATE(50)] = 1549,
  [SMALL_STATE(51)] = 1578,
  [SMALL_STATE(52)] = 1605,
  [SMALL_STATE(53)] = 1630,
  [SMALL_STATE(54)] = 1657,
  [SMALL_STATE(55)] = 1682,
  [SMALL_STATE(56)] = 1707,
  [SMALL_STATE(57)] = 1732,
  [SMALL_STATE(58)] = 1759,
  [SMALL_STATE(59)] = 1784,
  [SMALL_STATE(60)] = 1809,
  [SMALL_STATE(61)] = 1826,
  [SMALL_STATE(62)] = 1851,
  [SMALL_STATE(63)] = 1868,
  [SMALL_STATE(64)] = 1893,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1927,
  [SMALL_STATE(67)] = 1952,
  [SMALL_STATE(68)] = 1977,
  [SMALL_STATE(69)] = 2004,
  [SMALL_STATE(70)] = 2029,
  [SMALL_STATE(71)] = 2054,
  [SMALL_STATE(72)] = 2081,
  [SMALL_STATE(73)] = 2108,
  [SMALL_STATE(74)] = 2137,
  [SMALL_STATE(75)] = 2162,
  [SMALL_STATE(76)] = 2179,
  [SMALL_STATE(77)] = 2203,
  [SMALL_STATE(78)] = 2229,
  [SMALL_STATE(79)] = 2253,
  [SMALL_STATE(80)] = 2277,
  [SMALL_STATE(81)] = 2301,
  [SMALL_STATE(82)] = 2325,
  [SMALL_STATE(83)] = 2349,
  [SMALL_STATE(84)] = 2373,
  [SMALL_STATE(85)] = 2397,
  [SMALL_STATE(86)] = 2421,
  [SMALL_STATE(87)] = 2449,
  [SMALL_STATE(88)] = 2477,
  [SMALL_STATE(89)] = 2505,
  [SMALL_STATE(90)] = 2527,
  [SMALL_STATE(91)] = 2551,
  [SMALL_STATE(92)] = 2579,
  [SMALL_STATE(93)] = 2603,
  [SMALL_STATE(94)] = 2619,
  [SMALL_STATE(95)] = 2641,
  [SMALL_STATE(96)] = 2669,
  [SMALL_STATE(97)] = 2685,
  [SMALL_STATE(98)] = 2701,
  [SMALL_STATE(99)] = 2729,
  [SMALL_STATE(100)] = 2757,
  [SMALL_STATE(101)] = 2773,
  [SMALL_STATE(102)] = 2797,
  [SMALL_STATE(103)] = 2823,
  [SMALL_STATE(104)] = 2839,
  [SMALL_STATE(105)] = 2861,
  [SMALL_STATE(106)] = 2885,
  [SMALL_STATE(107)] = 2900,
  [SMALL_STATE(108)] = 2921,
  [SMALL_STATE(109)] = 2942,
  [SMALL_STATE(110)] = 2963,
  [SMALL_STATE(111)] = 2984,
  [SMALL_STATE(112)] = 3007,
  [SMALL_STATE(113)] = 3028,
  [SMALL_STATE(114)] = 3049,
  [SMALL_STATE(115)] = 3070,
  [SMALL_STATE(116)] = 3085,
  [SMALL_STATE(117)] = 3106,
  [SMALL_STATE(118)] = 3121,
  [SMALL_STATE(119)] = 3142,
  [SMALL_STATE(120)] = 3163,
  [SMALL_STATE(121)] = 3178,
  [SMALL_STATE(122)] = 3199,
  [SMALL_STATE(123)] = 3214,
  [SMALL_STATE(124)] = 3229,
  [SMALL_STATE(125)] = 3244,
  [SMALL_STATE(126)] = 3265,
  [SMALL_STATE(127)] = 3282,
  [SMALL_STATE(128)] = 3301,
  [SMALL_STATE(129)] = 3316,
  [SMALL_STATE(130)] = 3337,
  [SMALL_STATE(131)] = 3352,
  [SMALL_STATE(132)] = 3367,
  [SMALL_STATE(133)] = 3382,
  [SMALL_STATE(134)] = 3397,
  [SMALL_STATE(135)] = 3418,
  [SMALL_STATE(136)] = 3439,
  [SMALL_STATE(137)] = 3460,
  [SMALL_STATE(138)] = 3481,
  [SMALL_STATE(139)] = 3502,
  [SMALL_STATE(140)] = 3523,
  [SMALL_STATE(141)] = 3538,
  [SMALL_STATE(142)] = 3553,
  [SMALL_STATE(143)] = 3568,
  [SMALL_STATE(144)] = 3589,
  [SMALL_STATE(145)] = 3604,
  [SMALL_STATE(146)] = 3625,
  [SMALL_STATE(147)] = 3646,
  [SMALL_STATE(148)] = 3667,
  [SMALL_STATE(149)] = 3688,
  [SMALL_STATE(150)] = 3709,
  [SMALL_STATE(151)] = 3730,
  [SMALL_STATE(152)] = 3751,
  [SMALL_STATE(153)] = 3772,
  [SMALL_STATE(154)] = 3787,
  [SMALL_STATE(155)] = 3808,
  [SMALL_STATE(156)] = 3823,
  [SMALL_STATE(157)] = 3838,
  [SMALL_STATE(158)] = 3859,
  [SMALL_STATE(159)] = 3873,
  [SMALL_STATE(160)] = 3891,
  [SMALL_STATE(161)] = 3905,
  [SMALL_STATE(162)] = 3925,
  [SMALL_STATE(163)] = 3947,
  [SMALL_STATE(164)] = 3961,
  [SMALL_STATE(165)] = 3981,
  [SMALL_STATE(166)] = 4001,
  [SMALL_STATE(167)] = 4015,
  [SMALL_STATE(168)] = 4031,
  [SMALL_STATE(169)] = 4049,
  [SMALL_STATE(170)] = 4063,
  [SMALL_STATE(171)] = 4083,
  [SMALL_STATE(172)] = 4103,
  [SMALL_STATE(173)] = 4117,
  [SMALL_STATE(174)] = 4135,
  [SMALL_STATE(175)] = 4157,
  [SMALL_STATE(176)] = 4171,
  [SMALL_STATE(177)] = 4185,
  [SMALL_STATE(178)] = 4199,
  [SMALL_STATE(179)] = 4213,
  [SMALL_STATE(180)] = 4233,
  [SMALL_STATE(181)] = 4251,
  [SMALL_STATE(182)] = 4269,
  [SMALL_STATE(183)] = 4283,
  [SMALL_STATE(184)] = 4297,
  [SMALL_STATE(185)] = 4311,
  [SMALL_STATE(186)] = 4329,
  [SMALL_STATE(187)] = 4347,
  [SMALL_STATE(188)] = 4361,
  [SMALL_STATE(189)] = 4383,
  [SMALL_STATE(190)] = 4403,
  [SMALL_STATE(191)] = 4423,
  [SMALL_STATE(192)] = 4437,
  [SMALL_STATE(193)] = 4451,
  [SMALL_STATE(194)] = 4464,
  [SMALL_STATE(195)] = 4477,
  [SMALL_STATE(196)] = 4490,
  [SMALL_STATE(197)] = 4505,
  [SMALL_STATE(198)] = 4518,
  [SMALL_STATE(199)] = 4531,
  [SMALL_STATE(200)] = 4544,
  [SMALL_STATE(201)] = 4557,
  [SMALL_STATE(202)] = 4572,
  [SMALL_STATE(203)] = 4587,
  [SMALL_STATE(204)] = 4602,
  [SMALL_STATE(205)] = 4617,
  [SMALL_STATE(206)] = 4630,
  [SMALL_STATE(207)] = 4643,
  [SMALL_STATE(208)] = 4656,
  [SMALL_STATE(209)] = 4673,
  [SMALL_STATE(210)] = 4686,
  [SMALL_STATE(211)] = 4699,
  [SMALL_STATE(212)] = 4712,
  [SMALL_STATE(213)] = 4725,
  [SMALL_STATE(214)] = 4742,
  [SMALL_STATE(215)] = 4757,
  [SMALL_STATE(216)] = 4772,
  [SMALL_STATE(217)] = 4787,
  [SMALL_STATE(218)] = 4800,
  [SMALL_STATE(219)] = 4815,
  [SMALL_STATE(220)] = 4830,
  [SMALL_STATE(221)] = 4843,
  [SMALL_STATE(222)] = 4860,
  [SMALL_STATE(223)] = 4877,
  [SMALL_STATE(224)] = 4890,
  [SMALL_STATE(225)] = 4903,
  [SMALL_STATE(226)] = 4920,
  [SMALL_STATE(227)] = 4933,
  [SMALL_STATE(228)] = 4944,
  [SMALL_STATE(229)] = 4955,
  [SMALL_STATE(230)] = 4966,
  [SMALL_STATE(231)] = 4977,
  [SMALL_STATE(232)] = 4988,
  [SMALL_STATE(233)] = 5001,
  [SMALL_STATE(234)] = 5016,
  [SMALL_STATE(235)] = 5031,
  [SMALL_STATE(236)] = 5048,
  [SMALL_STATE(237)] = 5063,
  [SMALL_STATE(238)] = 5076,
  [SMALL_STATE(239)] = 5089,
  [SMALL_STATE(240)] = 5102,
  [SMALL_STATE(241)] = 5119,
  [SMALL_STATE(242)] = 5132,
  [SMALL_STATE(243)] = 5143,
  [SMALL_STATE(244)] = 5160,
  [SMALL_STATE(245)] = 5171,
  [SMALL_STATE(246)] = 5183,
  [SMALL_STATE(247)] = 5195,
  [SMALL_STATE(248)] = 5209,
  [SMALL_STATE(249)] = 5223,
  [SMALL_STATE(250)] = 5237,
  [SMALL_STATE(251)] = 5249,
  [SMALL_STATE(252)] = 5263,
  [SMALL_STATE(253)] = 5277,
  [SMALL_STATE(254)] = 5291,
  [SMALL_STATE(255)] = 5301,
  [SMALL_STATE(256)] = 5311,
  [SMALL_STATE(257)] = 5325,
  [SMALL_STATE(258)] = 5337,
  [SMALL_STATE(259)] = 5351,
  [SMALL_STATE(260)] = 5365,
  [SMALL_STATE(261)] = 5375,
  [SMALL_STATE(262)] = 5389,
  [SMALL_STATE(263)] = 5403,
  [SMALL_STATE(264)] = 5417,
  [SMALL_STATE(265)] = 5431,
  [SMALL_STATE(266)] = 5441,
  [SMALL_STATE(267)] = 5451,
  [SMALL_STATE(268)] = 5465,
  [SMALL_STATE(269)] = 5479,
  [SMALL_STATE(270)] = 5493,
  [SMALL_STATE(271)] = 5507,
  [SMALL_STATE(272)] = 5517,
  [SMALL_STATE(273)] = 5531,
  [SMALL_STATE(274)] = 5543,
  [SMALL_STATE(275)] = 5557,
  [SMALL_STATE(276)] = 5571,
  [SMALL_STATE(277)] = 5585,
  [SMALL_STATE(278)] = 5599,
  [SMALL_STATE(279)] = 5613,
  [SMALL_STATE(280)] = 5625,
  [SMALL_STATE(281)] = 5639,
  [SMALL_STATE(282)] = 5649,
  [SMALL_STATE(283)] = 5663,
  [SMALL_STATE(284)] = 5677,
  [SMALL_STATE(285)] = 5687,
  [SMALL_STATE(286)] = 5699,
  [SMALL_STATE(287)] = 5709,
  [SMALL_STATE(288)] = 5723,
  [SMALL_STATE(289)] = 5733,
  [SMALL_STATE(290)] = 5745,
  [SMALL_STATE(291)] = 5757,
  [SMALL_STATE(292)] = 5769,
  [SMALL_STATE(293)] = 5781,
  [SMALL_STATE(294)] = 5793,
  [SMALL_STATE(295)] = 5807,
  [SMALL_STATE(296)] = 5819,
  [SMALL_STATE(297)] = 5829,
  [SMALL_STATE(298)] = 5843,
  [SMALL_STATE(299)] = 5857,
  [SMALL_STATE(300)] = 5869,
  [SMALL_STATE(301)] = 5881,
  [SMALL_STATE(302)] = 5893,
  [SMALL_STATE(303)] = 5905,
  [SMALL_STATE(304)] = 5919,
  [SMALL_STATE(305)] = 5929,
  [SMALL_STATE(306)] = 5941,
  [SMALL_STATE(307)] = 5953,
  [SMALL_STATE(308)] = 5967,
  [SMALL_STATE(309)] = 5981,
  [SMALL_STATE(310)] = 5995,
  [SMALL_STATE(311)] = 6009,
  [SMALL_STATE(312)] = 6023,
  [SMALL_STATE(313)] = 6033,
  [SMALL_STATE(314)] = 6045,
  [SMALL_STATE(315)] = 6057,
  [SMALL_STATE(316)] = 6071,
  [SMALL_STATE(317)] = 6084,
  [SMALL_STATE(318)] = 6093,
  [SMALL_STATE(319)] = 6102,
  [SMALL_STATE(320)] = 6111,
  [SMALL_STATE(321)] = 6122,
  [SMALL_STATE(322)] = 6133,
  [SMALL_STATE(323)] = 6144,
  [SMALL_STATE(324)] = 6155,
  [SMALL_STATE(325)] = 6168,
  [SMALL_STATE(326)] = 6177,
  [SMALL_STATE(327)] = 6186,
  [SMALL_STATE(328)] = 6195,
  [SMALL_STATE(329)] = 6206,
  [SMALL_STATE(330)] = 6217,
  [SMALL_STATE(331)] = 6228,
  [SMALL_STATE(332)] = 6239,
  [SMALL_STATE(333)] = 6252,
  [SMALL_STATE(334)] = 6263,
  [SMALL_STATE(335)] = 6272,
  [SMALL_STATE(336)] = 6283,
  [SMALL_STATE(337)] = 6292,
  [SMALL_STATE(338)] = 6303,
  [SMALL_STATE(339)] = 6312,
  [SMALL_STATE(340)] = 6323,
  [SMALL_STATE(341)] = 6332,
  [SMALL_STATE(342)] = 6341,
  [SMALL_STATE(343)] = 6350,
  [SMALL_STATE(344)] = 6361,
  [SMALL_STATE(345)] = 6369,
  [SMALL_STATE(346)] = 6377,
  [SMALL_STATE(347)] = 6385,
  [SMALL_STATE(348)] = 6393,
  [SMALL_STATE(349)] = 6401,
  [SMALL_STATE(350)] = 6409,
  [SMALL_STATE(351)] = 6417,
  [SMALL_STATE(352)] = 6425,
  [SMALL_STATE(353)] = 6433,
  [SMALL_STATE(354)] = 6441,
  [SMALL_STATE(355)] = 6449,
  [SMALL_STATE(356)] = 6457,
  [SMALL_STATE(357)] = 6465,
  [SMALL_STATE(358)] = 6473,
  [SMALL_STATE(359)] = 6481,
  [SMALL_STATE(360)] = 6489,
  [SMALL_STATE(361)] = 6497,
  [SMALL_STATE(362)] = 6505,
  [SMALL_STATE(363)] = 6513,
  [SMALL_STATE(364)] = 6521,
  [SMALL_STATE(365)] = 6529,
  [SMALL_STATE(366)] = 6537,
  [SMALL_STATE(367)] = 6545,
  [SMALL_STATE(368)] = 6553,
  [SMALL_STATE(369)] = 6561,
  [SMALL_STATE(370)] = 6571,
  [SMALL_STATE(371)] = 6579,
  [SMALL_STATE(372)] = 6587,
  [SMALL_STATE(373)] = 6595,
  [SMALL_STATE(374)] = 6603,
  [SMALL_STATE(375)] = 6611,
  [SMALL_STATE(376)] = 6619,
  [SMALL_STATE(377)] = 6627,
  [SMALL_STATE(378)] = 6635,
  [SMALL_STATE(379)] = 6645,
  [SMALL_STATE(380)] = 6653,
  [SMALL_STATE(381)] = 6663,
  [SMALL_STATE(382)] = 6671,
  [SMALL_STATE(383)] = 6681,
  [SMALL_STATE(384)] = 6689,
  [SMALL_STATE(385)] = 6697,
  [SMALL_STATE(386)] = 6705,
  [SMALL_STATE(387)] = 6713,
  [SMALL_STATE(388)] = 6721,
  [SMALL_STATE(389)] = 6729,
  [SMALL_STATE(390)] = 6737,
  [SMALL_STATE(391)] = 6745,
  [SMALL_STATE(392)] = 6753,
  [SMALL_STATE(393)] = 6761,
  [SMALL_STATE(394)] = 6769,
  [SMALL_STATE(395)] = 6777,
  [SMALL_STATE(396)] = 6785,
  [SMALL_STATE(397)] = 6793,
  [SMALL_STATE(398)] = 6801,
  [SMALL_STATE(399)] = 6809,
  [SMALL_STATE(400)] = 6817,
  [SMALL_STATE(401)] = 6825,
  [SMALL_STATE(402)] = 6833,
  [SMALL_STATE(403)] = 6841,
  [SMALL_STATE(404)] = 6849,
  [SMALL_STATE(405)] = 6859,
  [SMALL_STATE(406)] = 6867,
  [SMALL_STATE(407)] = 6875,
  [SMALL_STATE(408)] = 6883,
  [SMALL_STATE(409)] = 6891,
  [SMALL_STATE(410)] = 6899,
  [SMALL_STATE(411)] = 6907,
  [SMALL_STATE(412)] = 6915,
  [SMALL_STATE(413)] = 6923,
  [SMALL_STATE(414)] = 6931,
  [SMALL_STATE(415)] = 6939,
  [SMALL_STATE(416)] = 6947,
  [SMALL_STATE(417)] = 6955,
  [SMALL_STATE(418)] = 6963,
  [SMALL_STATE(419)] = 6971,
  [SMALL_STATE(420)] = 6979,
  [SMALL_STATE(421)] = 6987,
  [SMALL_STATE(422)] = 6995,
  [SMALL_STATE(423)] = 7003,
  [SMALL_STATE(424)] = 7011,
  [SMALL_STATE(425)] = 7019,
  [SMALL_STATE(426)] = 7027,
  [SMALL_STATE(427)] = 7035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 66),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 66),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 65),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 65),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, 0, 61),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, 0, 61),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 68),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 68),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 67),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 67),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, 0, 43),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, 0, 43),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 53),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 53),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 52),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 52),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 62),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 62),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 15),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 15),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 16),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 16),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 16),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 16),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 7),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 7),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 34),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 34),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 47),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 47),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 5),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 5),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 15),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 15),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, 0, 19),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, 0, 19),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 6),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 6),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 4),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 15),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 15),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(145),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(303),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 15),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 15),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 49),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 49),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 12),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 44),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 3),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 44),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1, 0, 0),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 11),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 11),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, 0, 31),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, 0, 31),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 55),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 55),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 54),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 54),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 14),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, 0, 25),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, 0, 0),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, 0, 25),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 39),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, 0, 46),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, 0, 46),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, 0, 38),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, 0, 38),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 35),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 35),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 40),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 39),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 40),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, 0, 48),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, 0, 48),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 11),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 11),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 8),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 39),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(310),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, 0, 36),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, 0, 36),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 27),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 8),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 40),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 39),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 40),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 32),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 32),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, 0, 41),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 18),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 18),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, 0, 63),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 56),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 56),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1, 0, 51),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1, 0, 51),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, 0, 42),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, 0, 13),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 2),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 50),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 50),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 33),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 33),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 23),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 22),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 20),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 26),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 17),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 29),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 28),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 9),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 21),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 30),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 18),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 24),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 27),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 45),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, 0, 57),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 58),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 59),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 60),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 64),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token_heredoc_nl = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_line] = sym_heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token_heredoc_nl] = sym_heredoc_nl,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_nl] = true,
  },
  [4] = {
    [ts_external_token_heredoc_nl] = true,
  },
  [5] = {
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dockerfile_external_scanner_create(void);
void tree_sitter_dockerfile_external_scanner_destroy(void *);
bool tree_sitter_dockerfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dockerfile_external_scanner_serialize(void *, char *);
void tree_sitter_dockerfile_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dockerfile(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dockerfile_external_scanner_create,
      tree_sitter_dockerfile_external_scanner_destroy,
      tree_sitter_dockerfile_external_scanner_scan,
      tree_sitter_dockerfile_external_scanner_serialize,
      tree_sitter_dockerfile_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
